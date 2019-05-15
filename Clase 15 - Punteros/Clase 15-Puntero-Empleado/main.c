#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;

}eEmpleado;

int main()
{

    eEmpleado unEmpleado = {1234,"Juan",'m', 30000,{29,04,2015}};
    eEmpleado otroEmpleado = {2222,"Ana",'m', 34000,{15,06,2019}};

    eEmpleado* punteroEmpleado;

    eEmpleado lista [] = {unEmpleado, otroEmpleado};  // Contiene dos

    punteroEmpleado = &unEmpleado;  //guardo en punteroEmpleado la direccion de memoria de unEmpleado

    printf("Legajo :%d\n", punteroEmpleado->legajo);   // Reemplazo el punto por -> Cuando queremos a una variable por medio de un puntero
    printf("Nombre :%s\n", punteroEmpleado->nombre);
    printf("Sexo :%c\n", punteroEmpleado->sexo);
    printf("Sueldo :%.2f\n", punteroEmpleado->sueldo);
    printf("Fecha %d\n", punteroEmpleado->fechaIngreso.dia);     //Cuando queremos ingresar a otra estructura anidada se debe poner el punto .
    printf("Fecha %d\n", punteroEmpleado->fechaIngreso.mes);
    printf("Fecha %d\n", punteroEmpleado->fechaIngreso.anio);

    printf("%s\n", (lista+1)->nombre); //Muestro el segundo elemento de lista y muestro nombre

    for(int i=0;i<2;i++){
        printf("%s\n", (lista + i)->nombre);    //Recorro los dos elementos de lista y muestro los nombres
    }

    return 0;
}
