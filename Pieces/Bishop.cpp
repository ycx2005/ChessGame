//
// Created by yichen on 10/9/26.
//

#include "Bishop.h"

std::vector<Position> Bishop::getPossiblePositions(ChessBoard* board, int posX, int posY) const {
    // TODO: implement movement logic
    std::vector<Position> positions;
    return positions;
}

std::string Bishop::toString() const {
    if (m_color == WHITE) {
        return "WB";
    }
    else {
        return "BB";
    }
}