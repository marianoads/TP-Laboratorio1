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
    struct datosPersonales vecAgenda[3], vecContactos[3], vecAmigos[3];
    int i;
    printf("--DATOS PERSONALES-- ");

    for(i=0; i<3; i++)  //RECORRO EL VECTOR
    {
        fflush(stdin);
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

    for(i=0; i<3; i++)  //MUESTRA LOS ELEMENTOS DE LA ESTRUCTURA
    {
        printf("%13s    %13s   %13s     %13d\n",vecAgenda[i].nombre,vecAgenda[i].apellido,vecAgenda[i].calle,vecAgenda[i].numero);
    }

    for(i=0; i<3; i++) //ASIGNAR UNA ESTRUCTURA A OTRA Y MOSTRAR
    {
        /*strcpy(vecContactos[i].nombre, vecAgenda[i].nombre);    //STRCPY SOLO PARA STRING(CADENA DE CARACTERES)
        strcpy(vecContactos[i].apellido, vecAgenda[i].apellido);
        strcpy(vecContactos[i].calle, vecAgenda[i].calle);
        vecContactos[i].numero= vecAgenda[i].numero;      //ASIGNAR EL VALOR DE VECAGENDA.NUMERO A VECCONTACTOS.NUMERO*/
        vecContactos[i]=vecAgenda[i]; //ASIGNACION DE ARRAY (NO SE ESPECIFICA CADA CAMPO)
        printf("%13s    %13s   %13s     %13d\n", vecContactos[i].nombre,  vecContactos[i].apellido, vecContactos[i].calle,  vecContactos[i].numero);
    }

    return 0;
}
