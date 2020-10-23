/*
 * NumeroComplejo.cpp
 *
 *  Created on: 23 oct. 2020
 *      Author: sistemas
 */

#include <iostream>
#include <math.h>
#include "NumeroComplejo.h"

using namespace std;

void inicializarNumeroComplejo(NumeroComplejo &unNumero,float parteReal, float parteImaginaria){
	unNumero.parteReal=parteReal;
	unNumero.parteImaginaria=parteImaginaria;
}

NumeroComplejo sumaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo){
	NumeroComplejo suma;
	suma.parteReal=unNumComplejo.parteReal + otroNumComplejo.parteReal;
	suma.parteImaginaria=unNumComplejo.parteImaginaria + otroNumComplejo.parteImaginaria;

	return suma;
}


NumeroComplejo restaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo){
	NumeroComplejo resta;
	resta.parteReal=unNumComplejo.parteReal - otroNumComplejo.parteReal;
	resta.parteImaginaria=unNumComplejo.parteImaginaria - otroNumComplejo.parteImaginaria;

	return resta;
}

NumeroComplejo multiplicaComplejos (NumeroComplejo unNumComplejo, NumeroComplejo otroNumComplejo){
	NumeroComplejo producto;
	producto.parteReal=unNumComplejo.parteReal*otroNumComplejo.parteReal - unNumComplejo.parteImaginaria*otroNumComplejo.parteImaginaria;
	producto.parteImaginaria=unNumComplejo.parteReal*otroNumComplejo.parteImaginaria + unNumComplejo.parteImaginaria*otroNumComplejo.parteReal;

	return producto;
}

void mostrarNumeroComplejo(NumeroComplejo unNumComplejo){
	if(unNumComplejo.parteImaginaria > 0){
		cout<<unNumComplejo.parteReal<<" + i"<<unNumComplejo.parteImaginaria<<endl;
	}else{
		cout<<unNumComplejo.parteReal<<" "<<unNumComplejo.parteImaginaria<<"i"<<endl;
	}
}


float moduloComplejo (NumeroComplejo unNumComplejo){

	return sqrt(unNumComplejo.parteReal*unNumComplejo.parteReal + unNumComplejo.parteImaginaria*unNumComplejo.parteImaginaria);
}


