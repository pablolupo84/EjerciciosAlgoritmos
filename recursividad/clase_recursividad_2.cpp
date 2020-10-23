#include <iostream>
using namespace std;

int ObtenerFactorial(int n){
	return n == 0 ? 1 :  n*ObtenerFactorial(n-1);
}

int ObtenerFibonacci(int n){
	return n <=1 ? n : ObtenerFibonacci(n-2) + ObtenerFibonacci(n-1);
}

void MostrarReversa(char* cadenaCaracteres){
	if(*cadenaCaracteres=='\0'){
		return;
	}else{
		MostrarReversa(cadenaCaracteres + 1);
		cout<<*cadenaCaracteres;
	}
}

// DIVIDE & CONQUER en recursividad...
int ObtenerMaximo(int enteros[], int indiceComienzo, int indiceFin);

int main() {
	//cout<<ObtenerFactorial(3)<<endl; // 3! = 3 * (2!) , 2! = 2 * (1!), 1! = 1 * (!0), 0! = 1;
	char texto[]="ABCD";
	//MostrarReversa(texto);

	int vector[]={78, 100, 90, 900, 40,30,0};
	cout<<ObtenerMaximo(vector, 0, 6)<<endl;
	return 0;
}

//[78 100 90 900 40 30 0]
// INVARIANTES
int ObtenerMaximo(int enteros[], int indiceComienzo, int indiceFin){
	int maximo;
	if(indiceComienzo>=indiceFin){
		maximo = enteros[indiceComienzo];
	}else{
		int indiceMitad =  indiceComienzo + (indiceFin - indiceComienzo) /2;
		int maximoPrimeraMitad = ObtenerMaximo(enteros, indiceComienzo, indiceMitad);
		int maximoSegundadMitad = ObtenerMaximo(enteros, indiceMitad + 1, indiceFin);
		maximo =maximoPrimeraMitad > maximoSegundadMitad ? maximoPrimeraMitad : maximoSegundadMitad;
	}

	return maximo;
}
