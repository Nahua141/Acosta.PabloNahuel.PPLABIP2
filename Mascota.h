#include "Tipo.h"
#include "Color.h"
#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED
typedef struct
{
    int id;
    char nombre[20];
    int edad;
    int idTipo;
    int idColor;
    int idServicio;
    int isEmpty;
} eMascota;


#endif // MASCOTA_H_INCLUDED
/** \brief muestra una mascota
 *
 * \param unaMascota eMascota permite mostrar los datos guardados en la estructura mascota
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \return void
 *
 */
void mostrarMascota(eMascota unaMascota, eTipo tipos[], int tamT,eColor colores[], int tamC);
/** \brief muestra una lista de mascotas
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \return int retorna 1 si pudo mostrar las mascotas y 0 si no pudo
 *
 */
int mostrarMascotas(eMascota mascotas[], int tamM, eTipo tipos[], int tamT,eColor colores[], int tamC);
/** \brief busca espacio libre en el array
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \return int retorna 1 si encontro espacio y 0 si no
 *
 */
int buscarLibre(eMascota mascotas[], int tamM);
/** \brief realiza la carga de una mascota en el sistema
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \param pId int* direccion de memoria del id de la mascota
 * \return int retorna 1 si pudo realizar la carga y 0 si no pudo
 *
 */
int altaMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, int* pId);
/** \brief realiza la modificacion de una mascota
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \return int retorna 1 si pudo realizar la modificacion y 0 si no pudo
 *
 */
int modificarMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC);
/** \brief inicializa el array de mascotas en 1
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \return int retorna 1 si lo pudo inicializar y 0 si no pudo
 *
 */
int inicializarMascotas(eMascota mascotas[], int tamM);
/** \brief busca una mascota pedida por el usuario
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array
 * \param id int id de la mascota a buscar
 * \return int retorna 1 si encontro la mascota y 0 si no lo encontro
 *
 */
int buscarMascota(eMascota mascotas[], int tamM, int id);
/** \brief muestra un sub menu de mascotas
 *
 * \return int retorna la opcion ingresada por el usuario
 *
 */
int subMenu();
/** \brief ordena las mascotas por tipo y nombre
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \return int retorna 1 si lo pudo ordenar y 0 si no pudo
 *
 */
int listarMascotas(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC);
/** \brief carga la descripcion de las mascotas
 *
 * \param id int id de la mascota
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de las mascotas
 * \param desc[] char descripcion de la mascota
 * \return int retorna 1 si pudo cargar la descripcion de la mascota y 0 si no pudo
 *
 */
int cargarDescripcionMascota(int id, eMascota mascotas[], int tamM, char desc[]);

