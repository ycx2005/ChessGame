#pragma once
#include "ChessPiece.h"

class Rook : public ChessPiece {
public:
	Rook(int color) : ChessPiece(color) {}
	std::string toString() override { return "R"; }
	std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) override { return std::vector<Position>(); }
private:
	int m_value = 5;
};