//Programa de contador decreciente de Luis Alberto Martínez Morales
//#include<stdlib.h>
//system("cls");

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
            printf("%d",N*N-2*i);
            i=i+1;
        }
        printf("\nQuieres ver otros valores si/no:");
        scanf("%s",&opc);
    }
    printf("\nPrograma finalizado");
    return 0;
}
