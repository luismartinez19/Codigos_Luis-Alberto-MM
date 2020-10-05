////////Luis Alberto Martínez Morales
////////////4°C________MAAU/////////////
#include <stdio.h>
#include <math.h>

void ecuaciones (double, double, double, double *, double *);

int main(void)

{
    double a, b, c, x1, x2;

    while(1+1==2){
    printf("Escriba a: \n");
    scanf("%lf", &a);
    fflush (stdin);
    printf("Escriba b: \n");
    scanf("%lf", &b);
    fflush (stdin);
    printf("Escriba c: \n");
    scanf("%lf", &c);

    ecuaciones(a, b, c, &x1, &x2);
    printf("Las respuesta son:x1 =%lf, y x2= %lf \n", x1, x2);
    return 0;
    }
    //////esta es la funcion//////
}
void ecuaciones (double a, double b, double c, double *x1, double *x2)
/////algoridmo de la formula general////
{
    *x1 = (-b+(sqrt(b*b-4*a*c)))/2*a;
    *x2 = (-b-(sqrt(b*b-4*a*c)))/2*a;
}
