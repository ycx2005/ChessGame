#pragma once
#include "ChessPiece.h"

class Pawn : public ChessPiece {
public:
	Pawn(int color) : ChessPiece(color) {}
	std::string toString() { return "P"; }
private:
	int m_value = 1;
};