#include "Pawn.h"
#include "ChessBoard.h"

std::string Pawn::toString() {
    if (m_color == WHITE) {
        return "wP";
    }
    else if (m_color == BLACK) {
        return "bP";
    }
    else {
        return "";
    }
}

std::vector<Position> Pawn::getPossiblePositions(ChessBoard* board, int currentX, int currentY) {
    //INITIAL IMPLEMENTATION: THIS FUNCTION SHOULD GET ALL THE POSITIONS THE PAWN CAN TAKE, NOT INCLUDING EN PASSANT AND PROMOTION MECHANICS.
    std::vector<Position> possiblePositions;
    int color = m_color;
    if (color == WHITE) {
        if ((currentX - 1 >= 0) && board->getPiece(currentX - 1, currentY) == nullptr) {
            possiblePositions.push_back(Position(currentX - 1, currentY));
            //Double jump logic
            if (currentX == 6 && board->getPiece(currentX - 2, currentY) == nullptr) {
                //Don't need boundary checks because it will always origin from the starting position.
                possiblePositions.push_back(Position(currentX - 2, currentY));
            }
        }
        if ((currentX - 1 >= 0 && currentY - 1 >= 0) &&
                board->getPiece(currentX - 1, currentY - 1) != nullptr &&
                board->getPiece(currentX - 1, currentY - 1)->getColor() != m_color) {
            possiblePositions.push_back(Position(currentX - 1, currentY - 1));
        }
        if ((currentX - 1 >= 0 && currentY + 1 < 8) &&
                board->getPiece(currentX - 1, currentY + 1) != nullptr &&
                board->getPiece(currentX - 1, currentY + 1)->getColor() != m_color) {
            possiblePositions.push_back(Position(currentX - 1, currentY + 1));
        }
    }
    else if (color == BLACK) {
        if ((currentX + 1 < 8) && board->getPiece(currentX + 1, currentY) == nullptr) {
            possiblePositions.push_back(Position(currentX + 1, currentY));
            //Double jump logic
            if (currentX == 1 && board->getPiece(currentX + 2, currentY) == nullptr) {
                possiblePositions.push_back(Position(currentX + 2, currentY));
            }
        }
        if ((currentX + 1 < 8 && currentY - 1 >= 0) &&
                board->getPiece(currentX + 1, currentY - 1) != nullptr &&
                board->getPiece(currentX + 1, currentY - 1)->getColor() != m_color) {
            possiblePositions.push_back(Position(currentX + 1, currentY - 1));
                }
        if ((currentX + 1 < 8 && currentY + 1 < 8) &&
                board->getPiece(currentX + 1, currentY + 1) != nullptr &&
                board->getPiece(currentX + 1, currentY + 1)->getColor() != m_color) {
            possiblePositions.push_back(Position(currentX + 1, currentY + 1));
                }
    }
    return possiblePositions;
}