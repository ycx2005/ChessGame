#pragma once

class Position {
public:
	Position() { m_posX = 0; m_posY = 0; }
	Position(int x, int y) { m_posX = x; m_posY = y; }
	int getX() const { return m_posX; }
	int getY() const { return m_posY; }

	bool operator==(Position pos) const { return (m_posX == pos.m_posX && m_posY == pos.m_posY); }
	friend std::ostream& operator<<(std::ostream& os, const Position& pos) {
		// Text into 'os' , which represents cout
		os << "[" << pos.m_posX << ", " << pos.m_posY << "]";
		return os;
	}
private:
	int m_posX;
	int m_posY;
};