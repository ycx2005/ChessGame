//
// Created by yichen on 10/9/26.
//

#ifndef CHESSGAME_BISHOP_H
#define CHESSGAME_BISHOP_H

#include "../ChessPiece.h"

class Bishop : public ChessPiece {
public:
    Bishop(Color color) : ChessPiece(color) {}
    ~Bishop() = default;
    std::vector<Position> getPossiblePositions(ChessBoard* board, int posX, int posY) const override;
    std::string toString() const override;   // Print R
private:
    int m_value = 3;
};


#endif //CHESSGAME_BISHOP_H
