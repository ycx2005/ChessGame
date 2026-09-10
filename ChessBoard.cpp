//
// Created by yichen on 10/9/26.
//

#include "ChessBoard.h"

void ChessBoard::initBoard() {
    for ( int i = 0; i < ROWS; i++ ) {
        for ( int j = 0; j < COLUMNS; j++ ) {
            m_board[i][j] = 0;
        }
    }
}

void ChessBoard::showBoard() {
    for ( int i = 0; i < ROWS; i++ ) {
        for ( int j = 0; j < COLUMNS; j++ ) {
            std::cout << m_board[i][j] << " ";
        }
        std::cout<< std::endl;
    }
}