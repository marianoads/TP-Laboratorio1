#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int flagA=0,flagB=0;
    float numeroA, numeroB;
    char seguir='s';
    int opcion=0;


    while(seguir=='s')
    {
        printf("                                                   \n");
        printf("  ////////////////////CALCULADORA//////////////////\n");
        printf("                                                   \n");
        printf("\n");
        if(flagA==0)
        {
        printf("          1- Ingresar 1er operando \n");
        }
        else
        {
        printf("          1- Ingresar 1er operando (A=%.2f) \n",numeroA);
        }
        if(flagB==0)
        {
            printf("          2- Ingresar 2do operando \n");
        }
        else
        {
            printf("          2- Ingresar 2do operando (B=%.2f)\n",numeroB);
        }
        printf("          3- Calcular la suma (A+B)\n");
        printf("          4- Calcular la resta (A-B)\n");
        printf("          5- Calcular la division (A/B)\n");
        printf("          6- Calcular la multiplicacion (A*B)\n");
        printf("          7- Calcular el factorial (A!)\n");
        printf("          8- Calcular todas las operaciones.\n");
        printf("                   9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                numeroA=IngresarNumero('A');
                flagA=1;
                break;
            case 2:
                numeroB=IngresarNumero('B');
                flagB=1;
                break;
            case 3:
                if(flagA==0 || flagB==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                   Suma(numeroA,numeroB);
                }
                break;
            case 4:
                if(flagA==0 || flagB==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Resta(numeroA,numeroB);
                }
                break;
            case 5:
                if(flagA==0 || flagB==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Division(numeroA,numeroB);
                }
                break;
            case 6:
                if(flagA==0 || flagB==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Multiplicacion(numeroA,numeroB);
                }
                break;
            case 7:
                if(flagA==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                Factorial(numeroA);
                }
                break;
            case 8:
                if(flagA==0 || flagB==0)
                {
                    printf("Error, no ingresaste ningun valor.");
                }
                else
                {
                MostrarTodoLosResultados(numeroA,numeroB);
                }
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Error, reingrese una opcion correcta (1-9)");
                break;
        }
        getch();
        system("cls");
    }
 return 0;
}
