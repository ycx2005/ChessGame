//
// Created by yichen on 10/9/26.
//

#include "Pawn.h"

std::vector<Position> Pawn::getPossiblePositions(ChessBoard* board, int posX, int posY) const {
    // TODO: implement movement logic
    std::vector<Position> positions;
    return positions;
}

std::string Pawn::toString() const {
    if (m_color == WHITE) {
        return "WP";
    }
    else {
        return "BP";
    }
}
