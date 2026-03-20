#pragma once
#include "ChessPiece.h"

class King : public ChessPiece {
public:
	King(int color) : ChessPiece(color) {}
	std::string toString() override { return "K"; }
	Position getPossiblePositions() override { return Position(); }
private:
	int m_value = 0;
};