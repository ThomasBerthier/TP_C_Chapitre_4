#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
 int *P;
 P = A;
 printf("%p,",P+2);
}




/*int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
 int *P;
 P = A;

 a) *P+2  //14
b) *(P+2) //34
c) &P+1  // recup�re l'adresse du 2�me pos du tableau
d) &A[4]-3 //recup�re l'adresse � la deuxi�me pos du tableau car [4]-3 = [1]
e) A+3 // 45
f) &A[7]-P //adresse de l'�l�ment � la 8�me pos du tableau moins adresse de l'�l�ment de la premi�re pos
g) P+(*P-10) // revient a P+2 donc adresse du troisi�me �l�ment
h) *(P+*(P+8)-A[7]) // *(P+90-A[7]) -> *(P+90-89) -> *(P+1) -> 23.
*/
