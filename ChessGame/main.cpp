#include <iostream>;
#include "ChessBoard.h"

int main() {
	ChessBoard tauler;
	tauler.initializeBoard();
	tauler.showBoard();
	tauler.movePiece(Position(0, 1), Position(2, 2));
	std::cout << tauler.getPiece(7, 1)->getColor();
	std::cout << std::endl;
	tauler.showBoard();
}