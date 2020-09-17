#include <stdio.h>
#include <stdlib.h>


int main()
{
    double x,resultat;
    unsigned int k,i;
    printf("Insérer une valeur de x : ? ");
    scanf("%lf",&x);
    printf("Insérer une valeur de k : ? ");
    scanf("%d",&k);
    resultat=x;
    while(k>0)
    {
        if(k==1)
        {
            resultat= resultat*x;
            k=k-1;
        }
        else if(k%2) //k est impair
        {
            resultat = resultat*(x*x);
            k=k-3;
            //debug
            printf("\nk = %d, resultatp = %d",k,resultat);
        }
        else if(!k%2) //k est pair
        {
            resultat = resultat*x;

            if(k==2) k=0;
            else
            {
                k=k-2;
            }
            printf("\nk = %d, resultatp = %d",k,resultat);
        }
    }

    printf("\nresultat = %f",resultat);
    return 0;
}

