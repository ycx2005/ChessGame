//
// Created by yichen on 10/9/26.
//

#ifndef CHESSGAME_CHESSBOARD_H
#define CHESSGAME_CHESSBOARD_H

#include <iostream>
#include <vector>
#include "ChessPiece.h"
#include "Pieces/Pawn.h"
#include "Pieces/King.h"
#include "Pieces/Queen.h"
#include "Pieces/Rook.h"
#include "Pieces/Bishop.h"

static const int ROWS = 8;
static const int COLUMNS = 8;

class ChessBoard {
public:
    ChessBoard() = default;
    void initBoard();           // Initialization of the chessboard
    void clearBoard();          // Clear every piece in the board
    void showBoard() const;     // Show the pieces position
    void movePiece(const int originRow, const int originCol,
        const int destRow, const int destCol); // Check possible moves and move the piece to its destination
private:
    ChessPiece* m_board[ROWS][COLUMNS];
};


#endif //CHESSGAME_CHESSBOARD_H
