#include <stdio.h>
#include <stdlib.h>

void affiche(int *tab,int i,int j);


int main(int argc,char**argv)
{
    int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},
        tab2[] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};

    for(int i = 0; i < 20 ; i++) {
        for(int j = 0; j < 20 ; j++) {
            affiche(&tab1, tab2[j], tab1[i]);
        }
            printf("\n");
    }

}

void affiche(int *tab,int i,int j) {
    printf("%d\t ", i * j);
}
