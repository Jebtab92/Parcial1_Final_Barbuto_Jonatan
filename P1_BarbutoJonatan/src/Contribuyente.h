/*
 * Contribuyente.h
 *
 *  Created on: May 15, 2021
 *      Author: Jonatan Barbuto
 */

#ifndef CONTRIBUYENTE_H_
#define CONTRIBUYENTE_H_
#define MAX_CHAR 30
#include "Recaudacion.h"

typedef struct
{
	int idContribuyente;
	char nombre[MAX_CHAR];
	char apellido[MAX_CHAR];
	char cuil[MAX_CHAR];
	int isEmpty;
} eContribuyente;

/*
 * \brief recibe una estructura eContribuyente
 * \param pone todos los campo isEmpty en 1
 * \return void
 */
void inicializarContribuyente(eContribuyente array[], int size);

/*
 * \brief recibe una estructura eContribuyente
 * \param valida que el array no este vacio
 * \return int 0 si el array esta vacio
 */
int arrayVacioContribuyente(eContribuyente array[], int size);

/*
 * \brief recibe una estructura eContribuyente
 * \param busca una posicion libre
 * \return int -1 si esta lleno y sino la posicion del que esta libre
 */
int buscarLibreContribuyente(eContribuyente array[], int size);

/*
 * \brief recibe una estructura eContribuyente, eRecaudacion y sus tamanios
 * \param pide id a dar de baja, cambia isEmpty a libre dentro de la estructura
 * \param con el id busca sus recaudaciones y cambia isEmpty a libre
 * \return int 0 si es correcto -1 error
 */
int bajaContribuyente(eContribuyente arrayC[], int sizeC, eRecaudacion arrayR[], int sizeR);

/*
 * \brief Void
 * \param muestra cabecera de contribuyente
 * \return Void
 */
void mostrarTituloContribuyente(void);

/*
 * \brief recibe una estructura eContribuyente y una indice
 * \param imprime por pantalla los valores de esa posicion
 * \return Void
 */
void mostrarContribuyente(eContribuyente array[], int index);

/*
 * \brief recibe una estructura eContribuyente y su tamanio
 * \param muestra la lista de contribuyentes por pantalla
 * \return Void
 */
void mostrarContribuyentes(eContribuyente array[], int size);

/*
 * \brief void
 * \param pide, valida y carga los datos de contribuyente
 * \param dentro de una variable auxiliar
 * \return eContribuyente auxiliar
 */
eContribuyente cargarDatosContribuyente(void);

/*
 * \brief recibe la posicion de memoria de idContribuyente
 * \param suma uno al valor que esta en esa posicion de memoria
 * \return el nuevo valor
 */
int obtenerIdContribuyente(int *idContribuyente);

/*
 * \brief recibe una estructura eContribuyente, id y tamanio
 * \param confirma, crea nuevo id y carga los valores a la estructura final
 * \return int 1 si es correcto 0 si hubo un error
 */
int altaContribuyente(eContribuyente array[],int *idContribuyente, int size);

/*
 * \brief recibe una estructura eContribuyente, id y tamanio
 * \param busca el id ingresado
 * \return la posicion donde esta ese id o -1 si no se encontro
 */
int buscarIdContribuyente(eContribuyente array[], int size, int ID);

/*
 * \brief recibe una estructura eContribuyente y su tamanio
 * \param ofrece y ejecuta modificaciones en contribuyentes ya creados
 * \return int 0 si se hizo el cambio o 1 si no se hizo
 */
int modificarContribuyente(eContribuyente array[], int size);

#endif /* CONTRIBUYENTE_H_ */
