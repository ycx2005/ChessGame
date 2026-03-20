#pragma once
#include <iostream>

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

	virtual std::string toString() { return "Error"; }
private:
	int m_color;
};