//programa de ciclos asendentes Luis Alberto Martinez Morales

#include<stdio.h>
int main()
{
    int N, i ;
    char opc='s' ;
    while(opc=='s') //ciclo controlado por sentinela
    {
        i=0;  //el contador de vueltas (ciclos)
        printf("Dame el valor de N:");
        scanf("%d",&N);
        while(i<=N) //ciclo controlado por contador
        {
            printf("%d %d \a",3*N+2*i+2*i,3*N+2*i+2*i+2 ); //formula para el encotrar la serie numerica
            i=i+1;
        }
        printf("\nQuieres ver otros valores si/no:");
        scanf("%s",&opc);
    }
    printf("\nPrograma finalizado");
    return 0;
}
