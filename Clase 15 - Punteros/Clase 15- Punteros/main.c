#include <stdio.h>
#include <stdlib.h>

void leerPuntero (int* p);

int main()
{
    int x=10;
    int* p = &x; //P Y Q Apuntan a direccion de memoria de X
    int* q = p;

    int**r = &p;   //  ** Doble puntero (Un puntero que guarda un puntero)
    printf("%d\n\n", x);
    printf("%d\n\n", *q);
    printf("Mostrar a valor de R con doble puntero: %d\n \n", **r); // Muestro valor de R, puntero a puntero
   /* int* p;   // J Y P NO SON NI ENTERO NI FLOTANTES, SON PUNTEROS (DIRECCON DE MEMORIA),
               // y sabe que tiene que guardar una variable de tipo entero o char

    char* j;

    p=&x;  //Quiero que la variable P apunte a X

    printf("%d \n", x);
    printf("%d \n", *p); // *p (Poniendo el * leo el valor de la variable, ej [*p = 10])

    printf("%x \n", p); //(%x, muestra formato en hexadecimal. Muestra direccion de memoria de p)
    printf("%x \n", &x); //(%x, muestra formato en hexadecimal. Muestra direccion de memoria de p) */
    printf("La direccion de memoria de X es :%x\n\n", &x); //Direccio de memoria de x
    printf("Antes de llamar a variable leerPuntero X vale : %d\n\n", x);
    leerPuntero(&x);  // Le paso a la funcion leerPuntero la direccion de memoria de X

      return 0;
}

void leerPuntero (int* p){  //en su variable P tiene la direccion de memoria de X en main
    *p = 38; // Modifico el valor de la variable X

    printf("El valor de X es :%d \n\n", *p);   //Muestra el valor del puntero P

    printf("Direccion de memoria de X :%x \n\n", p); //Direccio de memoria de x


}
