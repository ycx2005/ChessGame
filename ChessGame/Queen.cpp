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
    //INITIAL IMPLEMENTATION: THIS FUNCTION CAN FIND ALL THE POSITIONS THAT A QUEEN CAN GO TO AND ADDS THEM ALL INTO THE VECTOR.
    static const int directions[8][2]{
        {0,-1},{0,1},
        {-1,0},{1,0},
        {-1,-1},{-1,1},
        {1,-1},{1,1}
    };
    std::vector<Position> possiblePositions;
    for (const auto& direction : directions) {
        int directionX = direction[0];
        int directionY = direction[1];
        bool obstacle = false;
        int posX = currentX;
        int posY = currentY;
        while (!obstacle) {
            posX += direction[0];
            posY += direction[1];
            //boundary check
            if (posX < 0 || posX >= 8 || posY < 0 || posY >= 8) {
                obstacle = true;
                break;
            }
            if (board->getPiece(posX, posY) == nullptr) {
                possiblePositions.push_back(Position(posX, posY));
            }
            else {
                if (board->getPiece(posX, posY)->getColor() != m_color) {
                    possiblePositions.push_back(Position(posX, posY));
                }
                obstacle = true;
            }
        }
    }
    return possiblePositions;
}