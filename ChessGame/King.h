#pragma once
#include "ChessPiece.h"

class King : public ChessPiece {
public:
	King(int color) : ChessPiece(color) {}
	std::string toString() override { return "K"; }
private:
	int m_value = 0;
};