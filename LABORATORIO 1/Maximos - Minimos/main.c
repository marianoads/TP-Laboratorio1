#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Yipos de datos  'toupper' 'tolower'

int main()
{
int valor;
int max;
int min;
int flag = 0;
char rta;

do{
    printf("Ingrese un valor :");
    scanf ("%d", &valor);

    if(flag==0 || valor > max){
            max=valor;
            }

    if(flag==0 || valor < min){
        min=valor;
        flag=1;
    }
    do{
            printf("Continuar? [S/N]: ?");
    fflush(stdin);
    scanf("%c", &rta);
    rta= toupper(rta);  // PARA QUE NO HAYA DIFERENCIA ENTRE MAYUSCULAS O MINUSCULAS

    }while(rta != 'S' && rta != 'N');

    }while(rta== 'S');

    printf("El maximo es : %d \n El minimo es : %d", min, max);


    return 0;
}
