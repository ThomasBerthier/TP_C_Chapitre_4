#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void saisie(char *text);
void affiche(char *text);

void saisie(char *text) {

    gets(text);
    printf("%s", text);

}

void affiche(char *text) {
    for(int i = 0; i < strlen(text); i++)
        printf("\n%c\t%p", text[i], &text[i]);
}


int main()
{
    char *text[500];
    saisie(&text);
    affiche(&text);

}
