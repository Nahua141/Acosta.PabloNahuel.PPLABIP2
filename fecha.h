
#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;


#endif // FECHA_H_INCLUDED
/** \brief compara fechas
 *
 * \param f1 eFecha fecha 1 a comparar
 * \param f2 eFecha fecha 2 a comparar
 * \return int retorna 1 si son iguales las fechas y 0 si no
 *
 */
int comparaFecha(eFecha f1, eFecha f2);
