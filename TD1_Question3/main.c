#include <stdio.h>
#include <stdlib.h>

void saisie(int *val,int *nb);
void affiche(int *nb);

void saisie(int *val,int *nb) {

    int temp;
    for (*nb; *nb <= 19;(*nb)++){
        scanf("%d", &temp);
        if(temp == 0) {
            break;
        } else {
            val[*nb] = temp;
        }
    }

    for(int i=0;i<=*nb - 1;i++)
        printf("%d",val[i]);

}


void affiche(int *nb) {
    printf("\nIl y a %d valeurs dans le tableau", *nb);
}


void main() {

    int val[19],
        *nb = 0;

    saisie(&val, &nb);
    affiche(&nb);

    return 0;

}
