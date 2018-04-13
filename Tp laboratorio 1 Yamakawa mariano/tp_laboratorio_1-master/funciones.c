float IngresarNumero(char var)
{
    float numero;
    printf("Ingrese un numero para %c\n",var);
    scanf("%f",&numero);
    return numero;
}
void Suma(float A,float B)
{
    float resultado=A+B;
    printf("La suma es: %.2f \n", resultado);
}
void Resta(float A,float B)
{
    float resultado = A-B;
    printf("La resta es: %.2f \n",resultado);
}

void Division(float A,float B)
{

    if(B==0)
    {

        printf("No se puede dividir por cero\n");
    }
    else
    {
      float resultado = A/B;
      printf("La division es: %.2f \n",resultado);
    }


}
void Multiplicacion(float A,float B)
{
    float resultado =A*B;
    printf("La multiplicacion es: %.2f \n", resultado);
}
void Factorial(float A)
{
    int AuxiliarA=(int)A;
    int factorial=1;
    int i;
    if(A<0)
    {

    printf("Error. no se puede calcular factorial con numeros negativos.\n");

    }
    else if(A!=AuxiliarA)
    {
        printf("Error, no se puede calcular con numeros flotantes \n");
    }
    else
    {

    for(i=1; i<=(int)A; i++)
        {
            factorial = factorial * i;
        }
         printf("El factorial de A es: %d \n",factorial);
    }


}
void MostrarTodoLosResultados(float A,float B)
{
    Suma(A,B);
    Resta(A,B);
    Division(A,B);
    Multiplicacion(A,B);
    Factorial(A);
}

