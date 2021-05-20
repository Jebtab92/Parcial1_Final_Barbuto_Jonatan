/*
 * Biblioteca.h
 *
 *  Created on: May 11, 2021
 *      Author: Jonatan Barbuto
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE_BUFFER 1000



// Validaciones //

/*
 * \brief recibe un string
 * \param valida que sea int
 * \return int 1 si es correcto
 */
int Validate_OnlyNumberInt(char buffer[]);

/*
 * \brief recibe un string
 * \param valida que sea float
 * \return int 1 si es correcto
 */
int Validate_OnlyNumberFloat(char buffer[]);

/*
 * \brief recibe un string
 * \param valida que sea solo letras
 * \return int 1 si es correcto
 */
int Validate_OnlyAlphabet(char buffer[]);

/*
 * \brief recibe un string
 * \param valida que sea solo letras con un espacio
 * \return int 1 si es correcto
 */
int Validate_OnlyAphabetWithSpaces(char buffer[]);

/*
 * \brief Ingresa mensaje
 * \param valida que sea s o n
 * \return int 1 si es s
 */
int Validate_Exit_SN(char MSJ[], char ERROR_MSJ[], int REINTENTOS);

/*
 * \brief Ingresa string de cuil
 * \param valida que sea formato cuil
 * \return int 1 si es correcto
 */
int Validate_Cuit(char pData[]);

// Get //

/*
 * \brief Ingresa mensaje
 * \param valida que sea int
 * \return int ingresado
 */
int Get_Int(char MSJ[], char ERROR_MSJ[]);

/*
 * \brief Ingresa mensaje, minimo y maximo
 * \param valida que sea int y este en el rango
 * \return int ingresado
 */
int Get_IntRange(char MSJ[], char ERROR_MSJ[], int MIN, int MAX, int REINTENTOS);

/*
 * \brief Ingresa mensaje
 * \param valida que sea int y positivo
 * \return int ingresado
 */
int Get_IntPositive(char MSJ[], char ERROR_MSJ[], int REINTENTOS);

/*
 * \brief Ingresa mensaje
 * \param valida que sea int y negativo
 * \return int ingresado
 */
int Get_IntNegative(char MSJ[], char ERROR_MSJ[], int REINTENTOS);

/*
 * \brief Ingresa mensaje
 * \param valida que sea float
 * \return float ingresado
 */
float Get_Float(char MSJ[], char ERROR_MSJ[], int REINTENTOS);

/*
 * \brief Ingresa mensaje, minimo y maximo
 * \param valida que sea float y este dentro del rango
 * \return float ingresado
 */
float Get_FloatRange(char MSJ[], char ERROR_MSJ[], float MIN, float MAX, int REINTENTOS);

/*
 * \brief Ingresa mensaje
 * \param valida que sean solo letras y no nulo
 * \return char ingresado
 */
char Get_Char(char MSJ[], char ERROR_MSJ[], int REINTENTOS);

/*
 * \brief Ingresa mensaje, string y tamanio del string
 * \param valida que no sea nulo o 0 el string
 * \return no retorna nada
 */
void Get_String(char MSJ[], char ERROR_MSJ[], char pString[], int size, int REINTENTOS);

/*
 * \brief Ingresa mensaje, string y tamanio del string
 * \param valida que tenga solo letras
 * \return no retorna nada
 */
void Get_OnlyAlphabetString(char MSJ[], char ERROR_MSJ[], char pString[], int size, int REINTENTOS);

/*
 * \brief Ingresa mensaje, string y tamanio del string
 * \param valida que tenga letras y espacio
 * \return no retorna nada
 */
void Get_OnlyAlphabetStringWithSpaces(char MSJ[], char ERROR_MSJ[], char pString[], int size, int REINTENTOS);

/*
 * \brief Ingresa mensaje y string
 * \param valida que tenga formato cuil
 * \return no retorna nada
 */
void Get_Cuil(char MSJ[], char ERROR_MSJ[], char pString[], int size, int REINTENTOS);

/*
 * \brief Ingresa mensaje y string
 * \param valida que tenga formato dni
 * \return no retorna nada
 */
void Get_DNI(char MSJ[], char ERROR_MSJ[], char pString[], int size, int REINTENTOS);

/*
 * \brief Imprimir menu
 * \param Menu principal
 * \return no retorna nada
 */
void Menu(void);
void menuInformes(void);



#endif /* BIBLIOTECA_H_ */
