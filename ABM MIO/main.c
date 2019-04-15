#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 3

typedef struct{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int estado;
}eEmpleado;

int menu();
//void inicializarEmpleado(eEmpleado vec[], int tam);
void mostrarEmpleado(eEmpleado emp);
void mostrarEmpleados(eEmpleado vec[], int tam);
int buscarLibre(eEmpleado vec[], int tam);


int main()
{
    char seguir='s';
    int opcion=0;
    eEmpleado lista[TAM]={{123,"Juan",'m',2344,1},{1234,"Maria",'f',223344,1},{321,"Jorge",'m',232344,0}};


    while(seguir=='s')
    {   printf(" ***************  ABM EMPLEADOS ***************  \n");

        printf("1- Alta empleado\n");
        printf("2- Baja empleado\n");
        printf("3- Modificar empleado\n");
        printf("4- Listar\n");
        printf("5- Ordenar\n");
        printf("6- Salir\n\n");

        printf("Ingrese opcion :");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Alta empleado");

                break;
            case 2:
                printf("Baja empleado");
                break;
            case 3:
                printf("Modificar empleado");

                break;
            case 4:
                printf("Listar empleado");
                mostrarEmpleado(eEmpleado );
                break;
            case 5:
                printf("Ordenar empleado");
                break;

            case 6:
                printf("Desea salir? (s/n)");
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
void inicializarEmpleado(eEmpleado vec[],  int tam){
    for(int i=0; i< tam; i++){
        vec[i].estado= 0;
    }
}
void mostrarEmpleado(eEmpleado emp){
printf("%d %s %c %d", emp.legajo, emp.nombre, emp.sexo, emp.sueldo );
}
void mostrarEmpleados(eEmpleado vec[], int tam){
for(int i=0; i<tam; i++){
    if(vec[i].estado == 1){
        mostrarEmpleado(vec[i]);
    }
}

}
