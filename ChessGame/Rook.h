#pragma once
#include "ChessPiece.h"

class Rook : public ChessPiece {
public:
	Rook(int color) : ChessPiece(color) {}
	std::string toString() override { return "R"; }
	Position getPossiblePositions() override { return Position(); }
private:
	int m_value = 5;
};