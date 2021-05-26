#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
typedef struct
{
    int id;
    char color[20];
    int isEmpty;
} eColor;


#endif // COLOR_H_INCLUDED
/** \brief muestra un color
 *
 * \param unColor eColor permite mostrar los datos guardados en la estructura color
 * \return void
 *
 */
void mostrarColor(eColor unColor);
/** \brief muestra una lista de colores
 *
 * \param colores[] eColor tamanio del array de colores
 * \param tamC int tamanio del array
 * \return int retorna 1 si pudo mostrar los colores y 0 si no pudo
 *
 */
int mostrarColores(eColor colores[], int tamC);
/** \brief carga la descripcion del color
 *
 * \param id int id del color
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array
 * \param desc[] char descripcion del color
 * \return int retorna 1 si pudo cargar la descripcion del color y 0 si no pudo
 *
 */
int cargarDescripcionColor(int id, eColor colores[], int tamC, char desc[]);
/** \brief valida el id del color
 *
 * \param id int id del color
 * \param colores[] eColor array de colores
 * \param tamC int tamanio del array
 * \return int retorna 1 si el id es valido y 0 si no lo es
 *
 */
int validarIdColor(int id, eColor colores[], int tamC);
