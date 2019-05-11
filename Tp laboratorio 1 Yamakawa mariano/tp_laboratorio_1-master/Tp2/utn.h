
#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED


/** \brief Muestra opciones del menu
 *
 * \return int retorna la opcion typeada
 *
 */
int pedirOpcionMenu();

/** \brief Muestra un menu con opciones de modificacion
 *
 * \return int retorna la opcion recibida
 *
 */
int mostrarMenuModificar();

/** \brief Muestra un menu con opciones de informes
 *
 * \return int retorna la opcion recibida
 *
 */
int mostrarInformes();



/** \brief Solicita un valor numerico de tipo Entero
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el dato validado ingresado por el usuario.
 */
int getInt(char mensaje[]);

/** \brief Solicita un valor numerico de tipo Flotante
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el dato validado ingresado por el usuario.
 *
 */
float getFloat (char mensaje[]);




/** \brief Solicita un texto al usuario.
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargara el texto ingresado.
 * \return void.
 */
void getString(char mensaje[], char input[]);
#endif // MENU_H_INCLUDED
