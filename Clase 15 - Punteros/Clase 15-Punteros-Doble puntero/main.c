#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a= 100;
    int* punteroInt;
    int** doblePuntero;

    punteroInt=&a;
    doblePuntero=&punteroInt;
    printf("Valor de a : %d\n",a);
    printf("Valor con puntero simple :%d\n", *punteroInt);
    printf("Valor con doble puntero :%d\n", **doblePuntero);


    return 0;
}
