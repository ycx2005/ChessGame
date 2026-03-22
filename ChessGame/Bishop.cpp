#include "Bishop.h"

std::string Bishop::toString() {
    if (m_color == WHITE) {
        return "wB";
    }
    else if (m_color == BLACK) {
        return "bB";
    }
    else {
        return "";
    }
}