#include "Queen.h"

std::string Queen::toString() {
    if (m_color == WHITE) {
        return "wQ";
    }
    else if (m_color == BLACK) {
        return "bQ";
    }
    else {
        return "";
    }
}