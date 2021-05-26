#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Trabajo.h"
void mostrarTrabajo(eTrabajo unTrabajo, eMascota mascotas[], int tamM, eServicio servicios[], int tamSer)
{
    char descripcionM[20];
    char descripcionSer[25];
    if(cargarDescripcionMascota(unTrabajo.idMascota, mascotas, tamM, descripcionM) && cargarDescripcionServicio(unTrabajo.idServicio, servicios, tamSer, descripcionSer))
    {
        printf("%d   %s     %s  %d/%d/%d\n", unTrabajo.id, descripcionM, descripcionSer,
               unTrabajo.fIngreso.dia,
               unTrabajo.fIngreso.mes,
               unTrabajo.fIngreso.anio);
    }

}
int mostrarTrabajos(eTrabajo trabajos[], int tamTRA, eMascota mascotas[], int tamM, eServicio servicios[], int tamSer)
{
    int flag = 1;
    printf("\t***Listado de Servicios***\n");
    printf("ID      MASCOTA    SERVICIOS    FECHA\n");
    for(int i = 0; i < tamTRA; i++)
    {
        if(!trabajos[i].isEmpty)//si no esta vacia la estructura entro
        {
            mostrarTrabajo(trabajos[i], mascotas, tamM, servicios, tamSer);
            flag = 0;
        }
    }
    if(flag )
    {
        printf("No hay trabajos que mostrar\n");
    }
    return flag;
}
int buscarLibreTrabajos(eTrabajo trabajos[], int tamTR)
{
    int libre = -1;
    for(int i = 0; i < tamTR; i++)
    {
        if(trabajos[i].isEmpty)
        {
            libre = i;
            break;
        }
    }
    return libre;
}
int inicializarTrabajos(eTrabajo trabajos[], int tamTR)
{
    int todoOk = 0;
    for(int i = 0; i < tamTR; i++)
    {
        trabajos[i].isEmpty = 1;
        todoOk = 1;
    }
    return todoOk;
}
int altaTrabajo(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamTR ,eServicio servicios[], int tamSER, eTipo tipos[], int tamT,eColor colores[], int tamC,int* pId)
{
    int todoOk = 0;
    int indice;
    eTrabajo nuevoTrabajo;
    int idMascota;
    int idServicio;
    system("cls");
    printf("***Alta Trabajo***\n\n");
    printf("Id: %d\n", *pId);
    if(mascotas != NULL  && tamM > 0 && trabajos != NULL && tamTR > 0 && servicios != NULL && tamSER > 0 && tipos != NULL && tamT > 0 && colores != NULL && tamC > 0 &&pId != NULL)
    {
        indice = buscarLibreTrabajos(trabajos, tamTR);
        if(indice == -1)
        {
            printf("No hay lugar en el sistema\n");
        }
        else
        {
            mostrarMascotas(mascotas, tamM, tipos, tamT, colores, tamC);
            printf("Ingrese ID de la mascota: ");
            scanf("%d", &idMascota);
            while(buscarMascota(mascotas, tamM, idMascota) == -1)
            {
                printf("No existe la mascota con ese id. Reingrese id: \n");
                scanf("%d", &idMascota);
            }
            nuevoTrabajo.idMascota = idMascota;

            mostrarServicios(servicios, tamSER);
            printf("Ingrese ID del servicio: ");
            scanf("%d", &idServicio);

            while(buscarServicio(servicios, tamSER, idServicio) == -1)
            {
                printf("No existe el servicio con el id. Reingrese id: \n");
                scanf("%d", &idServicio);
            }
            nuevoTrabajo.idServicio = idServicio;

            printf("Ingrese fecha de alta de servicio dd/mm/aaaa: ");
            scanf("%d/%d/%d", &nuevoTrabajo.fIngreso.dia, &nuevoTrabajo.fIngreso.mes ,&nuevoTrabajo.fIngreso.anio);

            nuevoTrabajo.id = *pId;
            *pId = *pId +1;

            nuevoTrabajo.isEmpty = 0;

            trabajos[indice] = nuevoTrabajo;
            todoOk = 1;
        }

    }

    return todoOk;
}
int bajaMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, eTrabajo trabajos[], int tamTRA)
{
    int todoOk = 0;
    int id;
    int indice;
    char confirma;
    system("cls");
    printf("Baja de mascota\n");
    mostrarMascotas(mascotas, tamM, tipos, tamT, colores, tamC);
    printf("Ingrese id: ");
    scanf("%d", &id);

    indice = buscarMascota(mascotas, tamM, id);

    if(indice == -1)//-1 es imposible que exista, por lo que nos va a dar error, que no existe
    {
        printf("NO HAY NINGUNA MASCOTA REGISTRADO CON EL ID %d\n", id);
    }
    else
    {
        mostrarMascota(mascotas[indice], tipos, tamT, colores, tamC);//le mostramos el empleado que elegio
        printf("Confirma baja?: ");
        fflush(stdin);
        scanf("%c", &confirma);
        if(confirma == 's')
        {
            mascotas[indice].isEmpty = 1;
            trabajos[indice].isEmpty = 1;
            todoOk = 1;
        }
        else
        {
            printf("Baja cancelada por el usuario\n");
        }
    }
    return todoOk;
}
