#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Se solicita al usario ingresar un numero y lo valida
 *        Se manda mensale solicitando un numero al usuario
 * \param Se carga el numero ingresado
 * \param Se valida el numero ingresado
 * \return Retorna el numero ingresado
 */
float IngresarNumero(char);


/** \brief Al ingresar dos datos esta funcion las Suma
 * \param Suma los dos numeros y los guarda en la variable resultado
 * \param Muestra por mensaje el resultado
 * \return Retorna el resultado
  */
 void Suma(float,float);


/** \brief Al ingresar dos datos esta funcion las Resta
  * \param Resta el primer numero ingresado al segundo numero que se ingresó
 * \param Muestra por mensaje el resultado
 * \return Retorna el resultado
  */
void Resta(float,float);

/** \brief Al ingresar dos datos esta funcion las Divide
         Pregunta si el segundo numero ingresado es 0, si es asi,tira Error y sino lo valida
  * \param Divide el primer numero ingresado por el segundo numero que se ingresó
 * \param Muestra por mensaje el resultado
 * \return Retorna el resultado
  */
void Division(float,float);

/** \brief Al ingresar dos datos esta funcion las Multiplica
  * \param Multiplica el primer numero ingresado por segundo numero que se ingresó
 * \param Muestra por mensaje el resultado
 * \return Retorna el resultado
  */
void Multiplicacion(float,float);

/** \brief Al ingresar un dato esta funcion hace la multiplicacion factorial
  * \param Si se ingresa un numero flotante, tira error y pide nuevamente un numero Entero
            Se hace la multiplicacion factorial y se guarda en resultado
 * \param Muestra por mensaje el resultado
 * \return Retorna el resultado
  */
void Factorial(float);

/** \brief Esta funcion muestra todos los resultados de las anteriores operaciones.
  */
void MostrarTodoLosResultados(float,float);




#endif // FUNCIONES_H_INCLUDED
