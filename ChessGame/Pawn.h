#pragma once
#include "ChessPiece.h"

class Pawn : public ChessPiece {
public:
	Pawn(int color) : ChessPiece(color) {}
	std::string toString() { return "P"; }
	Position getPossiblePositions() override { return Position(); }
private:
	int m_value = 1;
};