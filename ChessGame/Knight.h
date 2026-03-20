#pragma once
#include "ChessPiece.h"

class Knight : public ChessPiece {
public:
	Knight(int color) : ChessPiece(color) {}
	std::string toString() { return "N"; }
private:
	int m_value = 3;
};