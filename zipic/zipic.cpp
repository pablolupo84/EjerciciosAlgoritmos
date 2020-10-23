/*
 * zipic.cpp
 *
 *  Created on: 23 oct. 2020
 *      Author: sistemas
 */

#include <iostream>
#include "zipic.h"
using namespace std;


int TamanioZipic(int vector[]){
	int tamanio=0;

	while(vector[tamanio]!=-1){
		tamanio++;
	}

	return tamanio;
}

bool EsZipic(int vector[]){
	int i=0;
	bool EsZipic=true;
	while(vector[i]!=-1 && EsZipic){
		vector[i]>0?i++:EsZipic=false;
	}
	return EsZipic;
}

int SumatoriaDeUnZipic(int vector[]){
	int SumatoriaZipic=0;
	int tamanio=TamanioZipic(vector);
	for(int i=0,indice=1;i<tamanio;i++){
		SumatoriaZipic+=vector[i]*(indice++);
	}
	return SumatoriaZipic;
}

int SumatoriaDosZipic(int vector[],int otroVector[]){
	return SumatoriaDeUnZipic(vector)*TamanioZipic(vector)+SumatoriaDeUnZipic(otroVector)*TamanioZipic(otroVector);
}

int MultiplicacionZipic(int vectorZipic[],int otroVectorZipic[]){
	int MultiplicacionZipic=0;

	int tamanioVectorZipic=TamanioZipic(vectorZipic);
	int tamaniootroVectorZipic=TamanioZipic(otroVectorZipic);

	for(int i=0,indice=1; i<tamanioVectorZipic ||i<tamaniootroVectorZipic ;i++,indice++){

		if(i>=tamanioVectorZipic){
			MultiplicacionZipic+=otroVectorZipic[i]*indice;
		}else{
			if(i>=tamaniootroVectorZipic){
				MultiplicacionZipic+=vectorZipic[i]*indice;
			}else{
				MultiplicacionZipic+=vectorZipic[i]*otroVectorZipic[i]*indice;
			}
		}
	}

	return MultiplicacionZipic;
}


