#pragma once
#include "ChessPiece.h"

class King : public ChessPiece {
public:
	King(int color) : ChessPiece(color) {}
	std::string toString() override;
	std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) override { return std::vector<Position>(); }
private:
	int m_value = 0;
};