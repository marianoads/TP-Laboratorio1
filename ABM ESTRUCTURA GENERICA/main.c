#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



{
    char seguir='s';
    int opcion;

    while(seguir=='s')
    {
        printf(" ***************  ABM ARCHIVOS ***************  \n");

        printf("1- Alta\n");
        printf("2- Baja\n");
        printf("3- Modificar\n");
        printf("4- Listar\n");
        printf("6- Salir\n\n");

        printf("\nIngrese opcion :");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            system("pause");
            break;
        case 2:

            break;
        case 3:

            system("pause");
            break;
        case 4:


            break;


            break;
        case 5:
            system("pause");
            break;

        default:
            printf("Error, reingrese una opcion correcta (1-5)");
            system("pause");
            break;
        }
        getch();
        system("cls");

    }
    return 0;
}
