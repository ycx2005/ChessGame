#pragma once
#include "ChessPiece.h"

class Bishop : public ChessPiece {
public:
	Bishop(int color) : ChessPiece(color) {}
	std::string toString() { return "B"; }
	Position getPossiblePositions() override { return Position(); }
private:
	int m_value = 3;
};