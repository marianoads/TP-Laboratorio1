#include <stdio.h>
#include <stdlib.h>

int obtenerMaximo(int x, int y, int z);
int main()
{   int num1;
    int num2;
    int num3;
    int maximo;


    printf("Ingrese un numero ");
    scanf("%d", &num1);
    printf("Ingrese un numero ");
    scanf("%d", &num2);
    printf("Ingrese un numero ");
    scanf("%d", &num3);

    maximo = obtenerMaximo(num1,num2,num3);
        printf("El numero mayor ingresado es : %d", maximo);


    return 0;
}

 int obtenerMaximo(int x, int y, int z){
     int max;
     int valor=0;

     if(x>valor){
        max=x;}
        else if (y>max){
            max=y;
        }



     return max;
 }



