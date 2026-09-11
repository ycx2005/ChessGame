//
// Created by yichen on 11/9/26.
//

#include "Queen.h"

std::vector<Position> Queen::getPossiblePositions(ChessBoard *board, int posX, int posY) const {
    // TODO: implement movement logic
    std::vector<Position> positions;
    return positions;
}

std::string Queen::toString() const {
    if (m_color == WHITE) {
        return "WQ";
    }
    else {
        return "BQ";
    }
}