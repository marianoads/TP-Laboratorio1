#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];
    int suma=0;

    for (int i=0; i<5; i++){
        printf("Ingrese un numero :");
        scanf("%d", &vec[i]);
        }

    for(int i=0;i<5; i++){

        suma=suma+vec[i];

    }
printf("La suma de los numeros ingresados es : \n %d", suma);

    return 0;
}
