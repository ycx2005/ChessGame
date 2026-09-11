//
// Created by yichen on 10/9/26.
//

#ifndef CHESSGAME_PAWN_H
#define CHESSGAME_PAWN_H

#include "../ChessPiece.h"

class Pawn : public ChessPiece {
public:
    Pawn(Color color) : ChessPiece(color) {}
    ~Pawn() = default;
    std::vector<Position> getPossiblePositions(ChessBoard* board, int posX, int posY) const override;
    std::string toString() const override;   // Print P
private:
    int m_value = 1;
};


#endif //CHESSGAME_PAWN_H
