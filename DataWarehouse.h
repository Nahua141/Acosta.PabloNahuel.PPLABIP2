#include "Mascota.h"
#include "Trabajo.h"
#ifndef DATAWAREHOUSE_H_INCLUDED
#define DATAWAREHOUSE_H_INCLUDED



#endif // DATAWAREHOUSE_H_INCLUDED
/** \brief hardcodeo de datos de las mascotas
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param cant int cantidad de mascotas a mostrar
 * \param pId int* direccion de memoria del id
 * \return int 1 si pudo sobre escibir los datos en el array y 0 si no pudo
 *
 */
int hardCodearMascotas(eMascota mascotas[],int tamM, int cant, int* pId);
/** \brief hardcodeo de datos de las trabajos
 *
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamT int tamanio del array de trabajos
 * \param cant int cantidad de trabajos a mostrar
 * \param pId int* direccion de memoria del id
 * \return int 1 si pudo sobre escibir los datos en el array y 0 si no pudo
 *
 */
int hardCodearTrabajos(eTrabajo trabajos[],int tamT, int cant, int* pId);
