// código de Luis Alberto Martínez Morales sucesión de números//
#include <stdio.h>
#include <stdlib.h>

int main()
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
    system ;

    printf("Sucesion B)\n");

    do {
        printf("%d\n",B);
        B=B+3;
    }    while(B<=17);
    system ;

    printf("Sucesion C)\n");

    do {
        printf("%d\n",C);
        C=C+10;
    }    while(C<=30);
    system ;


    printf("Sucesion D)\n");

    do {
        printf("%d\n",D);
        D=D+8;
    }    while(D<=55);
    system ("PAUSE");


    printf("FIN PROGRAMA");
  return 0;
}
