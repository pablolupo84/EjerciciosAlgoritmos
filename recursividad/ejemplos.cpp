#include <iostream>
using namespace std;

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
bool EsZipic(int posibleZipic[], int tamanio);

int main() {
	//int zipic[TOPE] = {1,2,3,4,-1,5,6,7};
	//int iteradorZipic = ContarZipic(zipic) - 1;
	//MostrarDeReversa(zipic,iteradorZipic);
}

// No esta pensada muy bien de forma recursiva ("Es como hacer un for de atras para adelante")
void MostrarDeReversa(int zipic[], int iteradorZipic){
	if(iteradorZipic >= 0){
		cout<< zipic[iteradorZipic] << endl;
		iteradorZipic --;
		MostrarDeReversa(zipic,iteradorZipic);
	}
}

void MostrarReversa(int zipic[], int indiceActual)
{
	if(zipic[indiceActual]==-1) return;
	MostrarReversa(zipic, indiceActual+1);
	cout<<zipic[indiceActual]<<endl;
}

void MostrarReversa(int zipic[])
{
	if(*zipic==-1) return;
	MostrarReversa(zipic+1);
	cout<<*zipic<<endl;
}


void MostrarEnReversa1(char cadena[], int indiceUltimo){
	cout<<cadena[indiceUltimo];
	if(indiceUltimo>=0){
		MostrarEnReversa1(cadena, indiceUltimo -1);
	}
}

void MostrarEnReversa2(char cadena[], int indicePrimerElemento){
	if(cadena[indicePrimerElemento]=='\0') return;
	MostrarEnReversa2(cadena, indicePrimerElemento+1);
	cout<<cadena[indicePrimerElemento];
}

void MostrarEnReversa2(char *cadena){
	if(*cadena=='\0') return;
	MostrarEnReversa2(cadena+1);
	cout<<*cadena;
}

bool EsZipic(int posibleZipic[], int tamanio, int indiceComienzoZipic){
	if( indiceComienzoZipic == tamanio) return false; // Falta el menos -1
	if(posibleZipic[indiceComienzoZipic]==-1) return true; // Estaba todo bien y tiene -1
	if(posibleZipic[indiceComienzoZipic]<=0) return false; // No es un elemento valido y no hay -1 antes
	return EsZipic(posibleZipic,--tamanio, ++indiceComienzoZipic); // Venimos bien, es zipic si lo que esta despues es zipic
}
