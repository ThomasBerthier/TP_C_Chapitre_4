#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void saisie(float *aa,float *bb,float *cc);
float *calcul(float aa,float bb,float cc);

int main()
{
    float *resultat, a = 0, b = 0, c = 0;
    int i;
    saisie(&a, &b, &c);
    resultat = calcul(a, b, c);
    for(i=1;i<=2;i++)
        resultat[i] = resultat[i]/4;

    if(resultat[0] == 2 )
    {
        printf("%.0f solution\n",resultat[0]);
        for(int i = 1;i <=resultat[0];i++)
        {
            printf("Solution %d = %f\n",i,resultat[i]);
        }
    }

    if(resultat[0] == 1)
    {
        printf("%.0f solutions\n",resultat[0]);
        for(int i = 1;i <= resultat[0];i++)
        {
            printf("Solution %d = %f\n",i,resultat[i]);
        }
    }
    if((resultat[0] == 0))
    {
        printf("Pas de solution");
    }

}

void saisie(float *aa,float *bb,float *cc)
{
    scanf("%f",aa);
    scanf("%f",bb);
    scanf("%f",cc);
}

float *calcul(float aa,float bb,float cc)
{
    float delta;
    float *x1 = (float*)malloc(3*sizeof(float));
    float *x2 = (float*)malloc(2*sizeof(float));
    delta = bb*bb-4*aa*cc;

    if(delta > 0)
    {
        x1[0] = 2;
        x1[1] = (-bb-sqrt(delta))/2*aa;
        x1[2] = (-bb+sqrt(delta))/2*aa;
        return x1;
    }
    if(delta == 0)
    {
        x2[0] = 1;
        x2[1] = -bb/(2*aa);
        return x2;
    }
    if(delta < 0)
    {
        x2[0] = 0;
        return;
    }
}


