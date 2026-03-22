#include "Queen.h"
#include "ChessBoard.h"

std::string Queen::toString() {
    if (m_color == WHITE) {
        return "wQ";
    }
    else if (m_color == BLACK) {
        return "bQ";
    }
    else {
        return "";
    }
}

std::vector<Position> Queen::getPossiblePositions(ChessBoard* board, int currentX, int currentY) {
    //TODO: IMPLEMENT QUEEN MOVEMENT. CAN MOVE IN ANY DIRECTION (EXCEPT KNIGHT MOVEMENT) AND ANY AMOUNT OF SQUARES AS
    //LONG AS THERE ARE NOT PIECES BLOCKING.
    std::vector<Position> possiblePositions;
    return possiblePositions;
}