#pragma once
#include <iostream>
#include <vector>
#include "Position.h"

typedef enum {
	WHITE,
	BLACK,
	BLANK
} Color;

class ChessBoard;

class ChessPiece {
public:
	ChessPiece(int color) { m_color = color; }
	virtual ~ChessPiece() = default;
	int getColor() const { return m_color; }

	virtual std::vector<Position> getPossiblePositions(ChessBoard* board, int currentX, int currentY) = 0;
	virtual std::string toString() = 0;
protected:
	int m_color;
};