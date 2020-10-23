/*
 * NumeroComplejo.h
 *
 *  Created on: 23 oct. 2020
 *      Author: sistemas
 */

#ifndef NUMEROCOMPLEJO_H_
#define NUMEROCOMPLEJO_H_

//Estructura NumeroComplejo
struct NumeroComplejo {
	float parteReal;
	float parteImaginaria;
};

/*Precondición:
* PostCondicion: Retorna un NumeroComplejo valido.
*/
void inicializarNumeroComplejo(NumeroComplejo &unNumero,float parteReal, float parteImaginaria);


/*Precondición: @unNumComplejo y @otroNumComplejo son instancias válidas.
* PostCondicion: Retorna una instancia valida de la suma de dos números complejos.
*/
NumeroComplejo sumaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo);


/*Precondición: @unNumComplejo y @otroNumComplejo son instancias válidas.
* PostCondicion: Retorna una instancia valida de la resta de dos números complejos.
*/

NumeroComplejo restaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo);

/*Precondición: @unNumComplejo y @otroNumComplejo son instancias válidas.
* PostCondicion: Retorna una instancia valida del producto de dos números complejos.
*/

NumeroComplejo multiplicaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo);

/*Precondición: @unNumComplejo es una instancias válidas.
* PostCondicion: Muestra por pantalla un numero complejo z= a + bi
*/
void mostrarNumeroComplejo(NumeroComplejo unNumComplejo);

/*Precondición: @unNumComplejo es una instancia válida.
* PostCondicion: Retorna el modulo de un complejo.
*/

float moduloComplejo (NumeroComplejo unNumComplejo);




#endif /* NUMEROCOMPLEJO_H_ */
