#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Servicio.h"
void mostrarServicio(eServicio unServicio)
{
    printf("%d      %9s     %.2f\n",
               unServicio.id,
               unServicio.descripcion,
               unServicio.precio);
}
int mostrarServicios(eServicio servicios[], int tamS)
{
    int flag = 0;
    printf("\t***Listado de servicios***\n");
    printf("Id       Descripcion     Precio\n");
    for(int i = 0; i < tamS; i++)
    {
        mostrarServicio(servicios[i]);
        flag = 1;
    }
    return flag;
}
int cargarDescripcionServicio(int id, eServicio servicios[], int tamS, char desc[])
{
    int todoOk = 0;

    if(id >= 20000 && servicios != NULL && tamS > 0 && desc != NULL)
    {
        for(int i =  0; i < tamS; i++)
        {
            if(servicios[i].id == id)
            {
                strcpy(desc, servicios[i].descripcion);
                todoOk = 1;
                break;
            }
        }
    }
    return todoOk;
}
int buscarServicio(eServicio servicios[], int tamSer, int id)
{
    int indice = -1;
    for(int i = 0; i < tamSer; i++)
    {
        if(servicios[i].id == id)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
