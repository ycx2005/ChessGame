#include "Knight.h"
#include "ChessBoard.h"

std::string Knight::toString() {
	if (m_color == WHITE) {
		return "wN";
	}
	else if ( m_color == BLACK) {
		return "bN";
	}
	else {
		return "";
	}
}

std::vector<Position> Knight::getPossiblePositions(ChessBoard* board, int currentX, int currentY) {
	//INITIAL IMPLEMENTATION: THIS FUNCTION CAN FIND ALL THE POSITIONS THAT A KNIGHT CAN JUMP TO AND ADDS THEM ALL INTO THE VECTOR.
	static const int knightMoves[8][2] = {
		{-2, -1}, {-2, 1},
		{-1, -2}, {-1, 2},
		{1, -2}, {1, 2},
		{2, -1}, {2, 1} 
	};
	std::vector<Position> possiblePositions;
	for (int i = 0; i < 8; i++) {
		int finalX = currentX + knightMoves[i][0];
		int finalY = currentY + knightMoves[i][1];
		Position finalPos(finalX, finalY);
		if ((finalY >= 0 && finalY < 8 && finalX >= 0 && finalX < 8) && (board->getPiece(finalX, finalY) == nullptr 
				|| board->getPiece(finalX, finalY)->getColor() != this->getColor())) {
			possiblePositions.push_back(finalPos);
		}
	}
	return possiblePositions;
}