#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Informes.h"
int trabajosAMascotas(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS)
{
    int flag = 0;
    int idMascota;
    int indice;

    system("cls");
    printf("Trabajos a mascotas\n\n");
    mostrarMascotas(mascotas, tamM, tipos, tamTip, colores, tamC);
    printf("Ingrese el id de una mascota: ");
    scanf("%d", &idMascota);
    indice = buscarMascota(mascotas, tamM, idMascota);

    if(indice == -1)
    {
        printf("No hay una mascota con el id: %d\n", idMascota);
    }
    else
    {
        system("cls");
        printf("Mascota\n");
        printf("-----------------------------------------------------------------------------\n");
        mostrarMascota(mascotas[indice], tipos, tamTip, colores, tamC);
        printf("-----------------------------------------------------------------------------\n");
        printf("Trabajos Realizados a la Mascota\n");
        printf("-----------------------------------------------------------------------------\n");
        for(int i = 0; i < tamM; i++)
        {
            if(mascotas[i].isEmpty == 0 && mascotas[i].id == idMascota)
            {
                mostrarTrabajo(trabajos[i], mascotas, tamM, servicios, tamS);
            }
        }
    }
    return flag;
}
int totalTrabajoMascotas(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS)
{
    int flag = 0;
    int idMascota;
    int indice;
    float total = 0;

    system("cls");
    printf("Total Trabajos de Mascotas\n\n");
    mostrarMascotas(mascotas, tamM, tipos, tamTip, colores, tamC);
    printf("Ingrese el id de una mascota: ");
    scanf("%d", &idMascota);
    indice = buscarMascota(mascotas, tamM, idMascota);

    while(indice == -1)
    {
        printf("No existe la mascota con el ID. Reingrese ID: \n");
        scanf("%d", &idMascota);
    }
    for(int i = 0; i < tamT; i++)
    {
        if(trabajos[i].isEmpty == 0 && trabajos[i].idMascota == idMascota)
        {
            for(int j = 0; j < tamS; j++)
            {
                if(servicios[j].id == trabajos[i].idServicio)
                {
                    total += servicios[j].precio;
                }
            }
            flag = 0;
        }
    }
    if(flag == 1)
    {
        printf("La mascota con el ID: %d no registra trabajos\n", idMascota);
    }
    else
    {
        printf("Total por los trabajos a la mascota con el ID: %d es %.2f\n", idMascota, total);
    }
    return flag;
}
int servicioRealizadoMascota(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS)
{
    int flag = 0;
    int idServicio;
    int indice;

    system("cls");
    printf("Servicios realizados a mascotas\n\n");
    mostrarServicios(servicios, tamS);
    printf("Ingrese el id de un servicio: ");
    scanf("%d", &idServicio);
    indice = buscarServicio(servicios,tamS, idServicio);

    while(indice == -1)
    {
        printf("Id invalido. Ingrese nuevo Id: ");
        scanf("%d", &idServicio);
        indice = buscarServicio(servicios, tamS, idServicio);
    }
    printf("Listado de mascotas Sector %s\n", servicios[indice].descripcion);
    printf("Id        Nombre           Tipo       \tColor      Edad\n");
    for(int i = 0; i<tamS; i++)
    {
        if(mascotas[i].isEmpty == 0 && mascotas[i].idServicio == idServicio)
        {
            mostrarMascota(mascotas[i], tipos, tamTip, colores, tamC);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("No hay mascotas con trabajos de %s\n", servicios[indice].descripcion);
    }
    return flag;
}
int serviciosRealizadosFecha(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamT, eTipo tipos[], int tamTip, eColor colores[], int tamC, eServicio servicios[], int tamS)
{
    int flag = 0;
    eFecha fecha;
    int cant;
    int contador;
    printf("Servicios realizados por fecha\n");

    printf("Ingrese fecha dd/mm/aa: ");
    cant = scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);

    while(cant != 3)
    {
        printf("Fecha incorrecta. Reingrese fecha dd/mm/aa: ");
        fflush(stdin);
        cant = scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);
    }

    for(int i = 0; i < tamS; i++)
    {
        contador = 0;
        for(int j = 0; j < tamT; j++)
        {
            if(trabajos[j].isEmpty == 0 && comparaFecha(fecha, trabajos[j].fIngreso) && servicios[i].id == trabajos[j].idServicio)
            {
                contador++;
                flag = 1;
            }

        }
        printf("%s: %d\n", servicios[i].descripcion, contador);
    }

    return flag;
}
