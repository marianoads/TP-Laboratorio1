#include <stdio.h>
#include <stdlib.h>
/* int factorial(int ); */

int main()
{   int numero;
    int cont=2;
    int acum=1;


    printf("\nIngrese numero:\n");
    scanf("%d",&numero);

    if(numero<=0){
    printf("Ingrese un numero mayor a 0\n");
    }


    do{
        acum=acum*cont;
        cont++;

    }while(cont<=numero);


    printf("El factorial del numero %d es : %d",numero, acum);

    return 0;
    /*int valor,result;
    printf("\nIngrese numero:");
    scanf("%d",&valor);
    result=factorial(valor);
    printf("\nEl factorial de %d es %d",valor,result);

    return 0;
}
    int factorial(int n)
{
    int resp;
    if(n==1){
    return 1;
    }
    resp=n* factorial(n-1);
    return (resp);}
*/}

