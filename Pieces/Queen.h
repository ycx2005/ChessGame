//
// Created by yichen on 11/9/26.
//

#ifndef CHESSGAME_QUEEN_H
#define CHESSGAME_QUEEN_H

#include "../ChessPiece.h"

class Queen : public ChessPiece {
public:
    Queen(Color color) : ChessPiece(color) {}
    ~Queen() = default;
    std::vector<Position> getPossiblePositions(ChessBoard* board, int posX, int posY) const override;
    std::string toString() const override;  // Print Q
private:
    int m_value = 8;
};


#endif //CHESSGAME_QUEEN_H
