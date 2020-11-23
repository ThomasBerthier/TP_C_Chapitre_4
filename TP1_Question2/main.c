#include <stdio.h>
#include <stdlib.h>

void saisie(int *adr_deb);
void affiche(int *adr_deb);
void tri(int *adr_deb);

void saisie(int *adr_deb) {

    for (int i = 0; i < 6; i++)
        scanf("%d", &adr_deb[i]);
}

void tri(int *adr_deb) {
    int temp;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6-i-1; j++){
            if(adr_deb[j] > adr_deb[j+1]){
                temp = adr_deb[j+1];
                adr_deb[j+1] = adr_deb[j];
                adr_deb[j] = temp;
            }
        }
    }
}


void affiche(int *adr_deb) {
    printf("Max : %d\tAdresse : %p", adr_deb[5],&adr_deb[5]);

}

int main()
{

    int adr_deb[6];
    saisie(&adr_deb);
    tri(&adr_deb);
    affiche(&adr_deb);


}
