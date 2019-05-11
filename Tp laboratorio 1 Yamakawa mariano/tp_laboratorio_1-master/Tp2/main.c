
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayEmployees.h"
#include "utn.h"
#define TAM 1000

int main()
{
    char lastName[51];
    char name[51];
    float salary;
    int sector;
    int id;
    int idCheck;
    float sumSal;
    float promedio;
    int mostrarInformes;
    int full;
    int salarioMasAlto;
    int numeroDeEmpleados;
    int opcion;
    int optionModificar;
    int flag = 0;
    char seguir = 's';

    sEmployee list[TAM];
    initEmployees(list, TAM);



    do
    {
        opcion = pedirOpcionMenu();
        flag = empleadoOcupado(list, TAM);
        switch(opcion)
        {
        case 1:
            id = generarId(list, TAM);
            getString("Ingrese nombre del empleado :\n", name);
            getString("Ingrese apellido del empleado :\n", lastName);
            salary = getFloat("Ingrese salario :\n");
            sector = getInt("Ingrese sector :\n");
            full = addEmployee(list, TAM, id, name, lastName, salary, sector);


            if(full == -1)
            {
                printf("No hay lugar!!!\n");
            }
            break;
        case 2:
            if(flag >= 1)
            {
                printEmployees(list,TAM);
                id = getInt("Ingrese ID de empleado a modificar :\n");
                idCheck = findEmployeeById(list, TAM, id);
                while(idCheck == -1)
                {
                    id = getInt("Error, reingrese una ID valida!!!\n");
                    idCheck = findEmployeeById(list, TAM, id);

                }
                system("cls");
                printEmployee(list, TAM, idCheck);
                optionModificar = mostrarMenuModificar();
                modificarEmpleado(list, TAM, id, name, lastName, salary, sector, optionModificar);
            }
            else
            {
                printf("No hay empleados cargados al sistema!!!\n");
            }
            break;
        case 3:
            if(flag >= 1)
            {
                printEmployees(list,TAM);
                id = getInt("Ingrese ID de empleado a dar de baja: \n");
                idCheck = findEmployeeById(list, TAM, id);
                while(idCheck == -1)
                {
                    id = getInt("Error,reingrese una ID valida!!!!\n");
                    idCheck = findEmployeeById(list, TAM, id);
                }

                removeEmployee(list, TAM, id);

            }
            else
            {
                printf("No hay empleados cargados!!!\n");
            }
            break;

        case 4:
            if(flag >= 1)
            {
                mostrarInformes = mostrarMenuModificar();
                switch(mostrarInformes)
                {
                case 1:
                    system("cls");
                    printf("\n      ******************* INFORMES ******************\n\n");
                    printEmployees(list, TAM);
                    printf("\n");
                    break;
                case 2:
                    sumSal = empleadoOcupado(list, TAM);
                    numeroDeEmpleados = empleadoOcupado(list, TAM);
                    promedio = sumSal/numeroDeEmpleados;
                    salarioMasAlto = buscarSalarioMasAlto(list, TAM);
                    system("cls");
                    printf("\n ********************* INFORMES ******************** \n");
                    printf("\n %s %.2f\n", "El total de los salarios es: ", sumSal);
                    printf("\n %s %.2f\n", "El promedio de los salarios es: ", promedio);
                    printf("\n %s %d\n\n", "La cantidad de empleados que superan el salario promedio es: ", salarioMasAlto);

                }
            }
            else
            {
                printf("No hay empleados cargados!!!!!\n");

            }
            break;
        case 5:
            seguir = 'n';
            break;

        default:
            printf("Opcion invalida!!!! Ingrese opcion correcta (1-5)\n");
            break;
        }

        system("pause");
        system("cls");

    }
    while(seguir == 's');

    return 0;
}
