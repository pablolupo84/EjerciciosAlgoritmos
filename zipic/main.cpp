//============================================================================
// Name        : zipic.cpp
// Author      : Plupo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "zipic.h"

using namespace std;


//Pruebas Unitarias*/
void TestEsZipic1();
void TestEsZipic2();
void TestEsZipic3();
void TestEsZipic4();
void TestTamanioZipic1();
void TestTamanioZipic2();
void TestTamanioZipic3();
void TestSumatoriaDeUnZipic1();
void TestSumatoriaDeUnZipic2();
void TestSumatoriaDeUnZipic3();
void TestSumatoriaDeDosZipic();
void TestMultiplicacionZipic();

void MostrarResultado(bool ResultadoObtenido,bool ResultadoEsperado, char mensaje[]);
void MostrarResultado(int ResultadoObtenido,int ResultadoEsperado, char mensaje[]);

int main() {
	cout << "Ejercicios Zipic" << endl; // prints ejercicios Zipic

	TestEsZipic1();
	TestEsZipic2();
	TestEsZipic3();
	TestEsZipic4();

	TestTamanioZipic1();
	TestTamanioZipic2();
	TestTamanioZipic3();

	TestSumatoriaDeUnZipic1();
	TestSumatoriaDeUnZipic2();
	TestSumatoriaDeUnZipic3();

	TestSumatoriaDeDosZipic();

	TestMultiplicacionZipic();

	return 0;
}

void TestEsZipic1(){
	int vector[]={234,12,4,-1};
	bool ResultadoEsperado=true;
	bool ResultadoObtenido=EsZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestEsZipic1");

}

void TestEsZipic2(){
	int vector[]={234,-1,-5,-1};
	bool ResultadoEsperado=true;
	bool ResultadoObtenido=EsZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestEsZipic2");

}

void TestEsZipic3(){
	int vector[]={-1,12,4,-1};
	bool ResultadoEsperado=true;
	bool ResultadoObtenido=EsZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestEsZipic3");

}

void TestEsZipic4(){
	int vector[]={0,12,4,-1};
	bool ResultadoEsperado=false;
	bool ResultadoObtenido=EsZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestEsZipic4");

}

void TestTamanioZipic1(){
	int vector[]={5,12,4,-1};
	int ResultadoEsperado=3;
	int ResultadoObtenido=TamanioZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestTamanioZipic1");

}

void TestTamanioZipic2(){
	int vector[]={-1,12,4,-1};
	int ResultadoEsperado=0;
	int ResultadoObtenido=TamanioZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestTamanioZipic2");

}

void TestTamanioZipic3(){
	int vector[]={5,12,4,5,-1};
	int ResultadoEsperado=4;
	int ResultadoObtenido=TamanioZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestTamanioZipic3");

}

void TestSumatoriaDeUnZipic1(){
	int vector[]={234,12,4,-1};
	int ResultadoEsperado=270;
	int ResultadoObtenido=SumatoriaDeUnZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestSumatoriaDeUnZipic1");
}

void TestSumatoriaDeUnZipic2(){
	int vector[]={1,4,-1,-221,0};
	int ResultadoEsperado=9;
	int ResultadoObtenido=SumatoriaDeUnZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestSumatoriaDeUnZipic2");
}

void TestSumatoriaDeUnZipic3(){
	int vector[]={-1,5,6,-221,0};
	int ResultadoEsperado=0;
	int ResultadoObtenido=SumatoriaDeUnZipic(vector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestSumatoriaDeUnZipic3");
}

void TestSumatoriaDeDosZipic(){
	int vector[]={234,12,4,-1};
	int otroVector[]={1,4,-1,-221,0};
	int ResultadoEsperado=828;
	int ResultadoObtenido=SumatoriaDosZipic(vector,otroVector);

	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestSumatoriaDeDosZipic");
}

void TestMultiplicacionZipic(){
	int vector[]={234,12,4,-1};
	int otroVector[]={1,4,-1,-221,0};
	int ResultadoEsperado=342;
	int ResultadoObtenido=MultiplicacionZipic(vector,otroVector);
	MostrarResultado(ResultadoObtenido, ResultadoEsperado, "TestMultiplicacionZipic");

}

void MostrarResultado(bool ResultadoObtenido,bool ResultadoEsperado, char mensaje[]){
	if(ResultadoObtenido==ResultadoEsperado){
		cout<<mensaje<<": OK"<<endl;
	}else{
		cout<<mensaje<<" Error. Se esperaba: "<<ResultadoEsperado<<" Se obtuvo: "<<ResultadoObtenido<<endl;
	}
}

void MostrarResultado(int ResultadoObtenido,int ResultadoEsperado, char mensaje[]){
	if(ResultadoObtenido==ResultadoEsperado){
		cout<<mensaje<<": OK"<<endl;
	}else{
		cout<<mensaje<<" Error. Se esperaba: "<<ResultadoEsperado<<" Se obtuvo: "<<ResultadoObtenido<<endl;
	}
}
