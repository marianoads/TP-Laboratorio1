#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "sector.h"
#include "almuerzo.h"
#include "comida.h"
#include "utn.h"


void inicializarAlmuerzos(eAlmuerzo almuerzos[], int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        almuerzos[i].isEmpty = 0;
    }
}

void altaAlmuerzo(eEmpleado empleados[],int tam,eSector sectores[], int tamSector, eComida menues[], int tamComida){
int id;
int indice;


mostrarEmpleados(empleados,tam,sectores,tamSector);
/*mostrarEmpleados(empleados, tam, sectores, tamSector);*/
printf("Ingrese legajo de empleado :");
fflush(stdin);
scanf("%d", &id);

indice = buscarEmpleado(empleados, tam, id);

if(indice== -1){

    printf("No se encontro legajo\n");
    system("pause");
    }
    else{
    mostrarMenues(menues,tamComida,menues); /// NO MUESTRA LISTADO DE MENUES
    system("pause");

    }
}
