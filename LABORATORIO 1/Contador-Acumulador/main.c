#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0;
    int acumulador=0;
    int edad;
    int promedio;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    do{

            contador++;
            acumulador=acumulador + edad;


    }while(edad < 99);

    promedio = acumulador/contador;

    return 0;
}
