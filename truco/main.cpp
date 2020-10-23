#include <iostream>
#include "Carta.h"
#include "JugadorTruco.h"
#include "ManoTruco.h"
#include <stdlib.h>
#include <time.h>

using namespace std;
using namespace UndavCarta;
using namespace UndavTruco;


// Funciones auxiliares codigo cliente
void MostrarJugada(Carta* cartaJugador1, Carta* cartaJugador2, ResultadoJugada resultado);
void Mostrar(UndavTruco::ResultadoJugada resultado);
void Mostrar(Carta* carta);
void Mostrar(TipoPalo palo);

int main() {
	srand(time(NULL));
	JugadorTruco* jugador1 = Crear("7,Espada\n2,Oro\n1,Copa");
	JugadorTruco* jugador2 = Crear("7,Oro\n2,Copa\n1,Basto");
	Carta* cartaJugador1 = ObtenerCartas(jugador1)[rand()%3];
	Carta* cartaJugador2 = ObtenerCartas(jugador2)[rand()%3];
	ResultadoJugada resultado = Jugar(cartaJugador1, cartaJugador2);
	MostrarJugada(cartaJugador1, cartaJugador2, resultado);
	Destruir(jugador1);
	Destruir(jugador2);

	return 0;
}

void Mostrar(ResultadoJugada resultado){
	switch(resultado){
		case GanoJugador1:
			cout<<"Gano jugador 1!";
			break;
		case GanoJugador2:
			cout<<"Gano jugador 2!";
			break;
		case Parda:
			cout<<"Empate";
			break;
	}
}

void Mostrar(Carta* carta){
	cout<<ObtenerValor(carta)<<" ";
	Mostrar(ObtenerPalo(carta));
}

void Mostrar(TipoPalo palo){
	switch(palo){
		case TipoPalo::Espada:
			cout<<"Espada";
			break;
		case TipoPalo::Oro:
			cout<<"Oro";
			break;
		case TipoPalo::Copa:
			cout<<"Copa";
			break;
		case TipoPalo::Basto:
			cout<<"Basto";
			break;
		default:
			break;
	}
}

void MostrarJugada(Carta* cartaJugador1, Carta* cartaJugador2, ResultadoJugada resultado){
	Mostrar(cartaJugador1);
	cout<<" VS ";
	Mostrar(cartaJugador2);
	cout<<endl<<"\t";
	Mostrar(resultado);
	cout<<endl;
}

