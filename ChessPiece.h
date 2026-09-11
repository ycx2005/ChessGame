//
// Created by yichen on 10/9/26.
//

#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <iostream>
#include <vector>
#include "Position.h"

class ChessBoard;   // We

typedef enum {
    WHITE,
    BLACK,
    EMPTY
} Color;

class ChessPiece {
public:
    ChessPiece(Color color) { m_color = color; }

    virtual ~ChessPiece() = default;
    Color getColor() const { return m_color; }
    virtual std::vector<Position> getPossiblePositions(ChessBoard* board, int posX, int posY) const = 0;
    virtual std::string toString() const = 0;
protected:  // Protected instead of private so its child nodes can access to the information inside
    Color m_color;
};


#endif //CHESSPIECE_H
