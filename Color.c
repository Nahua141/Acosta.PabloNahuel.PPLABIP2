#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Color.h"
void mostrarColor(eColor unColor)
{
    printf("%d   %s\n", unColor.id, unColor.color);
}
int mostrarColores(eColor colores[], int tamC)
{
    int flag = 1;
    printf("\t***Listado de Colores***\n");
    printf("ID      COLOR\n");
    for(int i = 0; i < tamC; i++)
    {
        if(!colores[i].isEmpty)//si no esta vacia la estructura entro
        {
            mostrarColor(colores[i]);
            flag = 0;
        }
    }
    if(flag )
    {
        printf("No hay colores que mostrar\n");
    }
    return flag;
}
int cargarDescripcionColor(int id, eColor colores[], int tamC, char desc[])
{
    int todoOk = 0;

    if(id >= 5000 && id <= 5004 && colores != NULL && tamC > 0 && desc != NULL)
    {
        for(int i =  0; i < tamC; i++)
        {
            if(colores[i].id == id)
            {
                strcpy(desc, colores[i].color);
                todoOk = 1;
                break;
            }
        }
    }
    return todoOk;
}
int validarIdColor(int id, eColor colores[], int tamC)
{
    int indice =0;
    if(colores != NULL && tamC > 0)
    {
        for(int i = 0; i < tamC; i++)
        {
            if(colores[i].id == id)
            {
                indice = 1;
                break;
            }
        }
    }
    return indice;
}
