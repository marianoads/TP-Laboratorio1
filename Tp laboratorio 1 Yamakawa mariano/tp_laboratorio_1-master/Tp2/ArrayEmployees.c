
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayEmployees.h"
#include "utn.h"

int initEmployees(sEmployee list[], int len)
{
    int i;

    for(i = 0; i<len; i++ )
    {
        list[i].isEmpty = 1;

    }

    return 0;

}

int addEmployee(sEmployee list[], int len, int id, char name[],char lastName[],float salary,int sector)
{
    int i;
    for(i = 0; i<len; i++)
    {
        if(list[i].isEmpty == 1)
        {
            list[i].id = id;
            strcpy(list[i].name, name);
            strcpy(list[i].lastName, lastName);
            list[i].salary = salary;
            list[i].sector = sector;
            list[i].isEmpty = 0;

            return 0;
        }
    }
    return -1;
}

int printEmployees(sEmployee list[], int len)
{
    int i;
    printf("%10s - %10s - %10s - %10s - %10s \n", "Id", "Apellido", "Nombre","Sueldo"," Sector");
    sortEmployees(list, len, 1);

    for(i = 0; i < len; i++)
    {
        if(list[i].isEmpty == 0)
        {
            printf("%10d  %10s  %10s  %10.2f  %10d \n", list[i].id, list[i].lastName, list[i].name, list[i].salary, list[i].sector);

        }


    }
    return 0;
}

int printEmployee(sEmployee list[], int len, int id)
{

    printf("%10s - %10s - %10s - %10s - %10s \n", "ID", "Apellido", "Nombre","Sueldo"," Sector");

        if(list[id].isEmpty == 0)
        {
            printf("%10d  %10s  %10s  %10.2f  %10d \n", list[id].id, list[id].lastName, list[id].name, list[id].salary, list[id].sector);

        }

    return 0;
}

int findEmployeeById(sEmployee list[], int len,int id)
{
    int i;
    for(i = 0; i<len; i++)
    {
        if(list[i].id == id && list[i].isEmpty == 0)
        {
            return i;
        }
    }

    return -1;

}

int removeEmployee(sEmployee list[], int len, int id)
{

    int idBaja = findEmployeeById(list, len, id);
    if(idBaja == -1)
    {
        return -1;
    }
    list[idBaja].isEmpty = 1;
    return 0;
}

int modificarEmpleado(sEmployee list[], int len, int id, char name[],char lastName[],float salary,int sector, int option)
{
    int modEmp = findEmployeeById(list, len, id);
    if(modEmp == -1)
    {
        return -1;
    }
    switch(option)
    {
    case 1:
        getString("Ingrese nuevo nombre del empleado\n", name);
        strcpy(list[modEmp].name, name);
        break;
    case 2:
        getString("Ingrese nuevo apellido del empleado\n", lastName);
        strcpy(list[modEmp].lastName, lastName);
        break;
    case 3:
        salary = getFloat("Ingrese nuevo salario\n");;
        list[modEmp].salary = salary;
        break;
    case 4:
        sector = getInt("Ingrese nuevo sector\n");
        list[modEmp].sector = sector;
        break;
    }


    return 0;

}

int hardCode(sEmployee list[], int len)
{
    int i;
    int id[6]= {1, 2, 3, 4, 5, 6};
    char name[6][50]= {"Santiago", "Alberto", "Nicolas", "Sebastian","Maximiliano", "Mariano"};
    char lastName[6][13]= {"Perez", "Diaz", "Villalba", "Churruarin","Dominguez","De Arco"};
    float salary[6]= {10500, 20500, 38600, 48000, 100000, 95000};
    int sector[6]= { 8, 2,3,2,1,7};
    int isEmpty[6]= { 0, 0, 0, 0, 0, 0};
    for(i=0; i<4; i++)
    {
        list[i].id=id[i];
        strcpy(list[i].name,name[i]);
        strcpy(list[i].lastName,lastName[i]);
        list[i].salary = salary[i];
        list[i].sector = sector[i];
        list[i].isEmpty = isEmpty[i];

    }
    return -1;
}

int sortEmployees(sEmployee list[], int len, int order)
{
    int i;
    int j;
    sEmployee aux;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(list[i].isEmpty==0 && list[j].isEmpty==0 ){
            if(strcmp(list[i].lastName, list[j].lastName)>0)
            {
                aux =list[i];
                list[i] = list[j];
                list[j] = aux;
            }
            else if(strcmp(list[i].lastName, list[j].lastName) == 0 && list[j].sector < list[i].sector)
            {
                aux=list[i];
                list[i] = list[j];
                list[j] = aux;
            }
            }

        }
    }

    return 0;
}

int generarId(sEmployee list[], int len)
{
    int i;
    int id;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty ==1)
        {
            id = i+1;
            break;
        }
    }
    return id;
}

float mostrarSalario(sEmployee list[], int len)
{
    int i;
    float sumaSalario = 0;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty ==0)
        {

            sumaSalario = sumaSalario + list[i].salary;

        }
    }
    return sumaSalario;
}

int empleadoOcupado(sEmployee list[], int len)
{
    int i;
    int numeroDeEmpleados = 0;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty ==0)
        {
            numeroDeEmpleados = numeroDeEmpleados + 1;

        }
    }
    return numeroDeEmpleados;
}

int buscarSalarioMasAlto(sEmployee list[], int len)
{
    int i;
    int salarioMasAlto = 0;
    int salario;
    int promedio;
    int numeroDeEmpleados;
    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty ==0)
        {
            salario = empleadoOcupado(list, len);
            numeroDeEmpleados = empleadoOcupado(list, len);
            promedio = salario/numeroDeEmpleados;
            if(list[i].salary > promedio )
            {
                salarioMasAlto = salarioMasAlto + 1;
            }
        }
    }
    return salarioMasAlto;
}
