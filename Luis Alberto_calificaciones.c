//programa de Luis Alberto Martinez Morales para calcular el promedio de 3 calificaciones.
#include <stdio.h>
#include <conio.h>

main()
{
    float c1,c2,c3,resultado;
    printf("cu�l es tu primera calificacion?");
    scanf("%f", &c1);
    printf("cu�l es tu segunda calificacion?");
    scanf("%f", &c2);
    printf("cu�l es tu tercera calificacion?");
    scanf("%f", &c3);
    resultado=(c1+c2+c3)/3;

    if(resultado<=8)
    {
        printf("reprobado");
    }
    else{
        printf("aprobado");
    }
    printf("tu promedio es %f", resultado);

    return 0;
}
