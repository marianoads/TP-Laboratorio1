#include <stdio.h>
#include <stdlib.h>

typedef{
int id;
char marca[50];
float cilindrada;
int estado;

}eAuto;

int main()
{
    FILE* f;
    char texto[50] = "Hola mundo";

    f=fopen("./archivo.txt","w");

    if(f==NULL){
        printf("No se pudo abrir el archivo.Mevoy a cerrar .");
        system("pause");
        exit(EXIT_FAILURE);

    }

    fprintf(f,"%s", texto);

    fclose(f);

    return 0;
}
