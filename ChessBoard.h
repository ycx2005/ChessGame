//
// Created by yichen on 10/9/26.
//

#ifndef CHESSGAME_CHESSBOARD_H
#define CHESSGAME_CHESSBOARD_H

#include <iostream>
#include <vector>
#include "ChessPiece.h"

static const int ROWS = 8;
static const int COLUMNS = 8;

class ChessBoard {
public:
    ChessBoard() = default;
    void initBoard();
    void clearBoard();
    void showBoard();
    void movePiece(int originRow, int originCol, int destRow, int destCol);
private:
    ChessPiece* m_board[ROWS][COLUMNS];
};


#endif //CHESSGAME_CHESSBOARD_H
