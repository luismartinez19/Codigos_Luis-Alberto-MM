// código de Luis Alberto Martínez Morales Triángulos formados por asteriscos "*"//

#include <stdio.h>

int main()
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
  return 0;
}
