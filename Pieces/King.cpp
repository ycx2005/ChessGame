//
// Created by yichen on 11/9/26.
//

#include "King.h"

std::vector<Position> King::getPossiblePositions(ChessBoard *board, int posX, int posY) const {
    // TODO: implement movement logic
    std::vector<Position> positions;
    return positions;
}

std::string King::toString() const {
    if (m_color == WHITE) {
        return "WK";
    }
    else {
        return"BK";
    }
}
