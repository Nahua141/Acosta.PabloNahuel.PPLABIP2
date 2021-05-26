#include "Mascota.h"
#include "Trabajo.h"
#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED



#endif // INFORMES_H_INCLUDED
/** \brief pide al usuario una mascota y muestra los trabajos realizados a esa mascota
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamT int tamanio del array de trabajos
 * \param tipos[] eTipo array de tipos
 * \param tamTip int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \param servicios[] eServicio array de servicios
 * \param tamS int tamanio del array de servicios
 * \return int retorna 1 si pudo mostrar los trabajos a esa mascota y 0 si no
 *
 */
int trabajosAMascotas(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS);
/** \brief muestra el total por los trabajos realizados a la mascota
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamT int tamanio del array de trabajos
 * \param tipos[] eTipo array de tipos
 * \param tamTip int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \param servicios[] eServicio array de servicios
 * \param tamS int tamanio del array de servicios
 * \return int retorna 1 si pudo mostrar el total y 0 si no pudo
 *
 */
int totalTrabajoMascotas(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS);
/** \brief el usuario ingresa un servicio y se muestra las mascotas que recibieron ese servicio
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamT int tamanio del array de trabajos
 * \param tipos[] eTipo array de tipos
 * \param tamTip int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \param servicios[] eServicio array de servicios
 * \param tamS int tamanio del array de servicios
 * \return int retorna 1 si pudo mostrarlo y 0 si no
 *
 */
int servicioRealizadoMascota(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS);
/** \brief el usuario ingresa una fecha y muestra los trabajos realizados esa fecha
 *
 * \param mascotas[] eMascota array de mascotas
 * \param tamM int tamanio del array de mascotas
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamT int tamanio del array de trabajos
 * \param tipos[] eTipo array de tipos
 * \param tamTip int tamanio del array de tipos
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array de colores
 * \param servicios[] eServicio array de servicios
 * \param tamS int tamanio del array de servicios
 * \return int retorna 1 si pudo mostrar los servicios por fecha y 0 si no
 *
 */
int serviciosRealizadosFecha(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS);
