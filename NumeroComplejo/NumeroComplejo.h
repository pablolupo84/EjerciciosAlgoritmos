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

/*Precondici�n:
* PostCondicion: Retorna un NumeroComplejo valido.
*/
void inicializarNumeroComplejo(NumeroComplejo &unNumero,float parteReal, float parteImaginaria);


/*Precondici�n: @unNumComplejo y @otroNumComplejo son instancias v�lidas.
* PostCondicion: Retorna una instancia valida de la suma de dos n�meros complejos.
*/
NumeroComplejo sumaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo);


/*Precondici�n: @unNumComplejo y @otroNumComplejo son instancias v�lidas.
* PostCondicion: Retorna una instancia valida de la resta de dos n�meros complejos.
*/

NumeroComplejo restaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo);

/*Precondici�n: @unNumComplejo y @otroNumComplejo son instancias v�lidas.
* PostCondicion: Retorna una instancia valida del producto de dos n�meros complejos.
*/

NumeroComplejo multiplicaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo);

/*Precondici�n: @unNumComplejo es una instancias v�lidas.
* PostCondicion: Muestra por pantalla un numero complejo z= a + bi
*/
void mostrarNumeroComplejo(NumeroComplejo unNumComplejo);

/*Precondici�n: @unNumComplejo es una instancia v�lida.
* PostCondicion: Retorna el modulo de un complejo.
*/

float moduloComplejo (NumeroComplejo unNumComplejo);




#endif /* NUMEROCOMPLEJO_H_ */
