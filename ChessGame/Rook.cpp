#include "Rook.h"
#include "ChessBoard.h"

std::string Rook::toString() {
    if (m_color == WHITE) {
        return "wR";
    }
    else if (m_color == BLACK) {
        return "bR";
    }
    else {
        return "";
    }
}

std::vector<Position> Rook::getPossiblePositions(ChessBoard* board, int currentX, int currentY) {
    //TODO: IMPLEMENT ROOK MOVEMENT. CAN MOVE HORIZONTALLY AND VERTICALLY ANY AMOUNT OF SQUARES AS LONG AS THERE ARE NOT PIECES BLOCKING.
    std::vector<Position> possiblePositions;
    return possiblePositions;
}