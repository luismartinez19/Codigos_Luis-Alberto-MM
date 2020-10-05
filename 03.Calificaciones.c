#include <stdio.h>

int main ()
{
    char C1, C2, C3;
    float Calificacion, Promedio, c1, c2, c3;

    printf ( "Escribe la primera calificacion con letra: ");
    scanf ( "%c",&C1);
    fflush (stdin);
    printf ("Escribe la segunda calificacion con letra: ");
    scanf ( "%c",&C2);
   fflush (stdin);
    printf ("Escribe la tercera calificacion con letra: ");
    scanf ("%c",&C3);

              /* Para la primera calificacion con letra */

    if (C1=='A'||C1=='a')
    {
        c1=10;
    }
    else if (C1=='B'||C1=='b')
    {
        c1=9;
    }
    else if (C1=='C'||C1=='c')
    {
        c1=8;
    }
    else if (C1=='D'||C1=='d')
    {
        c1=7;
    }
    else if (C1=='E'||C1=='e')
    {
        c1=6;
    }

              /* Para la segunda calificacion con la letra */

    if (C2=='A'||C2=='a')
    {
        c2=10;
    }
    else if (C2=='B'||C2=='b')
    {
        c2=9;
    }
    else if (C2=='C'||C2=='c')
    {
        c2=8;
    }
    else if (C2=='D'||C2=='d')
    {
        c2=7;
    }
    else if (C2=='E'||C2=='e')
    {
        c2=6;
    }


    /* Para  la tercera Calificacion con letra */

    if (C3=='A'||C3=='a')
    {
        c3=10;
    }
    else if (C3=='B'||C3=='b')
    {
        c3=9;
    }
    else if (C3=='C'||C3=='c')
    {
        c3=8;
    }
    else if (C3=='D'||C3=='d')
    {
        c3=7;
    }
    else if (C3=='E'||C3=='e')
    {
        c3=6;
    }


    Calificacion = c1 + c2 + c3;
    Promedio = Calificacion / 3 ;

//--------------------------------------------//
    if (Promedio>=6)
    {
        printf ( "\nAprovado\n");
    }
    else
    {
        printf ( "\nReprovado\n" );
    }

    return 0 ;

}
