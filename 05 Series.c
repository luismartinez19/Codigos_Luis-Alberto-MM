// codigo de ciclos  de Luis Alberto Martinez Morales
# include<stdio.h>

int main()
{
    int conteo=0;
    int n;

    printf("Cual es el valor de n:");
    scanf("%d", &n);

    while (conteo<=n)
    {
        printf("%d", conteo);
        conteo=conteo-1;
    }

    if (conteo>=0)
    {
        printf("\n Final del ciclo");
    }

    return 0;
}
