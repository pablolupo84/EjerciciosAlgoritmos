#include "ManoTruco.h"
#include "Carta.h"

using namespace UndavCarta;

enum EscalaValoresTruco{CUATROS = 0, CINCOS, SEIS, SIETE_FALSOS, SOTAS, CABALLOS, REYES, UNOS_FALSOS, DOS, TRES, SIETE_ORO, SIETE_ESPADA, ANCHO_BASTO, ANCHO_ESPADA};

EscalaValoresTruco  ObtenerValorTruco(Carta* carta);
bool EsSieteFalso(TipoPalo palo);
bool EsAnchoFalso(TipoPalo palo);

UndavTruco::ResultadoJugada UndavTruco::Jugar(Carta* jugador1, Carta* jugador2){
	ResultadoJugada resultado;
	int valorCartaJugador1 = ObtenerValor(jugador1);
	int valorCartaJugador2 = ObtenerValor(jugador2);
	if(valorCartaJugador1 < valorCartaJugador2){
		resultado = ResultadoJugada::GanoJugador2;
	}else{
		resultado = valorCartaJugador1 == valorCartaJugador2 ? ResultadoJugada::Parda :  ResultadoJugada::GanoJugador1 ;
	}
}

// Mapeamos las cartas a un valor numerico
// 4 = 0, 5 = 1, 6 =2, 7 Falsos (Copa y basto) = 3, 10 = 4 , 11 = 5, 12 = 6, 1 falsos (copa, oro) = 7, 2 = 8, 3 =9, 7 oro =10, 7 espada == 11, 1 basto =12 , 1 espada =13
EscalaValoresTruco  ObtenerValorTruco(Carta* carta){
	EscalaValoresTruco valor;
	TipoPalo palo = ObtenerPalo(carta);
	switch(ObtenerValor(carta)){
		case 4:
			valor = EscalaValoresTruco::CUATROS;
			break;
		case 5:
			valor = EscalaValoresTruco::CINCOS;
			break;
		case 6:
			valor = EscalaValoresTruco::SEIS;
			break;
		case 7:
		if (EsSieteFalso(palo))
				valor = EscalaValoresTruco::SIETE_FALSOS;
			else
				valor = palo == TipoPalo::Oro ? EscalaValoresTruco::SIETE_ORO : EscalaValoresTruco::SIETE_ESPADA;
			break;
		case 10:
			valor = EscalaValoresTruco::SOTAS;
			break;
		case 11:
			valor = EscalaValoresTruco::CABALLOS;
			break;
		case 12:
			valor = EscalaValoresTruco::REYES;
			break;
		case 1:
		if (EsAnchoFalso(palo))
				valor = EscalaValoresTruco::SIETE_FALSOS;
			else
				valor = palo == TipoPalo::Basto ? EscalaValoresTruco::ANCHO_BASTO : EscalaValoresTruco::ANCHO_ESPADA;
			break;
		case 2:
			valor = EscalaValoresTruco::DOS;
			break;
		case 3:
			valor = EscalaValoresTruco::TRES;
			break;
	}

	return valor;
}


bool EsSieteFalso(TipoPalo palo) {
	return palo == TipoPalo::Basto || palo == TipoPalo::Copa;
}

bool EsAnchoFalso(TipoPalo palo) {
	return palo == TipoPalo::Oro || palo == TipoPalo::Copa;
}
