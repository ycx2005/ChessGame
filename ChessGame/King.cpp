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
    //INITIAL IMPLEMENTATION: THIS FUNCTION CAN FIND ALL THE POSITIONS THAT A KING CAN GO TO AND ADDS THEM ALL INTO THE VECTOR.
    //CASTLING IS NOT IMPLEMENTED YET.
    static const int kingMoves[8][2]{
        {0,-1},{0,1},
        {-1,-1},{-1,1},
        {1,-1},{1,1},
        {1,0},{-1,0}
    };
    std::vector<Position> possiblePositions;
    for (int i = 0; i < 8; i++) {
        int finalX = currentX + kingMoves[i][0];
        int finalY = currentY + kingMoves[i][1];
        Position finalPos(finalX, finalY);
        if ((finalY >= 0 && finalY < 8 && finalX >= 0 && finalX < 8) && (board->getPiece(finalX, finalY) == nullptr 
                || board->getPiece(finalX, finalY)->getColor() != this->getColor())) {
            possiblePositions.push_back(finalPos);
        }
    }
    return possiblePositions;
}