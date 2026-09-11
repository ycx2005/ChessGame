//
// Created by yichen on 10/9/26.
//

#include "ChessBoard.h"
#include <iomanip>

#include "Pieces/Knight.h"

void ChessBoard::initBoard() {
    for ( int i = 0; i < ROWS; i++ ) {
        for ( int j = 0; j < COLUMNS; j++ ) {
            m_board[i][j] = nullptr;
        }
    }
    // PAWNS
    for ( int i = 0; i < COLUMNS; i++ ) {
        m_board[1][i] = new Pawn(BLACK);
        m_board[6][i] = new Pawn(WHITE);
    }
    // KINGS
    m_board[0][4] = new King(BLACK);
    m_board[7][4] = new King(WHITE);
    // QUEENS
    m_board[0][3] = new Queen(BLACK);
    m_board[7][3] = new Queen(WHITE);
    // ROOKS
    m_board[0][0] = new Rook(BLACK);
    m_board[0][7] = new Rook(BLACK);
    m_board[7][0] = new Rook(WHITE);
    m_board[7][7] = new Rook(WHITE);
    // KNIGHTS
    m_board[0][1] = new Knight(BLACK);
    m_board[0][6] = new Knight(BLACK);
    m_board[7][1] = new Knight(WHITE);
    m_board[7][6] = new Knight(WHITE);
    // BISHOPS
    m_board[0][2] = new Bishop(BLACK);
    m_board[0][5] = new Bishop(BLACK);
    m_board[7][2] = new Bishop(WHITE);
    m_board[7][5] = new Bishop(WHITE);
}

void ChessBoard::clearBoard() {
    for ( int i = 0; i < ROWS; i++ ) {
        for ( int j = 0; j < COLUMNS; j++ ) {
            m_board[i][j] = 0;
        }
    }
}

void ChessBoard::showBoard() const{
    for ( int i = 0; i < ROWS; i++ ) {
        for ( int j = 0; j < COLUMNS; j++ ) {
            if (m_board[i][j] == nullptr) {
                std::cout << std::setw(2) << "O" << " ";
            }
            else {
                std::cout << std::setw(2) << m_board[i][j]->toString() << " ";
            }
        }
        std::cout<< std::endl;
    }
}

void ChessBoard::movePiece( int originRow, int originCol, int destRow, int destCol) {

}