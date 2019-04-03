#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];
    int suma=0;
    float promedio;

    for (int i=0; i<5; i++){
        printf("Ingrese un numero :");
        scanf("%d", &vec[i]);
        }

    for(int i=0;i<5; i++){

        suma=suma+vec[i];

    }
printf("La suma de los numeros ingresados es : %d\n", suma);
promedio = suma/5;
printf("El promedio total de los numeros ingresados es :%.2f\n", promedio);



    return 0;
}
