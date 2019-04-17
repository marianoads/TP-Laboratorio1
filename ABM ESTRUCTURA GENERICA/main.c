#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM 4
typedef struct{
int dia;
int mes;
int anio;
}eFecha;

typedef struct
{
    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;
    int estado;
    eFecha fechaNac;
} eEmpleado;

void mostrarEmpleado(eEmpleado emp);
void mostrarEmpleados(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
int buscarLibre(eEmpleado vec[], int tam);
int bajaEmpleado(eEmpleado vec[], int tam);
int modificarEmpleado (eEmpleado vec[], int tam);
int main()
{
    char seguir='s';
    int opcion=0;

    eEmpleado lista[TAM] = {{123,"Juan",'m',2344,1},{1234,"Maria",'f',223344,1},{321,"Jorge",'m',232344,1}};
    eFecha fec [TAM] = {};
    while(seguir=='s')
    {
        printf(" ***************  ABM EMPLEADOS ***************  \n");

        printf("1- Alta empleado\n");
        printf("2- Baja empleado\n");
        printf("3- Modificar empleado\n");
        printf("4- Listar\n");
        printf("5- Ordenar\n");
        printf("6- Salir\n\n");

        printf("\nIngrese opcion :");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            altaEmpleado(lista, TAM);
            system("pause");
            break;
        case 2:
            bajaEmpleado(lista, TAM);
            break;
        case 3:
            modificarEmpleado(lista, TAM);
            system("pause");
            break;
        case 4:

            mostrarEmpleados(lista, TAM);
            break;


            break;
        case 5:
            system("pause");
            break;

        case 6:
            printf("Desea salir? (s/n)");
            seguir = 'n';
            system("pause");
            break;
        default:
            printf("Error, reingrese una opcion correcta (1-9)");
            system("pause");
            break;
        }
        getch();
        system("cls");

    }
    return 0;
}
void inicializarEmpleado(eEmpleado vec[], int tam)
{
    for(int i=0; i< tam; i++)
    {
        vec[i].estado= 0;
    }
}

void mostrarEmpleado(eEmpleado emp)
{
    printf("Legajo   Nombre      Fecha de Nacimiento           Sexo      Sueldo     \n");
    printf("%5d %10s %10d/%2d/%2d %19c    %10.2f \n", emp.legajo,emp.nombre, emp.fechaNac.dia,emp.fechaNac.mes,emp.fechaNac.anio, emp.sexo, emp.sueldo);
}

void mostrarEmpleados(eEmpleado vec[], int tam)
{
    int    contador =1;


    for(int i=0; i<tam; i++)
    {
        if(vec[i].estado ==1)
        {
            mostrarEmpleado(vec[i]);
            contador++;
        }
        if(contador== 0)
        {
            printf("\nNo existe ningun empleado registrado");
        }
    }

}

int buscarLibre(eEmpleado vec[], int tam)
{
    int indice = -1;
    for(int i=0; i<tam; i++)
    {

        if(vec[i].estado== 0)
        {
            indice = i;
            break;
        }

    }
    return indice;

}

int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{

    int indice = -1;
    for(int i=0; i<tam; i++)
    {
        if(vec[i].estado== 1 && vec[i].legajo == legajo)
        {
            indice = i;
        }

    }
    return indice;
}
int altaEmpleado(eEmpleado vec[], int tam)
{
    int indice;
    int legajo;
    int esta;

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nNo hay lugar en el sistema ");
    }
    else
    {
        printf("\nIngrese legajo :");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if( esta != -1)
        {
            printf("\nExiste un empleado de legajo %d en el sistema\n", legajo);
            mostrarEmpleado(vec[esta]);
        }
        else
        {
            vec[indice].legajo = legajo;

            printf("\nIngrese nombre: ");
            fflush(stdin);
            gets(vec[indice].nombre);

            printf("\nIngrese sexo: ");
            fflush(stdin);
            scanf("%c", &vec[indice].sexo );

            printf("\nIngrese sueldo: ");
            scanf("%f", &vec[indice].sueldo );

            printf("Ingrese mes de nacimiento :");
            scanf("%d", &vec[indice].fechaNac.dia);

            printf("Ingrese mes de nacimiento :");
            scanf("%d", &vec[indice].fechaNac.mes);

            printf("Ingrese anio de nacimiento :");
            scanf("%d", &vec[indice].fechaNac.anio);

            vec[indice].estado = 1;

            printf("\nAlta empleado exitosa!!!\n\n");
        }

    }
}

int bajaEmpleado(eEmpleado vec[], int tam)
{
    int legajo;

    printf("Ingrese legajo :");
    fflush(stdin);
    scanf("%d", &legajo);

    for(int i=0; i<tam; i++)
    {
        int indice;
        indice = buscarEmpleado(vec, tam, legajo);

        if(vec[i].legajo== legajo)
        {
            vec[indice].estado = 0;
            printf("Baja exitosa!!!");

            break;
        }
        else
        {
            printf("No se encuentra legajo");
            system("cls");
        }
    }

    return legajo;
}

int modificarEmpleado (eEmpleado vec[], int tam)
{
    int legajo;
    char opcion=0;
    char seguir = 's';
    char auxNombre[20];
    int indice;

    printf("Ingrese numero de legajo");
    scanf("%d", &legajo);

    for(int i=0; i<tam; i++)
    {
        indice = buscarEmpleado(vec, tam, legajo);
        printf("Usted ingreso el legajo n :%d y corresponde a la siguiente persona :\n", legajo);
        mostrarEmpleado(vec[indice]);
        printf("\n Desea continuar? : (S/N)");
        fflush(stdin);
        scanf("%c", &opcion);
        system("cls");
        if(seguir == 's')
        {

            while(opcion == 's')
            {
                printf(" MENU MODIFICACION\n\n");
                printf("1 - Nombre \n");
                printf("2 - Sexo \n");
                printf("3 - Sueldo \n");
                printf("4 - SALIR \n");

                printf("\nElija una opcion  :");
                fflush(stdin);
                scanf("%d", &opcion);

                switch(opcion)
                {
                case 1:
                    printf("Ingrese un nuevo nombre");
                    gets(auxNombre);
                    //vec[indice].nombre;
                    printf("Modificacion con exito!!");
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                default:
                    break;
                }
            }
        }
        else
        {
            printf("Modificacion ERRONEA \n");
            break;
        }
    return legajo;
}
}





