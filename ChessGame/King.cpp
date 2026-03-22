#include "King.h"
#include "ChessBoard.h"

std::string King::toString() {
    if (m_color == WHITE) {
        return "wK";
    }
    else if (m_color == BLACK) {
        return "bK";
    }
    else {
        return "";
    }
}

std::vector<Position> King::getPossiblePositions(ChessBoard* board, int currentX, int currentY) {
    //TODO: IMPLEMENT KING MOVEMENT. CAN MOVE 1 SQUARE IN ANY DIRECTION, IN THIS VERSION IT WILL NOT CHECK IF THE KING
    //IS TAKING A PIECE THAT IS BEING PROTECTED. IN OTHER WORDS, THE KING CAN BE TAKEN.
    std::vector<Position> possiblePositions;
    return possiblePositions;
}