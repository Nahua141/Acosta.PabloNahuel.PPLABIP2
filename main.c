#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tipo.h"
#include "Color.h"
#include "Mascota.h"
#include "Servicio.h"
#include "Trabajo.h"
#include "DataWarehouse.h"
#include "Informes.h"
#define TAMM 10
#define TAMT 5
#define TAMC 5
#define TAMS 3
#define TAMTRA 10
/** \brief muestra el menu de opciones
 *
 * \return int retorna la opcion ingresada por el usuario
 *
 */
int menuOpciones();
int main()
{
    char salir= 'n';
    int id = 100;
    int idTrabajos = 100;
    eMascota mascotas[TAMM];
    eTipo tipos[TAMT] = {{1000,"Ave"}, {1001,"Perro"}, {1002,"Gato"}, {1003,"Roedor"}, {1004,"Pez"}};
    eColor colores[TAMC] = {{5000, "Negro"}, {5001, "Blanco"}, {5002, "Gris"}, {5003, "Rojo"}, {5004,"Azul"}};
    eServicio servicios[TAMS] = {{20000,"Corte", 250},{20001,"Desparasitado", 300},{20002,"Castrado", 400}};
    eTrabajo trabajos[TAMTRA];

    inicializarMascotas(mascotas, TAMM);
    inicializarTrabajos(trabajos, TAMTRA);
    hardCodearMascotas(mascotas, TAMM, 5, &id);
    hardCodearTrabajos(trabajos, TAMTRA, 10, &idTrabajos);
    do
    {
        switch(menuOpciones())
        {
        case 1:
            system("cls");
            altaMascota(mascotas, TAMM, tipos, TAMT, colores, TAMC, &id);
            system("pause");
            break;
        case 2:
            system("cls");
            mostrarMascotas(mascotas, TAMM, tipos, TAMT, colores, TAMC);
            system("pause");
            break;
        case 3:
            system("cls");
            bajaMascota(mascotas, TAMM, tipos, TAMT, colores, TAMC, trabajos, TAMTRA);
            system("pause");
            break;
        case 4:
            system("cls");
            modificarMascota(mascotas, TAMM, tipos, TAMT, colores, TAMC);
            system("pause");
            break;
        case 5:
            system("cls");
            listarMascotas(mascotas, TAMM, tipos, TAMT, colores, TAMC);
            system("pause");
            break;
        case 6:
            system("cls");
            mostrarTipos(tipos, TAMT);
            system("pause");
            break;
        case 7:
            system("cls");
            mostrarColores(colores, TAMC);
            system("pause");
            break;
        case 8:
            system("cls");
            altaTrabajo(mascotas, TAMM, trabajos, TAMTRA, servicios, TAMS, tipos, TAMT, colores, TAMC, &idTrabajos);
            system("pause");
            break;
        case 9:
            system("cls");
            mostrarTrabajos(trabajos, TAMTRA, mascotas, TAMM, servicios, TAMS);
            system("pause");
            break;
        case 10:
            system("cls");
            trabajosAMascotas(mascotas, TAMM, trabajos, TAMTRA, tipos, TAMT, colores, TAMC, servicios, TAMS);
            system("pause");
            break;
        case 11:
            system("cls");
            totalTrabajoMascotas(mascotas, TAMM, trabajos, TAMTRA, tipos, TAMT, colores, TAMC, servicios, TAMS);
            system("pause");
            break;
        case 12:
            system("cls");
            servicioRealizadoMascota(mascotas, TAMM, trabajos, TAMTRA, tipos, TAMT, colores, TAMC, servicios, TAMS);
            system("pause");
            break;
        case 13:
            system("cls");
            serviciosRealizadosFecha(mascotas, TAMM, trabajos, TAMTRA, tipos, TAMT, colores, TAMC, servicios, TAMS);
            system("pause");
            break;
        case 14:
            printf("Confirma salida?: ");
            fflush(stdin);
            salir = getchar();
            break;
        default:
            printf("Opcion invalida\n");
            system("pause");
        }
    }while(salir == 'n');
    return 0;
}
int menuOpciones()
{
    int opcion;
    system("cls");
    printf("Menu de opciones\n\n");
    printf("1-Alta Mascotas\n");
    printf("2-Mostrar Mascotas \n");
    printf("3-Baja Mascotas\n");
    printf("4-Modificar Mascotas\n");
    printf("5-Listar  Mascotas\n");
    printf("6-Listar Tipos \n");
    printf("7-Listar Colores\n");
    printf("8-Alta Trabajos\n");
    printf("9-Mostrar Trabajos \n");
    printf("10-Mostrar Trabajos a mascotas\n");
    printf("11-Mostrar Total Trabajos a mascotas\n");
    printf("12-Servicios realizados a mascotas\n");
    printf("13-Servicios realizados por fecha\n");
    printf("14-Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);
    return opcion;
}
