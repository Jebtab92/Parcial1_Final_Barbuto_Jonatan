/*
 * Recaudacion.h
 *
 *  Created on: May 15, 2021
 *      Author: Jonatan Barbuto
 */

#ifndef RECAUDACION_H_
#define RECAUDACION_H_
#define MAX_CHAR 30

typedef struct
{
	int idRecaudacion;
	int idContribuyente;
	int mes;
	char tipo[MAX_CHAR];
	char estado[MAX_CHAR];
	float importe;
	int isEmpty;
} eRecaudacion;

/*
 * \brief recibe una estructura eRecaudacion
 * \param pone todos los campo isEmpty en 1
 * \return void
 */
void inicializarRecaudacion(eRecaudacion array[], int size);

/*
 * \brief recibe una estructura eRecaudacion
 * \param valida que el array no este vacio
 * \return int 0 si el array esta vacio
 */
int arrayVacioRecaudacion(eRecaudacion array[], int size);

/*
 * \brief recibe una estructura eRecaudacion
 * \param busca una posicion libre
 * \return int -1 si esta lleno y sino la posicion del que esta libre
 */
int buscarLibreRecaudacion(eRecaudacion array[], int size);

/*
 * \brief Void
 * \param muestra cabecera de recaudacion
 * \return Void
 */
void mostrarTituloRecaudacion(void);

/*
 * \brief recibe una estructura eRecaudacion y un indice
 * \param imprime por pantalla los valores de esa posicion
 * \return Void
 */
void mostrarRecaudacion(eRecaudacion array[], int index);

/*
 * \brief recibe una estructura eRecaudacion y su tamanio
 * \param muestra la lista de contribuyentes por pantalla
 * \return Void
 */
void mostrarRecaudaciones(eRecaudacion array[], int size);

/*
 * \brief recibe la posicion de memoria de idRecaudacion
 * \param suma uno al valor que esta en esa posicion de memoria
 * \return el nuevo valor
 */
int eRecaudacion_ObtenerID(int *idRecaudacion);

/*
 * \brief recibe una estructura eRecaudacion, id y tamanio
 * \param busca el id ingresado
 * \return la posicion donde esta ese id o -1 si no se encontro
 */
int buscarIdRecaudacion(eRecaudacion array[], int size, int ID);

/*
 * \brief recibe una estructura eRecaudacion, su tamanio y un ID
 * \param muestra la lista de recaudaciones de un contribuyente
 * \return Void
 */
int imprimirListaRecaudacion(eRecaudacion array[], int size, int ID);

/*
 * \brief recibe una estructura eRecaudacion, su tamanio y un ID
 * \param cambia el isEmpty a libre para cada recaudacion
 * \param que tenga el ID ingresado
 * \return Void
 */
int bajaRecaudacion(eRecaudacion array[], int size, int ID);

#endif /* RECAUDACION_H_ */
