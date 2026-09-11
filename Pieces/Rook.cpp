//
// Created by yichen on 10/9/26.
//

#include "Rook.h"

std::vector<Position> Rook::getPossiblePositions(ChessBoard* board, int posX, int posY) const {
    // TODO: implement movement logic
    std::vector<Position> positions;
    return positions;
}

std::string Rook::toString() const {
    if (m_color == WHITE) {
        return "WR";
    }
    else {
        return "BR";
    }
}
