#pragma once
#include "ChessPiece.h"

class Pawn : public ChessPiece {
public:
	Pawn(int color) : ChessPiece(color) {}
	std::string toString() { return "P"; }
	std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) override { return std::vector<Position>(); }
private:
	int m_value = 1;
};