#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,resultat=1;
    unsigned int k,i;
    printf("Insérer une valeur de x : ? ");
    scanf("%lf",&x);
    printf("Insérer une valeur de k : ? ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        resultat=resultat*x;
    }

    //debug
    /*
    printf("k = %d",k);
    printf("\nx = %lf",x);
    */

    printf("\nresultat = %f",resultat);
    return 0;
}
