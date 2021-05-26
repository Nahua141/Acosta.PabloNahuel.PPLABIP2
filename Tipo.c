#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tipo.h"
void mostrarTipo(eTipo unTipo)
{
    printf("%d   %s\n", unTipo.id, unTipo.descripcion);
}
int mostrarTipos(eTipo tipos[], int tamT)
{
    int flag = 1;
    printf("\t***Listado de Tipos***\n");
    printf("ID      TIPOS\n");
    for(int i = 0; i < tamT; i++)
    {
        if(!tipos[i].isEmpty)//si no esta vacia la estructura entro
        {
            mostrarTipo(tipos[i]);
            flag = 0;
        }
    }
    if(flag )
    {
        printf("No hay tipos que mostrar\n");
    }
    return flag;
}
int cargarDescripcionTipos(int id, eTipo tipos[], int tamT, char desc[])
{
    int todoOk = 0;

    if(id >= 1000 && id <= 1004 && tipos != NULL && tamT > 0 && desc != NULL)
    {
        for(int i =  0; i < tamT; i++)
        {
            if(tipos[i].id == id)
            {
                strcpy(desc, tipos[i].descripcion);
                todoOk = 1;
                break;
            }
        }
    }
    return todoOk;
}
int validarIdTipos(int id, eTipo tipos[], int tamT)
{
    int indice =0;
    if(tipos != NULL && tamT > 0)
    {
        for(int i = 0; i < tamT; i++)
        {
            if(tipos[i].id == id)
            {
                indice = 1;
                break;
            }
        }
    }
    return indice;
}
