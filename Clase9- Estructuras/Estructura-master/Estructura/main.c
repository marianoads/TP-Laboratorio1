#include <stdio.h>
#include <stdlib.h>

struct datosPersonales
{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
    int codigoPostal;


};

int main()
{
    struct datosPersonales vecAgenda[3];


    //VECTOR DE ESTRUCTURAS

    int i;
    printf("DATOS PERSONALES");
    for(i = 0; i<3; i++)
    {   fflush(stdin);
        printf("\nIngrese nombre: ");
        gets(vecAgenda[i].nombre);
        printf("Ingrese apellido: ");
        gets(vecAgenda[i].apellido);
        printf("Ingrese calle: ");
        gets(vecAgenda[i].calle);
        printf("Ingrese numero: ");
        scanf("%d", &vecAgenda[i].numero);
        fflush(stdin);
    }
    printf("      Nombre        Apellido                 Calle     Numero\n");
    for(i=0; i<3; i++)
    {
       printf("%15s    %15s    %15s     %d\n",vecAgenda[i].nombre,vecAgenda[i].apellido,vecAgenda[i].calle,vecAgenda[i].numero);
    }

    return 0;
}
