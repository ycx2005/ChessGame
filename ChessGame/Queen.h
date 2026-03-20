#pragma once
#include "ChessPiece.h"

class Queen : public ChessPiece {
public:
	Queen(int color) : ChessPiece(color) {}
	std::string toString() override { return "Q"; }
	Position getPossiblePositions() override { return Position(); }
private:
	int m_value = 9;
};