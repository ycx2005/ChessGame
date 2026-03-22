#include <iostream>
#include "ChessBoard.h"
#include "Pawn.h"

int main() {
	ChessBoard tauler;
	tauler.initializeBoard();
	tauler.showBoard();
	tauler.movePiece(Position(0, 1), Position(2, 2));
	std::cout << tauler.getPiece(7, 1)->getColor();
	std::cout << std::endl;
	tauler.showBoard();

	Pawn* piece = new Pawn(WHITE);
	tauler.putPiece(piece, Position(2, 5));
	tauler.showBoard();
	tauler.movePiece(Position(1, 6), Position(2, 5));
	tauler.showBoard();
	tauler.movePiece(Position(1, 6), Position(4, 6));
	tauler.showBoard();
}
