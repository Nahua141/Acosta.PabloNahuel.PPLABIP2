#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED
typedef struct
{
    int id;
    char descripcion[25];
    float precio;
} eServicio;


#endif // SERVICIO_H_INCLUDED
/** \brief muestra un servicio
 *
 * \param unServicio eServicio permite mostrar los datos guardados en la estructura servicios
 * \return void
 *
 */
void mostrarServicio(eServicio unServicio);
/** \brief muestra una lista de servicios
 *
 * \param servicios[] eServicio array de servicios
 * \param tamS int tamanio del array de servicios
 * \return int retorna 1 si pudo mostrar la lista de servicios y 0 si no pudo
 *
 */
int mostrarServicios(eServicio servicios[], int tamS);
/** \brief carga la descripcion de los servicios
 *
 * \param id int id del servicio
 * \param servicios[] eServicio array de servicios
 * \param tamS int tamanio del array de servicios
 * \param desc[] char descripcion del servicio
 * \return int retorna 1 si pudo cargar la descripcion del servicio y 0 si no pudo
 *
 */
int cargarDescripcionServicio(int id, eServicio servicios[], int tamS, char desc[]);
/** \brief busca si existe el servicio ingresado por el usuario
 *
 * \param servicios[] eServicio array de servicios
 * \param tamSer int tamanio del array de servicios
 * \param id int id del servicio
 * \return int retorna 1 si lo encontro y 0 si no
 *
 */
int buscarServicio(eServicio servicios[], int tamSer, int id);
