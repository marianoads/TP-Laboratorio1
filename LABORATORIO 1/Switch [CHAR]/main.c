#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hora;
    printf("Hora :");
    fflush(stdin);  //LIMPIAR EL BUFFER
    scanf("%c", &hora);

    switch(hora){
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
        printf("Buenos dias");
        break;

    default:
    printf("ERROR");
    break;
    }

    return 0;
}
