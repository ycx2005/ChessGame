#include "Chess.h"

void Chess::playGame() {
	//TODO: MISSING MOVEMENT IMPLEMENTATION, AS WELL AS TURN CHANGE AND PUNCTUATIONS.
	m_game.initializeBoard();
	m_currentTurn = WHITEP;
	std::string position;
	while (!m_isGameOver) {
		std::cout << "Select the piece (position) you wish to move." << std::endl;
		std::cin >> position; //check the piece in this position.
		//add format checks for position.
		if (position.length() > 0) {
			//this function forces the character to be upper case
			position[0] = std::toupper(position[0]);
		}

		while (position.length() != 2 || position[0] < 'A' || position[0] > 'H' || position[1] < '1' || position[1] > '8') {
			std::cout << "Invalid position. Please try again."<< std::endl;
			std::cin >> position;
			if (position.length() > 0) {
				position[0] = std::toupper(position[0]);
			}
		}
	}
}