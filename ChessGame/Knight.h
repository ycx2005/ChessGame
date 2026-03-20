#pragma once
#include "ChessPiece.h"

class ChessBoard;

class Knight : public ChessPiece {
public:
	Knight(int color) : ChessPiece(color) {}
	std::string toString() override { return "N"; }
	std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) override { return std::vector<Position>(); }
private:
	int m_value = 3;
};