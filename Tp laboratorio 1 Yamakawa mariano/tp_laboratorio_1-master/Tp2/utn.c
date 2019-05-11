#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "utn.h"
#include "ArrayEmployees.h"


int pedirOpcionMenu()
{
    int opcion;
    printf("********* ABM EMPLEADOS ***********\n\n");
    printf(" 1. Alta  \n 2. Modificar  \n 3. Baja\n 4. Informes\n 5. Salir\n");
    opcion = getInt("\nIngrese una opcion\n");
    return opcion;
}
int mostrarMenuModificar()
{
    int optionModify;
    printf("                            \n");
    printf(" 1. Nombre\n 2. Apellido\n 3. Sueldo \n 4. Sector\n");
    optionModify = getInt("\nIngrese una opcion :\n");
    return optionModify;
}

int mostrarInformes()
{
    int optionShow;
    printf("                   INFORMES                 \n");
    printf("%s %s \n", " 1. Listado de los empleados ordenados alfabéticamente por Apellido y Sector\n", "2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio.");
    optionShow = getInt("\nIngrese una opcion :\n");
    return optionShow;
}




int getInt(char mensaje[])
{
    char auxiliarChar[10];
    int enteroARetornar;

    printf("%s", mensaje);
    scanf("%s", auxiliarChar);
    fflush(stdin);
    enteroARetornar = atoi(auxiliarChar);

    while(enteroARetornar == 0)
    {
        printf("%s", "Valor invalido. Ingrese un numero \n");
        scanf("%s", auxiliarChar);
        fflush(stdin);
        enteroARetornar = atoi(auxiliarChar);
    }

    return enteroARetornar;

}

float getFloat(char mensaje[])
{
    char auxiliarChar[10];
    float floatARetornar;

    printf("%s", mensaje);
    scanf("%s", auxiliarChar);
    fflush(stdin);
    floatARetornar = atof(auxiliarChar);

    while(floatARetornar == 0)
    {
        printf("%s", "Valor invalido. Ingrese un numero \n");
        scanf("%s", auxiliarChar);
        fflush(stdin);
        floatARetornar = atof(auxiliarChar);
    }


    return floatARetornar;

}


void getString(char mensaje[], char input[])
{
    printf(mensaje);
    fflush(stdin);
    gets(input);
}

