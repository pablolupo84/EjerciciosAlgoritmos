#include <iostream>
using namespace std;


int MaximoComunDivisor(int a, int b);
int ObtenerSumatoriaHastaCien(int comienzo);
int ObtenerFactorial(int n);
int ObtenerFibonacci(int n);
void ObtenerMaximo(int vector[], int indiceComienzo, int indiceFin);// Divide & Conquer


// Precondicion: @cadena es una cadena de caracteres
// Postcondicion: Muestra invertida por salida estandar @cadena
// Ejemplo:
// 		Si se invoca asi: MostrarEnReversa("Guatemala")
// Muestra por pantalla: alametauG
void MostrarEnReversa(char cadena[]);


/*
 * Precondicion: @zipic es un zipic
 * Postcondicion: Muestra por salida estandar los elementos del zipic de
 * reversa, sin incluir el -1
 */
void MostrarDeReversa(int zipic[]);

/*  *
 * Precondicion: @tamanio es el tamanio del vector @posibleZipic (no es el
 * tamaño del zipic)
 * Postcondicion: Devuelve true si @posibleZipic es un zipic
 */
//bool EsZipic(int posibleZipic[], int tamanio);

/*Consigna: Implementar la función recursiva “ObtenerAlturaElemento” que cumpla con la
post-condición dada.
/*
* Precondición: @elemento es un índice válido de @componentesConectadas.
* @componentesConectadas es una instancia válida.
* Postcondición: Devuelve la altura de @elemento
*/
/*int ObtenerAlturaElemento(int componentesConectadas[], int elemento);
Criterio de evaluación: Se evaluará el cumplimiento de los requerimientos descritos en la
post-condición de la función. La implementación tiene que ser recursiva. Puede modificar la
firma de la función si lo desea.
Descripción del dominio: Las siguientes componentes conectadas (son 3 componentes y
8 elementos)
Se encuentran representadas en el siguiente vector de 8 posiciones (una por cada
elemento). Este vector seria una instancia del parametro @componentesConectadas
Dónde se cumple que:
[1 1 0 3 7 5 5 5]
El valor del vector en la posición i es el padre del elemento i
Si el valor en la posición i es igual a i, entonces el elemento i es raiz.
La altura se define como la cantidad de elementos que hay para llegar a la raíz. Con el caso
base de que la altura de la raíz es cero.
Ejemplos para los modelos dados
La altura del elemento 7 es 1
La altura del elemento 4 es 2
La altura de los elementos 5, 3 y 1 es 0 porque son raíces
La altura del elemento 0 es 1.
*/

/* Precondición: @elemento es un índice válido de @componentesConectadas.
* @componentesConectadas es una instancia válida.
* Postcondición: Devuelve la altura de @elemento
*/
int ObtenerAlturaElemento(int componentesConectadas[], int elemento);

int main2() {
	cout<<MaximoComunDivisor(60,40)<<endl;
	cout<<MaximoComunDivisor(40,60)<<endl;
	//int zipic[TOPE] = {1,2,3,4,-1,5,6,7};
	//int iteradorZipic = ContarZipic(zipic) - 1;
	//MostrarDeReversa(zipic,iteradorZipic);
}



int MaximoComunDivisor(int a, int b){
	int resto = a%b;
	int resultado;
	if (resto==0){
		resultado=b;
	}
	else{
		resultado= MaximoComunDivisor(b,resto);
	}
	return resultado;
}

