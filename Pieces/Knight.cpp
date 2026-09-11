//
// Created by yichen on 10/9/26.
//

#include "Knight.h"

std::vector<Position> Knight::getPossiblePositions(ChessBoard* board, int posX, int posY) const {
    // TODO: implement movement logic
    std::vector<Position> positions;
    return positions;
}

std::string Knight::toString() const {
    if (m_color == WHITE) {
        return "WN";
    }
    else {
        return "BN";
    }
}