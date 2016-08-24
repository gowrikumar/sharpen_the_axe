/* gcc -Wall count_bits.c */

#include <stdio.h>
#include <assert.h>

unsigned int CountBits0(unsigned int n)
{
	unsigned int count = 0;
	while(n)
	{
		if(n&1) 
			count++;
		n = n>>1;
	}
	return count;
}

unsigned int CountBits1(unsigned int n)
{
	unsigned int count = 0;
	while(n)
	{
		count++;
		n = n & (n-1);
	}

	return count;
}

unsigned int CountBits2(unsigned int n)
{
	n = (n & 0x55555555) + ( (n>>1) & 0x55555555);
	n = (n & 0x33333333) + ( (n>>2) & 0x33333333);
	n = (n & 0x0F0F0F0F) + ( (n>>4) & 0x0F0F0F0F);
	n = (n & 0x00FF00FF) + ( (n>>8) & 0x00FF00FF);
	n = (n & 0xFFFF) + ( (n>>16) & 0xFFFF);
	return n;

}


int bitcount[256] = {0,1,1,2,1,2,2,3,
1,2,2,3,2,3,3,4,
1,2,2,3,2,3,3,4,
2,3,3,4,3,4,4,5,
1,2,2,3,2,3,3,4,
2,3,3,4,3,4,4,5,
2,3,3,4,3,4,4,5,
3,4,4,5,4,5,5,6,
1,2,2,3,2,3,3,4,
2,3,3,4,3,4,4,5,
2,3,3,4,3,4,4,5,
3,4,4,5,4,5,5,6,
2,3,3,4,3,4,4,5,
3,4,4,5,4,5,5,6,
3,4,4,5,4,5,5,6,
4,5,5,6,5,6,6,7,
1,2,2,3,2,3,3,4,
2,3,3,4,3,4,4,5,
2,3,3,4,3,4,4,5,
3,4,4,5,4,5,5,6,
2,3,3,4,3,4,4,5,
3,4,4,5,4,5,5,6,
3,4,4,5,4,5,5,6,
4,5,5,6,5,6,6,7,
2,3,3,4,3,4,4,5,
3,4,4,5,4,5,5,6,
3,4,4,5,4,5,5,6,
4,5,5,6,5,6,6,7,
3,4,4,5,4,5,5,6,
4,5,5,6,5,6,6,7,
4,5,5,6,5,6,6,7,
5,6,6,7,6,7,7,8
};

unsigned int CountBits3(unsigned int n)
{
	return bitcount[n&0xFF] + 
		bitcount[(n>>8)&0xFF] +
		bitcount[(n>>16) & 0xFF] +
		bitcount[(n>>24) & 0xFF];
}


int main()
{
	unsigned int i;
	for(i=0;i<17;i++)
	{
		printf("%u => %u\n",i,CountBits3(i));
		assert(CountBits0(i) == CountBits1(i));
		assert(CountBits1(i) == CountBits2(i));
		assert(CountBits2(i) == CountBits3(i));
	}

	return 0;
}

