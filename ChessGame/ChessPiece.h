#pragma once
#include <iostream>
#include <vector>
#include "Position.h"

typedef enum {
	WHITE,
	BLACK,
	BLANK
} Color;

class ChessPiece {
public:
	ChessPiece(int color) { m_color = color; }
	virtual ~ChessPiece() = default;
	int getColor() const { return m_color; }

	virtual Position getPossiblePositions() = 0;
	virtual std::string toString() = 0;
protected:
	int m_color;
	std::vector<Position> m_possiblePositions;
};