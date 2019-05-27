#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    int num1;
    char nombre[20];
    char apellido[20];
    float sueldo;
    int ca


    f=fopen("./archivo.txt","r");

    if(f==NULL)
    {
        printf("No se pudo abrir el archivo. Me voy a cerrar .");
        system("pause");
        exit(EXIT_FAILURE);

    }

    while( !feof(f))
    {
        cant =    fscanf(f, "%d,%s,%s,%f\n", &num1,&nombre,&apellido,&sueldo);

        if(cant < 4)
        {
            break;
        }
        printf(" %d %s %s %.2", &num1,&nombre,&apellido,&sueldo);
    }

    fclose(f);

    return 0;
}
