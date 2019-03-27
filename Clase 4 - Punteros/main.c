#include <stdio.h>
#include <stdlib.h>

void muestra(int *x, int y);
int main()
{ int x, y;
    printf("Ingrese un valor para X:");
    scanf("%d", &x);
    printf("Ingrese un valor para Y :");
    scanf("%d", &y);
    muestra(&x, y);
    printf("X es: %d  Y es: %d\n", x,y);


    return 0;
}
    void muestra(int *x, int y){
    *x=y;
    printf("x es: %d Y es: %d\n",*x ,y);
}
