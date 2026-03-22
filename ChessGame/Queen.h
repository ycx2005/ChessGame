#pragma once
#include "ChessPiece.h"

class Queen : public ChessPiece {
public:
	Queen(int color) : ChessPiece(color) {}
	std::string toString() override;
	std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) override;
private:
	int m_value = 9;
};