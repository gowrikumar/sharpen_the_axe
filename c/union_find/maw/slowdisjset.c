#include "disjset.h"

void Initialize(DisjSet s)
{
	int i;
	for(i=0;i<=N;i++) /* the array is from 0 to N - total of N+1 elements */
		s[i] = 0;
}

void SetUnion(DisjSet s, SetType root1, SetType root2)
{
	s[root1] = root2;
}

SetType Find(Element x, DisjSet s)
{
	if(s[x] <= 0)
		return x;
	return Find(s[x],s);
}

int main()
{
	DisjSet s;
	int i,j,k, Set1, Set2;
	Initialize(s);

	j = k = 1;
	while(k <= 8)
	{
		j = 1;
		while(j<N)
		{
			Set1 = Find(j,s);
			Set2 = Find(j+k,s);
			SetUnion(s,Set1,Set2);
			j += 2*k;
		}
		k *= 2;
	}

	for(i=1;i<=N;i++)
	{
		Set1 = Find(i,s);
		printf("%d**",Set1);
	}
	printf("\n");
	return 0;
}
