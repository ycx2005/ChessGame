//
// Created by yichen on 10/9/26.
//

#ifndef CHESSGAME_KNIGHT_H
#define CHESSGAME_KNIGHT_H

#include "../ChessPiece.h"

class Knight : public ChessPiece {
public:
    Knight(Color color) : ChessPiece(color) {}
    ~Knight() = default;
    std::vector<Position> getPossiblePositions(ChessBoard* board, int posX, int posY) const override;
    std::string toString() const override;   // Print N
private:
    int m_value = 3;
};


#endif //CHESSGAME_KNIGHT_H
