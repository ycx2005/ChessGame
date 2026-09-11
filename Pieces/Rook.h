//
// Created by yichen on 10/9/26.
//

#ifndef CHESSGAME_ROOK_H
#define CHESSGAME_ROOK_H

#include "../ChessPiece.h"

class Rook : public ChessPiece {
public:
    Rook(Color color) : ChessPiece(color) {}
    ~Rook() = default;
    std::vector<Position> getPossiblePositions(ChessBoard* board, int posX, int posY) const override;
    std::string toString() const override;   // Print R
private:
    int m_value = 1;
};


#endif //CHESSGAME_ROOK_H
