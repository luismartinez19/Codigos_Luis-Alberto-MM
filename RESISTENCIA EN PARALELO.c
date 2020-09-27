// Luis albeeto martinez Codigo de calculo de resistencias

# include<stdio.h>

int main ()
{
    int VS;
    int R1,R2,R3;
    float I,RT,RR;

    printf("Escribir el valor de la fuente VS:");
    scanf("%d",&VS);

    printf("Escribir el valor de la resistencia R1:");
    scanf("%d",&R1);

    printf("Escribir el valor de la resistencia R2:");
    scanf("%d",&R2);

    printf("Escribir el valor de la resistencia R3:");
    scanf("%d",&R3);

    RR=(R2*R3)/(R1+R3);
    RT=(R1*RR)/(R1+RR);
    I=VS/RT;
    printf("Resultado total de la corriente: %fA",I);
    return 0;
}
