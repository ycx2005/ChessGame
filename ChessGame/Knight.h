#pragma once
#include "ChessPiece.h"

class Knight : public ChessPiece {
public:
	Knight(int color) : ChessPiece(color) {}
	std::string toString() override { return "N"; }
	Position getPossiblePositions() override { return Position(); }
private:
	int m_value = 3;
};