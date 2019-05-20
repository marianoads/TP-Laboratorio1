#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
}
eEmpleado;

int main()
{
    eEmpleado* punteroEmp = (eEmpleado*) malloc(sizeof(eEmpleado));

    if (punteroEmp == NULL){
        printf("No se encontro espacio de memoria");
    }
    else {
ç
    printf("Ingrese legajo :");
    scanf("%d", &punteroEmp->legajo);

    printf("Ingrese nombre :");
    fflush(stdin);
    gets(punteroEmp->nombre);

    printf("Ingrese sexo :");
    fflush(stdin);
    scanf("%c", &punteroEmp->sexo);

    printf("Ingrese sueldo :");
    scanf("%f", &punteroEmp->sueldo);

    printf("\nLeg: %d   Nombre: %s   Sexo: %c    Sueldo: %.2f \n", punteroEmp->legajo,punteroEmp->nombre,punteroEmp->sexo,punteroEmp->sueldo);

    free(punteroEmp); // LIBERO ESPACIO


    }


    return 0;
}
