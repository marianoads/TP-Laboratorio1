#include <stdio.h>
#include <stdlib.h>


int main()
{
    char letra = 'a';
    char palabra [] = "Hola";

    char *p;
    char *q;

    q=palabra;

    mostrarCadena(q);
    printf("\n\n");

    mostrarCadena2(q);

    mostrarCadena3(q);

    return 0;
}

void mostrarCadena (char *punteroCadena)
{
    printf("Mostrar puntero con while\n");
    while(*punteroCadena != '\0')
    {
        printf("%c  %p\n",*punteroCadena, punteroCadena);
        punteroCadena++;
    }
}

void mostrarCadena2 (char *punteroCadena)
{
    printf("Mostrar puntero con for\n");
    for(int i=0; i<4; i++)
    {
        printf("%c  %p\n",*(punteroCadena+i), punteroCadena);

    }
}

void mostrarCadena3 (char *punteroCadena)
{   int i=0;

    printf("Mostrar puntero con while MODIFICADO\n");
    while(*(punteroCadena+i) != '\0')
    {
        printf("%c  %p\n",*(punteroCadena+i), punteroCadena);
        i++;
    }
}
