#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable1 = 10;
    float variable2 = 25.6;
    int numero1;
    int numero2;
    char nombre[10];


    printf ("La suma de las dos variables es : %.2f\n", variable1 + variable2);
    printf ("La variable 1 es igual a : %d\n", variable1);
    printf ("La variable 2 es igual a : %.2f\n", variable2); //El %2.f muestra dos decimales despues de la ','

    printf("Ingrese un nombre :");
    scanf("%s", &nombre);
    printf("El nombre ingresado es : %s\n", nombre);

    printf("Ingrese un numero :"); //Se pide que ingrese un numero
    scanf ("%d", &numero1); //Se guarda el numero
    printf("El numero ingresado es : %d\n", numero1); //Se muestra el numero

    printf("Ingrese un numero :"); //Se pide que ingrese un numero
    scanf ("%d", &numero2); //Se guarda el numero
    printf("El numero ingresado es : %d\n", numero2); //Se muestra el numero

    printf("La suma de los dos numeros ingresados es : %d %d\n", numero1+numero2);








    return 0;
}
