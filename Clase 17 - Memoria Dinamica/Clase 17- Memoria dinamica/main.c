#include <stdio.h>
#include <stdlib.h>
void pedirNum (int* puntero, int tam);

int main()
{
    int num;
    int* pNum= &num;
    int* pAux;

    pNum = (int*)malloc(sizeof(int) * 5);   //GUARDO MEMORIA PARA VECTOR de 5 ELEMENTOS

    if(pNum== NULL)
    {
        printf("No hay espacio en memoria");
        system("pause");
        exit(1);  // SALGO DEL PROGRAMA
    }

    pedirNum(pNum, 5);

    pAux= (int*)realloc(pNum, sizeof(int)*10);  // AGRANDO ARRAY A 10 ELEMENTOS, SI ENCUENTRA LUGAR DEVUELVE DIR.DE MEMORIA Y SI NO ENCUENTRA LUGAR DEVUELVE NULL

    if(pAux != NULL)
    {
        printf("\n");
        printf("\n Se agrando array!!\n");
        pNum = pAux;
    }
    else
    {
        printf("No se pudo guardar memoria");
    }


    pedirNum2(pNum, 10); // PIDO LOS

    printf("\n\n Nuevo array agrandado \n\n");

    mostrarNumeros(pNum, 10);

    pNum=(int*)realloc(pNum,sizeof(int)*5);  //ACHICO ARRAY a 5 ELEMENTOS

    printf("\n\n Nuevo array achicado");

    mostrarNumeros(pNum, 10);

    free(pNum); // LIBERO ESPACIO DE MEMORIA



    return 0;
}

void pedirNum (int* puntero, int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("Ingrese numero :");
        fflush(stdin);
        scanf("%d", puntero+i);

    }

    printf("\n");

    for(int i=0; i<tam; i++)
    {
        printf("%d ", *(puntero+i));
    }

}

void pedirNum2 (int* puntero, int tam)
{
    for(int i=5; i<tam; i++)
    {
        printf("\nIngrese numero :");
        fflush(stdin);
        scanf("%d", puntero+i);

    }

}

void mostrarNumeros (int* puntero, int tam)
{

    for (int i=0; i<tam; i++)
    {
        printf("%d ", *(puntero+i));

    }

}

