#pragma once
#include "ChessBoard.h"

typedef enum {
	WHITEP, BLACKP
} PlayerColor;

class Chess {
public:
	Chess();
	void playGame();
	void updateScore();
private:
	ChessBoard m_game;
	PlayerColor m_currentTurn;
	bool m_isGameOver;
	int scoreOne; //score for player one.
	int scoreTwo; //score for player two.
};