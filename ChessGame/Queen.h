#pragma once
#include "ChessPiece.h"

class Queen : public ChessPiece {
public:
	Queen(int color) : ChessPiece(color) {}
	std::string toString() override { return "Q"; }
private:
	int m_value = 9;
};