#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define TAM 4
#define tamSect 5

typedef struct
{
    int id;
    char descripcion[20];
} eSector;

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;



typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int estado;
    eFecha fechaNac;
    int idSector;
} eEmpleado;

void mostrarEmpleado(eSector sectores[],int tam, eEmpleado emp);
void inicializarEmpleado(eEmpleado vec[], int tam);
void mostrarEmpleados(eEmpleado vec[], int tam, eSector sectores[], int tamsect);
int obtenerSector(eSector sectores[], int tam, int idSector, char desc[]);
int buscarLibre(eEmpleado empleado[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void altaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
int validarNumero (char numero[]);


int main()
{

    char seguir='s';
    int opcion=0;
    char numero[20];
    int N;

    eSector sectores[tamSect]=
    {
        {1, "RECURSOS HUMANOS"},
        {2, "COMPRAS"},
        {3, "VENTAS"},
        {4, "LOGISTICA"},
        {5, "MARKETING"}
    };

    eEmpleado lista[TAM]= {{123,"Mariano",'m',35000,1,{29,04,94},3},{1234,"Florencia",'f',40000,1,{19,05,93},5},{12345,"Roberto",'m',480000,1,{5,2,2001},8}};

    while(seguir=='s')
    {
        printf("                                                   \n");
        printf("  ////////////////////ABM//////////////////\n");
        printf("                                                   \n");
        printf("\n");

        printf("          1- ALTA \n");
        printf("          2- BAJA\n");
        printf("          3- MODIFICACION\n");
        printf("          4- MOSTRAR\n");
        printf("          5- ORDENAR\n");
        printf("          6- SALIR\n");


        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            altaEmpleado(lista, TAM, sectores, tamSect);
            break;
        case 2:
            printf("BAJA");
            break;
        case 3:
            printf("MODIFICACION");
            break;
        case 4:
            system("cls");
            printf("    Legajo       Nombre   Sexo     Sueldo   Dia Mes  Anio     Sector    N.Sect\n");
            mostrarEmpleados(lista, TAM, sectores, tamSect);
            break;
        case 5:
            printf("ORDENAR");
            break;
        case 6:
            printf("SALIR");
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

void inicializarEmpleado(eEmpleado empleado[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        empleado[i].estado=0;
    }
}
void mostrarEmpleado(eSector sectores[], int tam, eEmpleado empleado)
{
    char desc[20];
    int consiguioNombre;

    consiguioNombre =  obtenerSector(sectores, tam, empleado.idSector, desc);

    if( !consiguioNombre )
    {
        strcpy(desc, "Sin definir");
    }
    printf("%10d %12s %4c   %10.2f %4d/ %3d/ %3d %12s - %d\n",empleado.legajo, empleado.nombre, empleado.sexo, empleado.sueldo, empleado.fechaNac.dia, empleado.fechaNac.mes, empleado.fechaNac.anio, desc,empleado.idSector);
}
void mostrarEmpleados(eEmpleado empleado[], int tam, eSector sectores[], int tamSector)
{
    int    contador =1;


    for(int i=0; i<tam; i++)
    {
        if(empleado[i].estado ==1)
        {
            mostrarEmpleado(sectores, tamSector, empleado[i]);
            contador++;
        }
        if(contador== 0)
        {
            printf("\nNo existe ningun empleado registrado");
        }
    }

}

int obtenerSector(eSector sectores[], int tam, int idSector, char desc[])
{

    int todoOk = 0;

    for(int i=0; i < tam; i++)
    {

        if(idSector == sectores[i].id)
        {

            strcpy(desc, sectores[i].descripcion);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}

int buscarLibre(eEmpleado empleado[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(empleado[i].estado == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int buscarEmpleado(eEmpleado empleado[], int tam, int legajo)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(empleado[i].estado == 1 && empleado[i].legajo == legajo)
        {
            indice = i;
            break;
        }
    }

    return indice;
}


void altaEmpleado(eEmpleado empleado[], int tam, eSector sectores[], int tamSector)
{

    int indice;
    char legajo[20];
    int esta;
    int N;
    int legajoValido;

    indice = buscarLibre(empleado, tam);

    if( indice == -1)
    {

        printf("\nNo hay lugar en el sistema\n");
    }
    else
    {
        do{
        printf("Ingrese legajo: ");
        scanf("%s", legajo);
        N=validarNumero(legajo);

        }while(N==0);

        legajoValido=atoi(legajo);

        esta = buscarEmpleado(empleado, tam, legajoValido);

        if( esta != -1)
        {
            printf("Existe un empleado de legajo %d en el sistema\n", legajoValido);
            mostrarEmpleado(sectores, tamSector, empleado[esta]);
        }
        else
        {
            empleado[indice].legajo = legajoValido;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(empleado[indice].nombre);

            do
            {
                printf ("Introduzca sexo: (f/m) :");
                scanf ("%c", &empleado[indice].sexo);
                getchar();     /*Con el getchar rescatas el enter*/
                if (empleado[indice].sexo !='f' && empleado[indice].sexo!='m')
                    printf("Sexo incorrecto, por favor presione enter y pruebe de nuevo\n");
            }
            while (empleado[indice].sexo!='f' && empleado[indice].sexo!='m');

            /*  printf("Ingrese sexo: (F/M)");
              fflush(stdin);
              scanf("%c", &empleado[indice].sexo );*/




            printf("Ingrese sueldo: ");
            scanf("%f", &empleado[indice].sueldo );

            printf("Ingrese dia :");
            scanf("%d", &empleado[indice].fechaNac.dia);

            printf("Ingrese mes :");
            scanf("%d", &empleado[indice].fechaNac.mes);

            printf("Ingrese anio :");
            scanf("%d", &empleado[indice].fechaNac.anio);

            printf("Ingrese sector :");
            fflush(stdin);
            scanf("%d", &empleado[indice].idSector);



            empleado[indice].estado = 1;

            printf("Alta empleado exitosa!!!\n\n");

        }
    }

}
int validarNumero (char numero[])
{
    for(int i=0; i< strlen(numero) ;i++){
        if( !(isdigit(numero[i])))
{   system("cls");
    printf("\nIngrese solo numeros :\n\n");
    return 0;
}    }

return numero;
}



