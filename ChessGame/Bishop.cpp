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
    //INITIAL IMPLEMENTATION: THIS FUNCTION CAN FIND ALL THE POSITIONS THAT A BISHOP CAN GO TO AND ADDS THEM ALL INTO THE VECTOR.
    static const int directions[4][2]{
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
                //it adds a position because it can take a piece here
                if (board->getPiece(posX, posY)->getColor() != m_color) {
                    possiblePositions.push_back(Position(posX, posY));
                }
                obstacle = true;
            }
        }
    }
    return possiblePositions;
}