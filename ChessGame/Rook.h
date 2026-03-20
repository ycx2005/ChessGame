#pragma once
#include "ChessPiece.h"

class Rook : public ChessPiece {
public:
	Rook(int color) : ChessPiece(color) {}
	std::string toString() override { return "R"; }
private:
	int m_value = 5;
};