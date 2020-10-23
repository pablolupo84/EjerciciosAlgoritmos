#include "JugadorTruco.h"
#include "Carta.h"


struct UndavTruco::JugadorTruco{
	UndavCarta::Carta* cartas[CartasPorJugador];
};

UndavCarta::Carta* ParsearCarta(char* cartasCsv, int numeroCarta);

UndavTruco::JugadorTruco* UndavTruco::Crear(char* cartasCsv){
	JugadorTruco* jugador = new JugadorTruco;
	for(int i=0; i<CartasPorJugador;++i){
		jugador->cartas[i] = ParsearCarta(cartasCsv, i);
	}
	return jugador;
}

UndavCarta::Carta** UndavTruco::ObtenerCartas(JugadorTruco* jugadorTruco){
	return &(jugadorTruco->cartas[0]);
}

// Postcondcion: Libera todos los recursos asociados de @jugadorTruco
void UndavTruco::Destruir(JugadorTruco* jugadorTruco){
	for(int i=0; i<CartasPorJugador; ++i){
		UndavCarta::Destruir(jugadorTruco->cartas[i]);
	}

	delete jugadorTruco;

}

UndavCarta::Carta* ParsearCarta(char* cartasCsv, int numeroCarta){
	Carta* carta;

	// TODO: Parsear la cadena CSV para identificar el valor y el palo de la carta
	int valor =2;
	UndavCarta::TipoPalo palo = UndavCarta::TipoPalo::Espada;

	carta = UndavCarta::Crear(valor, palo);

	return carta;
}
