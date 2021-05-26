#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DataWarehouse.h"
//hardcodeo de mascotas
int id[10] ={100,101,102,103,104,105,106,107,108,109};
char nombres[10][20] = {"Michifu", "Firulais","Panky","Pancho","Rudolf","Luna","Negro","Nieves","Atila","Marley"};
int idTipo[10] = {1000,1001,1002,1003,1004,1001,1001,1004,1002,1003};
int idColor[10] = {5000,5001,50002,5003,5004,5004,5000,5002,5001,5002};
int edades[10] = {4,12,5,3,10,11,8,9,4,10};
//hardcodeo de trabajos
int idMascota[] = {101,100,104,106,108,101,100,104,106,108};
eFecha fechas[] =
{
        {26,4,2021},
        {1,1,2001},
        {12,12,2012},
        {9,4,2012},
        {26,1,2020},
        {26,4,2021},
        {1,1,2001},
        {12,12,2012},
        {9,4,2012},
        {26,1,2020}
 };
int idServicio[] = {20000,20000,20002,20001,20002,20000,20000,20002,20001,20002};
int hardCodearMascotas(eMascota mascotas[],int tamM, int cant, int* pId)
{
    int cantidad = 0;
    if(mascotas != NULL && tamM > 0 && cant >= 0 && cant <= tamM && pId != NULL)
    {
        for(int i = 0; i < cant; i ++)
        {
            mascotas[i].id = *pId;
            (*pId)++;
            strcpy(mascotas[i].nombre, nombres[i]);
            mascotas[i].edad = edades[i];
            mascotas[i].isEmpty = 0;
            mascotas[i].idTipo = idTipo[i];
            mascotas[i].idColor = idColor[i];
            cantidad ++;
        }
    }
    return cantidad;
}
int hardCodearTrabajos(eTrabajo trabajos[],int tamT, int cant, int* pId)
{
    int cantidad = 0;
    if(trabajos != NULL && tamT > 0 && cant >= 0 && cant <= tamT && pId != NULL)
    {
        for(int i = 0; i < cant; i ++)
        {
            trabajos[i].id = *pId;
            (*pId)++;
            trabajos[i].idMascota = idMascota[i];
            trabajos[i].fIngreso = fechas[i];
            trabajos[i].idServicio = idServicio[i];
            trabajos[i].isEmpty = 0;
            cantidad ++;
        }
    }
    return cantidad;
}
