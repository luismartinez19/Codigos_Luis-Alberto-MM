//////////// Luis Alberto Martinez Morales /// 4°C /// MAAU ///////////

#include <stdio.h>

int main()
{

    float V, R;
    float Lr, Lv, La, Lb; // Rojo 2v - 0.02A // Verde 3v - 0.02 // Azul 3v - 0.02 // Blanco 2.8v - 0.02


    printf ("Escribe el valor de la fuente V:");
    scanf ("%f", &V);

    Lr = (V-2) /0.02;
    Lv = (V-3) /0.02;
    La = (V-3) /0.02;
    Lb = (V-2.8) /0.02;

    printf ("La resistencia para el color Rojo es:% .2fOhm's \n", Lr);
    printf ("La resistencia para el color Verde es:% .2fOhm's \n", Lv);
    printf ("La resistencia para el color Azul es:% .2fOhm's \n", La);
    printf ("La resistencia para el color Blanco es:% .2fOhm's \n", Lb);

return 0;}
