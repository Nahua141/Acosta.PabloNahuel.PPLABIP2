#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED
typedef struct
{
    int id;
    char descripcion[20];
    int isEmpty;
} eTipo;


#endif // TIPO_H_INCLUDED
/** \brief muestra un tipo
 *
 * \param unTipo eTipo permite mostrar los datos guardados en la estructura de tipos
 * \return void
 *
 */
void mostrarTipo(eTipo unTipo);
/** \brief muestra una lista de tipos
 *
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \return int retorna 1 si pudo mostrar la lista de tipos y 0 si no pudo
 *
 */
int mostrarTipos(eTipo tipos[], int tamT);
/** \brief carga la descripcion de los tipos
 *
 * \param id int id del tipo
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param desc[] char descripcion del tipo
 * \return int retorna 1 si pudo cargar la descripcion de los tipos y 0 si no pudo
 *
 */
int cargarDescripcionTipos(int id, eTipo tipos[], int tamT, char desc[]);
/** \brief valida el id de los tipos
 *
 * \param id int id de los tipos
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \return int retorna 1 si el id es valido y 0 si no lo es
 *
 */
int validarIdTipos(int id, eTipo tipos[], int tamT);
