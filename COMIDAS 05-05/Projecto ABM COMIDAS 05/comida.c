#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "sector.h"
#include "almuerzo.h"
#include "utn.h"
#include <string.h>

void menuComidas (eComida menues[], int tamComidas)
{
    int opcion;
    system("cls");
    printf("------MENU DE MENUES(COMIDAS)------\n\n\n");
    printf("1- Alta menu\n");
    printf("2- Modificar menu\n");
    printf("3- Baja menu\n");
    printf("4- Listar menu\n");
    printf("5- Salir\n");
    printf("Ingrese una opcion :");
    scanf("%d", &opcion);
    switch(opcion)
    {
    case 1:
        altaMenu(menues, tamComidas);
        break;
    case 2:
        modificarMenu(menues, tamComidas);
        break;
    case 3:
        mostrarMenues(menues,tamComidas,menues);
        bajaMenu(menues,tamComidas);
        break;
    case 4:
        mostrarMenues(menues, tamComidas, menues);
        break;
    case 5:

        break;
    default:
        printf("Error, reingrese una opcion correcta (1-5)");
        break;
    }
}

void altaMenu(eComida menu[],int tamMenu)
{

    int indice;
    static int legajo= 0;
    eComida nuevoMenu;

    indice = buscarLibreMenu(menu, tamMenu);



    if(indice == -1)
    {
        printf("No hay lugar en el sistema!! \n");
    }
    else
    {

        getValidStringRango("Ingrese descripcion :","Error, solo se permiten letras. Reintente",nuevoMenu.descripcion, 51);
        nuevoMenu.importe= getFloat("Ingrese importe :");
        menu[indice] = nuevoMenu;
        menu[indice].estado=1;
        menu[indice].id=legajo+1;
        legajo++;

    }
}
int buscarLibreMenu(eComida menu[], int tamMenu)
{

    int indice = -1;

    for(int i=0; i < tamMenu; i++)
    {
        if(menu[i].estado == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int buscarMenu(eComida menu[], int tamMenu, int idMenu)
{

    int indice = -1;
    for(int i=0; i<tamMenu; i++)
    {
        if(menu[i].estado== 1 &&  menu[i].id == idMenu)
        {
            indice = i;
        }

    }
    return indice;
}

int bajaMenu(eComida menu[], int tamMenu)
{
    int legajoMenu;
    int indice;


    printf("\nDar de baja el legajo N:");
    fflush(stdin);
    scanf("%d", &legajoMenu);

    indice = buscarMenu(menu,tamMenu, legajoMenu);

    if(indice!= -1)
    {
        menu[indice].estado=0;
        printf("Baja exitosa!!!");
    }
    else
    {
        printf("No se encontro legajo!!!");
    }
    return legajoMenu;
}

void modificarMenu (eComida menues[], int tamMenu)
{
    int id;
    int indice;
    eComida modComida;
    mostrarMenues(menues, tamMenu, menues);
    printf("\n\nIngrese ID del menu que desea modificar :\n");
    scanf("%d", &id);

    indice = buscarMenu(menues, tamMenu, id);

    if(indice != -1)
    {
        getValidStringRango("Ingrese descripcion nueva descripcion:","Error, solo se permiten letras. Reintente",modComida.descripcion, 51);
        modComida.importe= getFloat("Ingrese importe :");
        modComida.id= id;
        menues[indice]= modComida;
        menues[indice].estado=1;

        printf("Modificacion Exitosa!!!");
    }
    else
    {
        printf("No se encontro legajo!!!");
    }


}

void mostrarMenues (eComida menues[],int tamMenu, eComida menu[])
{
    int contador =1 ;
    system("cls");
    printf("idComida     Descripcion     Precio\n\n");

    for(int i=0; i<tamMenu; i++)
    {
        if(menues[i].estado==1)
        {
            mostrarMenu(menues[i],tamMenu,menu);
            contador++;
        }
        if(contador== 0)
        {
            printf("\nNo existe ningun empleado registrado");
        }
    }

}

void mostrarMenu(eComida menues,int tamMenu, eComida menu[])
{
    char descMenu[51];
    int consiguioNombre;
    consiguioNombre=obtenerMenu(menu, tamMenu, menues.id, descMenu);

    if( !consiguioNombre )
    {
        strcpy(descMenu, "Sin definir");
    }



    printf("%d        %10s      %10.2f\n", menues.id, menues.descripcion,menues.importe);
}

int obtenerMenu(eComida menues[], int tamMenu, int idMenu, char descMenu[])
{
    int todoOk = 0;

    for(int i=0; i < tamMenu; i++)
    {

        if(idMenu == menues[i].id)
        {

            strcpy(descMenu, menues[i].descripcion);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}
