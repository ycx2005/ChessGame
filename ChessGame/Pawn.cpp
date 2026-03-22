#include "Pawn.h"

std::string Pawn::toString() {
    if (m_color == WHITE) {
        return "wP";
    }
    else if (m_color == BLACK) {
        return "bP";
    }
    else {
        return "";
    }
}
