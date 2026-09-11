//
// Created by yichen on 11/9/26.
//

#ifndef CHESSGAME_KING_H
#define CHESSGAME_KING_H

#include "../ChessPiece.h"

class King : public ChessPiece {
public:
    King(Color color) : ChessPiece(color) {}
    ~King() = default;
    std::vector<Position> getPossiblePositions(ChessBoard* board, int posX, int posY) const override;
    std::string toString() const override;   // Print K
private:
    int m_value = 100;  // Taking the king should win the game
};



#endif //CHESSGAME_KING_H
