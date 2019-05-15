#include <stdio.h>
#include <stdlib.h>

void mostrarVector1 (int vec[], int tam); //Uso vector para mostrar
void mostrarVector2 (int vec[], int tam); //Uso puntero para mostrar
void mostrarVector3 (int *p, int tam); //Uso vector para mostrar
void mostrarVector4 (int *p, int tam); //Uso puntero para mostrar

int main()
{
    int vec[] = {3,5,2,4,3};

    /*printf("%x\n", vec);  //Muestra direccion de memoria del primer elemento del vector

    printf("%d\n", *vec);

    printf("%d\n", *(vec+1));  //Muestro el numero en el indice 2  ....  *(Vec+1) se Dezplaza un lugar, desde el primer elemento


    for (int i=0; i<5; i++)
    {
        printf("%d", *(vec+i));   // La primera vez que entra Vec vale 0
    }
    */
    printf("Vector 1:\n");
    mostrarVector1(vec, 5);
    printf("\n\nVector 2:\n");
    mostrarVector2(vec, 5);
    printf("\n\nVector 3:\n");
    mostrarVector3(vec, 5);
    printf("\n\nVector 4:\n");
    mostrarVector4(vec, 5);
    printf("\n");






    return 0;
}

void mostrarVector1 (int vec[], int tam){  //Nomenclatura vectorial
    for(int i=0;i<tam; i++){
        printf("%d", vec[i]);              // Mostramos por vector
    }
}

void mostrarVector2 (int vec[], int tam){   //Nomenclatura vectorial
    for(int i=0;i<tam; i++){
        printf("%d", *(vec+i));             // Mostramos por puntero    (ESTE NO ESTA BIEN VISTO XQ MEZCLA VECTOR CON PUNTERO)
    }
}

void mostrarVector3 (int *p, int tam){      //Nomenclatura puntorial
    for(int i=0;i<tam;i++){
        printf("%d", p[i]);                 // Mostramos por vector    (ESTE NO ESTA BIEN VISTO XQ MEZCLA VECTOR CON PUNTERO)
    }
}

void mostrarVector4 (int *p, int tam){      //Nomenclatura puntorial       (ESTE ES EL CORRECTO)
      for(int i=0;i<tam;i++){
        printf("%d", *(p+i));               //// Mostramos por puntero
    }
}
