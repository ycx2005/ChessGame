#include "Bishop.h"
#include "ChessBoard.h"

std::string Bishop::toString() {
    if (m_color == WHITE) {
        return "wB";
    }
    else if (m_color == BLACK) {
        return "bB";
    }
    else {
        return "";
    }
}

std::vector<Position> Bishop::getPossiblePositions(ChessBoard* board, int currentX, int currentY) {
    //TODO: IMPLEMENT BISHOP MOVEMENT. CAN MOVE DIAGONALLY ANY AMOUNT OF SQARES AS LONG AS THERE ARE NOT PIECES BLOCKING.
    std::vector<Position> possiblePositions;
    return possiblePositions;
}