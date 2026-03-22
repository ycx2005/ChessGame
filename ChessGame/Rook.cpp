#include "Rook.h"

std::string Rook::toString() {
    if (m_color == WHITE) {
        return "wR";
    }
    else if (m_color == BLACK) {
        return "bR";
    }
    else {
        return "";
    }
}