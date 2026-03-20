#pragma once
#include "ChessPiece.h"


const int MAX_ROW = 8;
const int MAX_COL = 8;

class ChessBoard {
public:
	ChessBoard();
	void initializeBoard();
	void clearBoard();
	void showBoard();
	ChessPiece* getPiece(int x, int y) const { return m_board[x][y]; }
	void movePiece(Position initialPos, Position finalPos);
private:
	ChessPiece* m_board[MAX_ROW][MAX_COL];
};