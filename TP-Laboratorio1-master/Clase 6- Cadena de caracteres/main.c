#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //BLIBLIOTECA PARA USAR FGETS Y STRCMP

int main()
{
    char DATO[25];
    int x;
    char contrasena[20] = "Mariano123";
    //int resultado;
    //resultado = strcmp(DATO, contrasena); //DECLARO LA FUNCION STRCMP(FUNCION PARA COMPRARAR DOS VARIABLES)



    printf("Ingrese un password :"); //PIDE INGRESAR UN PASSWORD
    fflush(stdin);  // VACIA EL BUFFER DE CARACTERES
    fgets (DATO,sizeof(DATO)-2,stdin); //VALIDA EL DATO INGRESADO: Con la funcion 'fgets', se puede validar palabras con un espacio de por medio EJ: Juan Perez
                //en cambio con scanf solo se validaria la primer palabra ingresada   EJ: Juan
                // SIZEOF(OPERADOR UNANIME, SOLO RECIBE UN PARAMETRO Y CALCULA CUANTA MEMORIA USA UN PARAMETRO 50CARACTERES= 50BYTES)
                // el (DATO-2) es para eliminar los ultimos dos caracteres que pone el compilador en una cadena de caracteres como defecto

    x=strlen(DATO); //VARIABLE X, DONDE SE GUARDA LA CANTIDAD DE CARACTERES INGRESADOS (STRLEN)

    DATO[x-1] = '\0';

    if(strcmp(DATO, contrasena)== 0){   //SI VEC == "MARIANO123" MUESTRA MENSAJE CORRECTO, SINO MUESTRA MENSAJE ERROR
        printf("Ingreso la contraseña correcta\n");
        }
        else {
            printf("Ingreso la contraseña incorrecta \n");
        }



    printf("La cantidad de caracteres ingresados es : %d", x);  //MUESTRA LA CANTIDAD DE CARACTERES INGRESADOS
        return 0;
    }




