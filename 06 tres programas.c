////Programa de Luis Alberto Martinez Morales codigo de menu de 4 figuras de un triangulo con asteriscos (*) y de 4 series de numeros//
#include <stdio.h>
#include <stdlib.h>



int main ()
{
    int ops = 1 ;
    char opc = ' s ';

    while (ops!= 2 )
    {
// /////// --------------------------------------- // //////////
        while (opc == ' s ' || opc == ' S ' )
        {
            printf ( " \ n \ n ***--------------- Los tres programas ----------------*** \ n \ n " );
            printf ( " 1. Figuras de asteriscos * triangulos \ n         2. La Sucesion \ n " );
            printf ( " \ n \ a Selecciona el número del programa: " );
            scanf ( " % d ", & ops);

            if (ops==1)
            {
                int n,linea=1;

                n=10;

                printf("(A)");

                for(int na=1; na<=n ; na++)
                {
                    for(int i=1; i<=linea; i++)
                    {
                        printf("*");
                    }
                    printf("\n");
                    linea=linea+1;
                }

                n=10;

                printf("(B)");

                printf("\n");
                for(int na=0; na<=n; na++)
                {
                    for(int i=2; i<=linea; i++)
                    {
                        printf("*");
                    }
                    printf("\n");
                    linea=linea-1;
                }

                n=10;

                printf("(C)");

                printf("\n");
                int linea1=1, ne=n-1;

                for(int na=1; na<=n; na++)
                {
                    for(int i=1; i<=ne; i++) // for para espscios ne= espacios//
                        printf(" ");

                    for(int i=1; i<=linea1; i++)
                        printf("*");
                    printf("\n");
                    linea1 = linea1+1;
                    ne= ne-1;
                }

                n=10;
                printf("(D)");

                printf("\n");
                for(int na=1; na<=n; na++)
                {
                    for(int i=-1; i<=ne; i++)
                        printf(" ");
                    for(int i=2; i<=linea1; i++)
                        printf("*");
                    printf("\n");
                    linea1=linea1-1;
                    ne=ne+1;

                }
                }
                /////----------------------------- 2.Secuencia --------------------////////////////////
                else if(ops==2)
                {
                    int A,B,C,D;

                    A=1;
                    B=2;
                    C=-30;
                    D=15;


                    system("PAUSE");

                    printf("Sucesion A)\n");

                    do {
                        printf("%d\n",A);
                        A=A+2;
                    }    while(A<=13);
                    system ("PAUSE");

                    printf("Sucesion B)\n");

                    do {
                        printf("%d\n",B);
                        B=B+3;
                    }    while(B<=17);
                    system ("PAUSE");

                    printf("Sucesion C)\n");

                    do {
                        printf("%d\n",C);
                        C=C+10;
                    }    while(C<=30);
                    system ("PAUSE");


                    printf("Sucesion D)\n");

                    do {
                        printf("%d\n",D);
                        D=D+8;
                    }    while(D<=55);
                    system ("PAUSE");



                    printf("FIN PROGRAMA");


                }
                else
                {
                    printf("\n\n\a ---------------Error el numero no se encuentra en el menu!!------------\a");
                }
//------------------------------------------
                printf("\n\n Desea seleccionar otro programa s/n: ");
                scanf("%s", &opc);
                printf(" Presione para continuar...\a");
                getch();
                system("cls");
            }
//////////-------------------------------------------------------------------------------//////////////
            printf("\n\n\a------------Programa finalizado------------\n");
            return 0;
        }
        return 0;
    }
