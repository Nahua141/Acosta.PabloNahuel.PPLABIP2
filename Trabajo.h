#include "Mascota.h"
#include "Servicio.h"
#include "fecha.h"
#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
typedef struct
{
    int id;
    eFecha fIngreso;
    int idMascota;
    int idServicio;
    int isEmpty;
} eTrabajo;


#endif // TRABAJO_H_INCLUDED
/** \brief muestra un trabajo
 *
 * \param unTrabajo eTrabajo permite mostrar los datos guardados en la estructura trabajo
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param servicios[] eServicio array de servicios
 * \param tamSer int tamanio del array de servicios
 * \return void
 *
 */
void mostrarTrabajo(eTrabajo unTrabajo, eMascota mascotas[], int tamM, eServicio servicios[], int tamSer);
/** \brief muestra una lista de trabajos
 *
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamTRA int tamanio del array de trabajos
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param servicios[] eServicio array de servicios
 * \param tamSer int tamanio del array de servicios
 * \return int retorna 1 si lo pudo mostrar y 0 si no
 *
 */
int mostrarTrabajos(eTrabajo trabajos[], int tamTRA, eMascota mascotas[], int tamM, eServicio servicios[], int tamSer);
/** \brief busca espacio libre en el array de trabajos
 *
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamTR int tamanio del array de trabajos
 * \return int retorna 1 si encontro espacio y 0 si no
 *
 */
int buscarLibreTrabajos(eTrabajo trabajos[], int tamTR);
/** \brief inicializa el array de trabajos en 1
 *
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamTR int tamanio del array de trabajos
 * \return int retorna 1 si pudo inicializarlo y 0 si no pudo
 *
 */
int inicializarTrabajos(eTrabajo trabajos[], int tamTR);
/** \brief realiza la carga de un trabajo en el sistema
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamTR int tamanio del array de trabajos
 * \param servicios[] eServicio array de servicios
 * \param tamSER int tamanio del array de servicios
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param colores[] eColor arrat de colores
 * \param tamC int tamanio del array de colores
 * \param pId int* direccion de memoria del id de la mascota
 * \return int retorna 1 su pudo realizar la carga y 0 si no pudo
 *
 */
int altaTrabajo(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamTR ,eServicio servicios[], int tamSER, eTipo tipos[], int tamT,eColor colores[], int tamC,int* pId);
/** \brief elimina una mascota del sistema
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param tipos[] eTipo array de tipos
 * \param tamT int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamTRA int tamanio del array de trabajos
 * \return int retorna 1 si lo pudo eliminar y 0 si no pudo
 *
 */
int bajaMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, eTrabajo trabajos[], int tamTRA);
