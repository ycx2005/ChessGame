//
// Created by yichen on 10/9/26.
//

#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <iostream>

typedef enum {
    WHITE,
    BLACK,
    NO_COLOR
} Color;

class ChessPiece {
public:
    ChessPiece(Color color) { m_color = color; }
    virtual ~ChessPiece() = default;
protected:  // Protected instead of private so its child nodes can access to the information inside
    Color m_color;
};


#endif //CHESSPIECE_H
