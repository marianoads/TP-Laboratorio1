#include <stdio.h>
#include <string.h>
struct fecha{
    int dia,mes,anio;
};

struct gente{
    char nombre[20];
    struct fecha f_nacimiento;
};

void main(void){

    fflush(stdin);
    struct gente pers;
    struct fecha fn;

    printf("Ingrese nombre :");
    gets(pers.nombre);
    fflush(stdin);
    printf("Ingrese dia de nacimiento :");
    scanf("%d",&fn.dia);
    fflush(stdin);
    printf("Ingrese mes de nacimiento :");
    scanf("%d",&fn.mes);
    fflush(stdin);
    printf("Ingrese a¤o de nacimiento :");
    scanf("%d",&fn.anio);
    fflush(stdin);
    pers.f_nacimiento=fn;

    printf("\nNombre: %s\n Dia:%d\n Mes:%d\n Anio:%d\n",pers.nombre,fn.dia,fn.mes,fn.anio);

    return 0;
}
