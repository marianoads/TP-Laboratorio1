#ifndef COMIDA_H_INCLUDED
#define COMIDA_H_INCLUDED
#include "empleado.h"
#include "sector.h"
#include "comida.h"
#include "almuerzo.h"
#include "utn.h"

typedef struct
{
    int id; //autoincremental
    char descripcion[51];
    float importe; //mayor a 0
    int estado;
} eComida;

void altaMenu(eComida menu[],int tamMenu);
int buscarLibreMenu(eComida menu[], int tamMenu);
int buscarMenu(eComida menu[], int tamMenu, int idMenu);
int bajaMenu(eComida menu[], int tamMenu);
void modificarMenu (eComida menues[], int tamMenu);
void mostrarMenues (eComida menues[],int tamMenu, eComida menu[]);
void mostrarMenu(eComida menues,int tamMenu, eComida menu[]);
int obtenerMenu(eComida menues[], int tamMenu, int idMenu, char descMenu[]);
void menuComidas (eComida menues[], int tamComidas);

#endif // COMIDA_H_INCLUDED
