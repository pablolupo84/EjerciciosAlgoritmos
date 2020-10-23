//============================================================================
// Name        : clase_recursividad.cpp
// Author      : Plupo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int ObtenerSumatoriaHastaCien(int comienzo);
int ObtenerFactorial(int n);
int ObtenerFibonacci(int n);
void MostrarReversa(char cadenaCaracteres[]);
void ObtenerMaximo(int vector[], int indiceComienzo, int indiceFin);// Divide & Conquer


int main() {
	int resultado = ObtenerSumatoriaHastaCien(1);
	cout<<resultado<<endl;
	cout<<ObtenerFactorial(6)<<endl;
	cout<<ObtenerFibonacci(3)<<endl;

	return 0;
}

// O(N)
int ObtenerSumatoriaHastaCien(int comienzo){
	int sumatoria = 0;
	if(comienzo<=100){
		sumatoria = comienzo + ObtenerSumatoriaHastaCien(comienzo+1);
	}

	return sumatoria;
}

int ObtenerFactorial(int n){
	return n==0 ? 1: n*ObtenerFactorial(n-1);
}

// 0 1 1 2 3 5

//Fibonacci de n
//{
 // n ==0 , 0
// n == 1, 1
// n > 1, Fibonacci(n-2) + Fibonacci(n-1)
//}
int ObtenerFibonacci(int n){
	return n<=1 ? n: ObtenerFibonacci(n-2)+ObtenerFibonacci(n-1);
}

void MostrarReversa(char cadenaCaracteres[],int ind){
	if(cadenaCaracteres[ind] != '\0'){
		MostrarReversa(cadenaCaracteres,ind + 1);
		cout<<cadenaCaracteres[ind];
	}
}
