#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Mascota.h"
void mostrarMascota(eMascota unaMascota, eTipo tipos[], int tamT,eColor colores[], int tamC)
{
    char descripcionC[20];
    char descripcionT[20];

    if(cargarDescripcionColor(unaMascota.idColor, colores, tamC, descripcionC) && cargarDescripcionTipos(unaMascota.idTipo, tipos, tamT,descripcionT))
    {
        printf("%d      %9s     %9s     %9s      %d\n",unaMascota.id,
               unaMascota.nombre,
               descripcionT,
               descripcionC,
               unaMascota.edad
               );
    }
}
int mostrarMascotas(eMascota mascotas[], int tamM, eTipo tipos[], int tamT,eColor colores[], int tamC)
{
    int flag = 1;
    printf("\t***Listado de Mascotas***\n");
    printf("Id        Nombre           Tipo       \tColor      Edad\n");
    for(int i = 0; i < tamM; i++)
    {
        if(!mascotas[i].isEmpty)//si no esta vacia la estructura entro
        {
            mostrarMascota(mascotas[i], tipos, tamT, colores, tamC);
            flag = 0;
        }
    }
    if(flag )
    {
        printf("No hay mascotas que mostrar\n");
    }
    return flag;
}
int buscarLibre(eMascota mascotas[], int tamM)
{
    int libre = -1;
    for(int i = 0; i < tamM; i++)
    {
        if(mascotas[i].isEmpty)
        {
            libre = i;
            break;
        }
    }
    return libre;
}
int inicializarMascotas(eMascota mascotas[], int tamM)
{
    int todoOk = 0;
    for(int i = 0; i < tamM; i++)
    {
        mascotas[i].isEmpty = 1;
        todoOk = 1;
    }
    return todoOk;
}
int altaMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, int* pId)
{
    int todoOk = 0;
    int indice;
    eMascota nuevaMascota;
    int idTipo;
    int idColor;

    system("cls");
    printf("***ALta Mascota***\n\n");
    printf("Id: %d\n", *pId);
    if(mascotas != NULL  && tamM > 0 && tipos != NULL && tamT > 0 && colores != NULL && tamC > 0 && pId != NULL)
    {
        indice = buscarLibre(mascotas, tamM);
        if(indice == -1)
        {
            printf("No hay lugar en el sistema\n");
        }
        else
        {
            printf("Ingrese nombre de la mascota: ");
            fflush(stdin);
            gets(nuevaMascota.nombre);

            mostrarTipos(tipos, tamT);
            printf("Ingrese ID del tipo de la mascota: ");
            scanf("%d", &idTipo);
            while(validarIdTipos(idTipo, tipos, tamT) == 0)
            {
                printf("Reingrese ID del tipo de la mascota: ");
                scanf("%d", &idTipo);
            }
            nuevaMascota.idTipo = idTipo;

            mostrarColores(colores, tamC);
            printf("Ingrese ID del color de la mascota: ");
            scanf("%d", &idColor);

            while(validarIdColor(idColor, colores, tamC)== 0)
            {
                printf("Reingrese ID del color de la mascota: ");
                scanf("%d", &idColor);
            }
            nuevaMascota.idColor = idColor;

            printf("Ingrese edad de la mascota: ");
            scanf("%d", &nuevaMascota.edad);
            while(nuevaMascota.edad < 0)
            {
                printf("Reingrese edad de la mascota: ");
                scanf("%d", &nuevaMascota.edad);
            }

            nuevaMascota.id = *pId;
            nuevaMascota.isEmpty = 0;
            *pId = *pId +1;

            mascotas[indice] = nuevaMascota;
            todoOk = 1;
        }

    }

    return todoOk;
}
int buscarMascota(eMascota mascotas[], int tamM, int id)
{
    int indice = -1;
    for(int i = 0; i < tamM; i++)
    {
        if(mascotas[i].id == id && mascotas[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int modificarMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC)
{
    int todoOk = 0;
    int id;
    int indice;
    char confirma;
    char salir= 'n';
    int nuevoIdTipo;
    int edadNueva;
    system("cls");
    printf("Modificacion de mascotas\n");
    mostrarMascotas(mascotas, tamM, tipos, tamT, colores, tamC);
    printf("Ingrese id: ");
    scanf("%d", &id);

    indice = buscarMascota(mascotas, tamM,id);

    if(indice == -1)//-1 es imposible que exista, por lo que nos va a dar error, que no existe
    {
        printf("NO HAY NINGUNA MASCOTA REGISTRADO CON EL ID %d\n", id);
    }
    else
    {
        mostrarMascota(mascotas[indice], tipos, tamT, colores, tamC);//le mostramos el empleado que elegio
        printf("Este es la mascota a modificar?: ");
        fflush(stdin);
        scanf("%c", &confirma);
        if(confirma == 's')
        {
            do
            {
                switch(subMenu())
                {
                case 1:
                    system("cls");
                    mostrarTipos(tipos, tamT);
                    printf("Ingrese nuevo id tipo: ");
                    scanf("%d", &nuevoIdTipo);
                    mascotas[indice].idTipo = nuevoIdTipo;
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("Ingrese nueva edad: ");
                    scanf("%d", &edadNueva);
                    mascotas[indice].edad = edadNueva;
                    system("pause");
                    break;
                case 3:
                    printf("Confirma salida?: ");
                    fflush(stdin);
                    salir = getchar();
                    break;
                default:
                    printf("Opcion invalida\n");
                    system("pause");
                }
            }
            while(salir == 'n');

            todoOk = 1;
        }
        else
        {
            printf("Baja cancelada por el usuario\n");
        }
    }
    return todoOk;
}
int subMenu()
{
    int opcion;
    system("cls");
    printf("1-Modificar Tipo\n");
    printf("2-Modificar Edad\n");
    printf("3-Salir\n");
    printf("Elija opcion: ");
    scanf("%d", &opcion);
    return opcion;
}
int listarMascotas(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC)
{
    eMascota auxMascota;
    int todoOk = 0;
    for(int i = 0; i < tamM-1; i++)
    {
        for(int j = i+1; j < tamM; j++)
        {
            if(mascotas[i].idTipo < mascotas[j].idTipo && strcmp(mascotas[i].nombre, mascotas[j].nombre) > 0)
            {
                auxMascota = mascotas[i];
                mascotas[i] = mascotas[j];
                mascotas[j] = auxMascota;
                todoOk = 1;
            }
        }
    }
    return todoOk;
}
int cargarDescripcionMascota(int id, eMascota mascotas[], int tamM, char desc[])
{
    int todoOk = 0;

    if(id >= 100 && mascotas != NULL && tamM > 0 && desc != NULL)
    {
        for(int i =  0; i < tamM; i++)
        {
            if(mascotas[i].id == id)
            {
                strcpy(desc, mascotas[i].nombre);
                todoOk = 1;
                break;
            }
        }
    }
    return todoOk;
}

