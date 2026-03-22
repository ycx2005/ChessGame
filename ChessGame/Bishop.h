#pragma once
#include "ChessPiece.h"

class Bishop : public ChessPiece {
public:
	Bishop(int color) : ChessPiece(color) {}
	std::string toString() override;
	std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) override;
private:
	int m_value = 3;
};