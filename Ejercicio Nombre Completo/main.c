#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20];
    char auxNombre[100];
    char apellido[20];
    char auxApellido[100];
    char nombreCompleto[41];
    int cantNombre;
    int cantApellido;



    printf("Ingrese un nombre :");  //PIDE INGRESAR UN NOMBRE
    gets(auxNombre);  //SE GUARDA EL VALOR EN NOMBRE

    while(strlen(auxNombre)>19){  //CALCULA SI NOMBRE ES MAYOR A 19 CARACTERES
        printf("Ingrese un nombre menor a 20 caracteres \n");
        gets(auxNombre);
    }
    strcpy(nombre, auxNombre); // SE COPIA EL VALOR DE AUXNOMBRE EN NOMBRE



    printf("Ingrese un apellido :");  //PIDE INGRESAR UN APELLIDO
    gets(auxApellido);  //SE GUARDA EL VALOR EN APELLIDO

    while(strlen(auxApellido)>19){
        printf("Ingrese un nombre apellido a 20 caracteres \n");
        gets(auxApellido);
    }
    strcpy(apellido, auxApellido); // SE COPIA EL VALOR DE AUXAPELLIDO EN APELLIDO
 // QUIERO MOSTRAR PRIMERO EL APELLIDO Y LUEGO DE UN ESPACIO EL NOMBRE, EMPEZANDO SIEMPRE CON UNA MAYUSCULA( EJ: Perez, Juan)
    strcpy(nombreCompleto, apellido);  //COPIO APELLIDO EN LA VARIABLE NOMBRECOMPLETO
    strcat(nombreCompleto, (", ")); //LE CONCATENO EL (", ") LA COMA Y EL ESPACIO DESPUES DEL APELLIDO
    strcat(nombreCompleto, nombre); //LE CONCATENO EL NOMBRE DESPUES DEL (" ,")
     strlwr(nombreCompleto);  //PASO EL NOMBRE COMPLETO A MINUSCULA
    nombreCompleto[0]= toupper(nombreCompleto[0]);  //PONGO LA PRIMER LETRA DEL NOMBRECOMPLETO EN MAYUSCULA -> [0]


        for(int i=0; i< strlen(nombreCompleto); i++){  //RECORRO TODO EL VECTOR DE NOMBRE COMPLETO, SABIENDO LA CANTIDAD DE CARACTERES

            if(nombreCompleto[i] == (' ')){   //CUANDO EL FOR ENCUENTRA UN ESPACIO (" ") ENTRA AL IF
                nombreCompleto[i+1]= toupper(nombreCompleto[i+1]); //Y LA PRIMER LETRA DESPUES DEL ESPACIO ENCONTRADO, SE PONE EN MAYUSCULA
            }
    }



    //printf("El apellido ingresado es :%s\n", apellido);
    //printf("El nombre ingresado es :%s\n", nombre);
    //printf("La cantidad de caracteres en el nombre es %d\n", cantNombre);
    //printf("La cantidad de caracteres en el apellido es %d\n", cantApellido);

    puts(nombreCompleto);  //IGUAL QUE EL PRINTF SOLO QUE SIRVE PARA MOSTRAR UNA CADENA o VARIABLE

    return 0;
}
