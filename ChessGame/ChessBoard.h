#pragma once
#include <vector>
#include "ChessPiece.h"
//chess pieces
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"
#include "Pawn.h"

const int MAX_ROW = 8;
const int MAX_COL = 8;

class ChessBoard {
public:
	ChessBoard();
	void initializeBoard();
	void clearBoard();
	void showBoard();
private:
	ChessPiece* m_board[MAX_ROW][MAX_COL];
};