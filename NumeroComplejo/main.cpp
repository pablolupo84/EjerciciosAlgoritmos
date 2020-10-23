//============================================================================
// Name        : numeros_complejos.cpp
// Author      : Pablo Lupo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//1.	Defina el tipo de datos NumeroComplejo con las siguientes operaciones
//a.	Suma de dos números complejos
//b.	Resta de dos números complejos
//c.	Multiplicación de dos números complejos
//d.	Módulo de un número complejo


#include <iostream>
#include "NumeroComplejo.h"
using namespace std;


int main() {
	cout << "Numeros Complejos - Guia 1" << endl; // prints Numeros Complejos - Guia 1

	NumeroComplejo unNumero,otroNumero,suma,resta,producto;
	inicializarNumeroComplejo(unNumero,2,2.5);
	inicializarNumeroComplejo(otroNumero,2,2.5);
//	mostrarNumeroComplejo(unNumero);
//	mostrarNumeroComplejo(otroNumero);
	suma=sumaComplejos(unNumero,otroNumero);
	resta=restaComplejos(unNumero,otroNumero);
	producto=multiplicaComplejos(unNumero,otroNumero);
	mostrarNumeroComplejo(suma);
	mostrarNumeroComplejo(resta);
	mostrarNumeroComplejo(producto);
	cout<<"Modulo: "<<moduloComplejo(unNumero)<<endl;
	return 0;
}
