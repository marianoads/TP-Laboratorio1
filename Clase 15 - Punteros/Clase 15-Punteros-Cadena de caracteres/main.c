#include <stdio.h>
#include <stdlib.h>
void mostrarCadena (char* cadena);
void getChar (char* message, char* caracter);  // El primero es un vector de char y el segundo es un char (No tenemos forma de distinguirlos si no le colocamos nomnbres a las variables)
// Cuando queremos recorrer un vector debemos de antemano ponerle un tamaño
int main()
{
    char mensaje [20] = "Hola mundo";
    mostrarCadena(mensaje);
    char Sexo;
    getChar("\nIngrese sexo\n", &Sexo);
    printf("El sexo ingresado es :%c", Sexo);

    return 0;
}
void getChar (char* message, char* caracter)   //Funcion get char va a recibir un caracter
{
    printf("%s", message);
    fflush(stdin);
    scanf("%c", caracter); // Le paso caracter que contiene una direccion de memoria

}

void mostrarCadena (char* cadena)
{
    while(*cadena != '\0'){  //RECORRO EL VECTOR HASTA QUE ENCUENTRE EL \0
        printf("%c", *cadena); //PRIMERO MUESTRA LA H QUE ESTA EN EL VECTOR 0
        cadena++;            // CADENA SE DESPLAZA UN LUGAR Y LUEGO MUESTRA EL SIGUIENTE CARACTER
}}
