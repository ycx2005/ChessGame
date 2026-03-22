#pragma once
#include "ChessPiece.h"

class Pawn : public ChessPiece {
public:
	Pawn(int color) : ChessPiece(color) {}
	std::string toString() override;
	std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) override;
private:
	int m_value = 1;
};