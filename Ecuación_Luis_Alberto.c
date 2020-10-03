#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c,x1,x2;
printf("Para hallar las respuestas de una ecuación cuadrática, por favor:\n");
printf("\n Ingresa el coeficiente de segundo grado:");
scanf("%f", &a);
printf("\n Ingresa el coeficiente de primer grado:");
scanf("%f", &b);
printf("\n Ingresa el coeficiente independiente:");
scanf("%f", &c);
x1=(-b+sqrt(b*b-4.0*a*c))/2.0/a;
x2=(-b-sqrt(b*b-4.0*a*c))/2.0/a;
printf("\n El primer resultado es: %.2f\n", x1);
printf("\n El segundo resultado es: %.2f\n", x2);

return 0;
}
