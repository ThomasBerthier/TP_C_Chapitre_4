#include <stdio.h>
#include <stdlib.h>

int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
 int *P;
 P = A;

 a) *P+2 // 34
b) *(P+2) // 34
c) &P+1 // 23
d) &A[4]-3
e) A+3
f) &A[7]-P
g) P+(*P-10)
h) *(P+*(P+8)-A[7])
