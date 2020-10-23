#include <iostream>
using namespace std;

// Ejercicio: implementar las siguientes funciones de manera recursiva
int Factorial(int n);
int Fibonacci(int n);
int MaximoComunDivisor(int a, int b);
int Maximo(int enteros[],
		int indiceComienzo,
		int indiceFinal);

void EjecutarPruebasUnitarias();

int main() {
	EjecutarPruebasUnitarias();
	return 0;
}

int Maximo(int enteros[],
		int indiceComienzo,
		int indiceFinal){
	int maximo;
	if(indiceComienzo == indiceFinal){
		maximo = enteros[indiceComienzo];
	}else{
		int indiceMitad = (indiceComienzo+indiceFinal)/2;
		int maximoPrimeraMitad = Maximo(enteros, indiceComienzo, indiceMitad);
		int maximoSegundaMitad = Maximo(enteros, indiceMitad + 1, indiceFinal);
		maximo = maximoPrimeraMitad > maximoSegundaMitad ? maximoPrimeraMitad : maximoSegundaMitad;
	}

	return maximo;
}


// Correcta: clara y simple
int Factorial1(int n){
    int res;
    if (n == 0) {// Condicion de Corte
        res = 1;
    }else {
        res = Factorial1(n-1) * n;//Recursion - >infinito
    }
    return res;
}


// Correcta: Muy rebuscada.
int Factorial2(int n){
    int resu = 1;
    if(resu<n){
    	resu = Factorial2(n-1) * n;
    }

    return resu;
}

// Correcta: clara y simple. Y compacta
int Factorial(int n){
    return n == 0 ? 1 : Factorial(n-1) * n;
}

int MaximoComunDivisor(int a, int b){
	int resto = a % b;
	int resultado;
	if(resto == 0) {
		resultado = b;
	}
	else{
		resultado = MaximoComunDivisor(b, resto);
	}

	return resultado;
}

int Fibonacci1(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return Fibonacci1(n-1) + Fibonacci1(n-2);
}

int Fibonacci(int n){
	return n<=1 ? n : Fibonacci(n-1) + Fibonacci(n-2);
}

void MostrarResultadoTest(bool testOk, char* nombreTest)
{
    if(testOk){
        cout <<nombreTest<<": Ok"<<endl;
    }else{
        cout <<nombreTest<<": Fallo"<< endl;
    }
}


void TestFactorialCero(){
	int n = 0;
	int valorEsperado = 1;

	int resultado = Factorial(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFactorialCero");
}

void TestFactorialUno(){
	int n = 1;
	int valorEsperado = 1;

	int resultado = Factorial(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFactorialUno");
}

void TestFactorialDos(){
	int n = 2;
	int valorEsperado = 2;

	int resultado = Factorial(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFactorialDos");
}

void TestFactorialCinco(){
	int n = 5;
	int valorEsperado = 120;

	int resultado = Factorial(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFactorialCinco");
}

void TestFibonacciCero(){
	int n = 0;
	int valorEsperado = 0;

	int resultado = Fibonacci(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFibonacciCero");
}

void TestFibonacciUno(){
	int n = 1;
	int valorEsperado = 1;

	int resultado = Fibonacci(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFibonacciUno");
}

void TestFibonacciDos(){
	int n = 1;
	int valorEsperado = 1;

	int resultado = Fibonacci(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFibonacciDos");
}

void TestFibonacciTres(){
	int n = 3;
	int valorEsperado = 2;

	int resultado = Fibonacci(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFibonacciTres");
}

void TestFibonacciCuatro(){
	int n = 4;
	int valorEsperado = 3;

	int resultado = Fibonacci(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFibonacciCuatro");
}

void TestFibonacciCinco(){
	int n = 5;
	int valorEsperado = 5;

	int resultado = Fibonacci(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFibonacciCinco");
}

void TestFibonacciSeis(){
	int n = 6;
	int valorEsperado = 8;

	int resultado = Fibonacci(n);

	MostrarResultadoTest(resultado == valorEsperado, "TestFibonacciSeis");
}


void TestMCD5Y25()
{
	int a = 25;
	int b = 5;
	int resultadoEsperado = 5;

	int resultado = MaximoComunDivisor(a, b);

	if(resultado == resultadoEsperado){
		cout<<"TestMCD5Y25: OK"<<endl;
	}
	else
	{
		cout<<"TestMCD5Y25: Fail"<<endl;
	}
}

void TestMCD20Y25()
{
	int a = 25;
	int b = 20;
	int resultadoEsperado = 5;

	int resultado = MaximoComunDivisor(a, b);

	if(resultado == resultadoEsperado){
		cout<<"TestMCD20Y25: OK"<<endl;
	}
	else
	{
		cout<<"TestMCD20Y25: Fail"<<endl;
	}
}

void TestNumerosPrimosMuyGrandes(){
	int a = 57885161;
	int b = 42643801;
	int resultadoEsperado = 1;

	int resultado = MaximoComunDivisor(a, b);

	if(resultado == resultadoEsperado){
		cout<<"TestNumerosPrimosMuyGrandes: OK"<<endl;
	}
	else
	{
		cout<<"TestNumerosPrimosMuyGrandes: Fail"<<endl;
	}
}

void TestMaximo10Elementos(){
	int elementos[] ={90,10,1, 0,800,100,11,5,180,90};
	int cantidadElementos=10;
	int valorMaximo = 800;

	int resultado = Maximo(elementos, 0, cantidadElementos - 1);

	MostrarResultadoTest(resultado == valorMaximo, "TestMaximo10Elementos");
}

void EjecutarPruebasUnitarias(){
	TestFactorialCero();
	TestFactorialUno();
	TestFactorialDos();
	TestFactorialCinco();
	TestFibonacciCero();
	TestFibonacciUno();
	TestFibonacciDos();
	TestFibonacciTres();
	TestFibonacciCuatro();
	TestFibonacciCinco();
	TestFibonacciSeis();
	TestMCD20Y25();
	TestMCD5Y25();
	TestNumerosPrimosMuyGrandes();
	TestMaximo10Elementos();
}
