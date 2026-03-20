#pragma once

class Position {
public:
	Position() { m_posX = 0; m_posY = 0; }
	Position(int x, int y) { m_posX = x; m_posY = y; }
	int getX() const { return m_posX; }
	int getY() const { return m_posY; }
private:
	int m_posX;
	int m_posY;
};