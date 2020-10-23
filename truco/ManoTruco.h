#ifndef MANOTRUCO_H_
#define MANOTRUCO_H_

#include "Carta.h"
using UndavCarta::Carta;

namespace UndavTruco{
	enum ResultadoJugada { GanoJugador1, GanoJugador2, Parda };
	// Precondicion: @cartaJugador1 y @cartaJugador2 son cartas del truco
	// Postcondicion: Devuelve el resultado del ganador de una mano de truco entre @cartaJugador1 y @cartaJugador2
	ResultadoJugada Jugar(Carta* cartaJugador1, Carta* cartaJugador2);
}

#endif
