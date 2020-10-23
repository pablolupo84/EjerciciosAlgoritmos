/*
 * zipic.h
 *
 *  Created on: 23 oct. 2020
 *      Author: sistemas
 */

#ifndef ZIPIC_H_
#define ZIPIC_H_

/*
 * Precondicion: @vector es un vector de enteros
 * Postcondicion: retorna true si todos los indicies son mayores a 0 y si tiene el valor -1 como finalizador.
 *
 */
bool EsZipic(int vector[]);

/*
 *	Precondicion: @vector es un array de enteros valido.
 *	PostCondicion: Retorna el tamanio de un vector zipic.
 */
int TamanioZipic(int vector[]);

/*
 * Precondicion: @vector es una instancia valida.
 * Postcondicion: Retorna la suma de un zipic.
*/
int SumatoriaDeUnZipic(int vector[]);

/* Precondicion: @vector y @otroVector son instancias validas.
 * Postcondicion: Retorna la suma de dos zipic.
 */
int SumatoriaDosZipic(int vector[],int otroVector[]);


/* Precondicion: @vector y @otroVector son instancias validas
 * Postcondicion: Retorna el producto de dos zipic.
 */
int MultiplicacionZipic(int vectorZipic[],int otroVectorZipic[]);


#endif /* ZIPIC_H_ */
