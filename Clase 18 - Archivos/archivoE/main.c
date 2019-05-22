#include <stdio.h>

#define ARCH	"./bin.dat"
#define ESC 27

struct a{
		char nombre[31];
		int edad;
		float sueldo;
	};

int main (void)
{
    ///////////////////ESCRITURA/////////////////////
	FILE  *bin;
	struct a pers;
	system("pause");
	printf("\nSe va a generar por primera vez el archivo\n");
	if ((bin=fopen(ARCH,"wb"))==NULL)
	{
		printf("El archivo no puede ser abierto");
		exit(1);
	}
	do
	{
		printf("\nIngrese el nombre: ");
		fflush(stdin);
		gets(pers.nombre);
		printf("\nIngrese la edad: ");
		scanf("%d",&pers.edad);
		fflush(stdin);
		printf("\nIngrese sueldo :");
		scanf("%f",&pers.sueldo);
		fwrite(&pers,sizeof(pers),1,bin);
		printf("\nPresione ESC para terminar");
	}while((getche())!=ESC);

	fclose(bin);

	/////////////////LECTURA/////////////////////

	int cant;
	system("cls");
	if ((bin=fopen(ARCH,"rb"))==NULL)
	{
		printf("No se pudo abrir el archivo");
		exit(1);
	}
	while(!feof(bin))
	{
			cant = fread(&pers,sizeof(pers),1,bin);
			if(cant!=1)
			{
				if(feof(bin))
					break;
				else
				{
					printf("No leyo el ultimo registro");
					break;
				}
			}
			printf("\n%s\t%d\t%.2f",pers.nombre,pers.edad, pers.sueldo);
	}
	fclose(bin);
	getch();

	return 0;
}
