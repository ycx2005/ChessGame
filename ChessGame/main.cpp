#include <iostream>
#include "ChessBoard.h"

#include "King.h"
#include "Pawn.h"

int main() {
	ChessBoard tauler;
	tauler.initializeBoard();
	tauler.showBoard();
	tauler.movePiece(Position(0, 1), Position(2, 2));
	tauler.showBoard();
	tauler.movePiece(Position(1, 2), Position(2, 2)); //it doesn't show this move
	tauler.movePiece(Position(1, 7), Position(3, 7));
	tauler.showBoard();

	King* king = new King(WHITE);
	Pawn* pawn = new Pawn(BLACK);
	tauler.putPiece(king, Position(4, 4));
	tauler.putPiece(pawn, Position(5, 4));
	tauler.showBoard();
	tauler.movePiece(Position(4, 4), Position(5, 4));
	tauler.showBoard();
}
