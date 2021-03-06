/*
 * Informes.h
 *
 *  Created on: May 18, 2021
 *      Author: jonat
 */

#ifndef INFORMES_H_
#define INFORMES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Recaudacion.h"
#include "Contribuyente.h"
#include "Biblioteca.h"


/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion, sus tamanios y id Recaudacion
 * \param confirma, crea nuevo id y carga los valores a la estructura final
 * \return int 1 si es correcto 0 si hubo un error
 */
int altaRecaudacion(eRecaudacion arrayR[],int *idRecaudacion, int sizeR, eContribuyente arrayC[], int sizeC);

/*
 * \brief recibe una estructura eContribuyente y su tamanio
 * \param pide, valida y carga los datos de la estructura
 * \param dentro de una variable auxiliar
 * \return eRecaudacion auxiliar
 */
eRecaudacion cargarDatosRecaudacion(eContribuyente arrayC[], int sizeC);

/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion y sus tamanio
 * \param pide ID recaudacion y cambia el estado a refinanciado
 * \return 1 si se cambio o 0 si hubo un error
 */
int refinanciarRecaudacion(eRecaudacion arrayR[], int sizeR, eContribuyente arrayC[], int sizeC);

/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion y sus tamanio
 * \param pide ID recaudacion y cambia el estado a saldado
 * \return 1 si se cambio o 0 si hubo un error
 */
int saldarRecaudacion(eRecaudacion arrayR[], int sizeR, eContribuyente arrayC[], int sizeC);

/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion y sus tamanio
 * \param imprime por pantalla contribuyentes y sus recaudaciones
 * \return void
 */
void imprimirContribuyentes(eRecaudacion arrayR[], int sizeR, eContribuyente arrayC[], int sizeC);

/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion y sus tamanio
 * \param imprime por pantalla las recaudaciones saldadas y sus contribuyentes
 * \return void
 */
int imprimirSaldadas(eContribuyente arrayC[], int sizeC, eRecaudacion arrayR[], int sizeR);

/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion y sus tamanio
 * \param imprime por pantalla ID, nombre y cuil de los contribuyentes que pagaron en febrero
 * \return 0 si encontro o -1 si hubo un error
 */
int imprimirFebrero(eContribuyente arrayC[], int sizeC, eRecaudacion arrayR[], int sizeR);

/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion y sus tamanio
 * \param pide al usuario que escoja el tipo de recaudacion y luego
 * \param imprime por pantalla ID, nombre y cuil de los contribuyentes
 * \return 0 si encontro o -1 si hubo un error
 */
int imprimirPorTipo(eContribuyente arrayC[], int sizeC, eRecaudacion arrayR[], int sizeR);

/*
 * \brief recibe una estructura eRecaudacion y su tamanio
 * \param recorre la estructura y cuenta la cantidad de recaudaciones
 * \param saldadas por un valor mayor a mil
 * \return 0 si encontro o -1 si hubo un error
 */
int cantidadSaldado(eRecaudacion array[], int size);

/*
 * \brief recibe una estructura eContribuyente, una eRecaudacion y sus tamanio
 * \param recorre la estructura eRecaudacion si el estado es Refinanciado busca en la estructurca de eContribuyente
 * \param el indice del id y suma uno en un array de int creado para contabilizar la cantidad por ID
 * \param recorre el array int y cuando es mayor a 3 imprime el contribuyente
 * \return -1 si no hubo coincidencias o 0 si encontro algun contribuyente
 */
int mayorRefinanciar(eContribuyente arrayC[], int sizeC, eRecaudacion arrayR[], int sizeR);

#endif /* INFORMES_H_ */
