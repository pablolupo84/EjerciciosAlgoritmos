#ifndef JUGADORTRUCO_H_
#define JUGADORTRUCO_H_

#include  "Carta.h"
using UndavCarta::Carta;

namespace UndavTruco{
	struct JugadorTruco;
	const int CartasPorJugador = 3;

	// Precondicion: @cartasCsv tiene dos registros con los campos valorCarta,PaloCarta donde valorCart es el valor de una carta de truco y paloCarta puede ser alguno de los siguientes valores Espada,Copa,Basto o Oro
	// Postcondicion: Devuelve una instancia valida de un jugador de truco con sus tres cartas.
	JugadorTruco* Crear(char* cartasCsv);

	Carta** ObtenerCartas(JugadorTruco* jugadorTruco);
	Carta* ObtenerCarta(JugadorTruco* jugadorTruco, int numeroCarta);

	// Precondicion: @jugador1 es una instancia valida de JugadorTruco
	// Postcondicion: Libera todos los recursos asociados de @jugador
	void Destruir(JugadorTruco* truco);
}



#endif
