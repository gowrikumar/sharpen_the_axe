#ifndef _DISJSET_H
#define _DISJSET_H

#include <stdio.h>
#include <stdlib.h>

#define N 128

typedef int DisjSet[ N + 1]; /* N+1 is key here. If the node contains 0, then that is the root */

typedef int SetType;
typedef int Element;

void Initialize(DisjSet S);
void SetUnion(DisjSet s, SetType Root1, SetType Root2);
SetType Find(Element x,DisjSet S);

#endif /* DISJSET_H */
