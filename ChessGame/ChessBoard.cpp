#include "ChessBoard.h"
#include <iomanip>
//chess pieces
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"
#include "Pawn.h"

ChessBoard::ChessBoard() {
	for (int i = 0; i < MAX_ROW; i++)
		for (int j = 0; j < MAX_COL; j++)
			m_board[i][j] = nullptr;
}

void ChessBoard::initializeBoard() {
	//INITIAL IMPLEMENTATION: THIS FUNCTION SHOULD PLACE THE PIECES INTO THEIR INITIAL POSITIONS.
	clearBoard();
	for (int i = 0; i < MAX_ROW; i++)
		for (int j = 0; j < MAX_COL; j++)
			m_board[i][j] = nullptr;
	for (int i = 0; i < MAX_ROW; i++) {
		m_board[1][i] = new Pawn(BLACK);
		m_board[6][i] = new Pawn(WHITE);
	}

	m_board[0][0] = new Rook(BLACK);
	m_board[0][7] = new Rook(BLACK);

	m_board[0][1] = new Knight(BLACK);
	m_board[0][6] = new Knight(BLACK);

	m_board[0][2] = new Bishop(BLACK);
	m_board[0][5] = new Bishop(BLACK);

	m_board[0][3] = new Queen(BLACK);
	m_board[0][4] = new King(BLACK);

	m_board[7][0] = new Rook(WHITE);
	m_board[7][7] = new Rook(WHITE);

	m_board[7][1] = new Knight(WHITE);
	m_board[7][6] = new Knight(WHITE);

	m_board[7][2] = new Bishop(WHITE);
	m_board[7][5] = new Bishop(WHITE);

	m_board[7][3] = new Queen(WHITE);
	m_board[7][4] = new King(WHITE);
}

void ChessBoard::clearBoard() {
	//INITIAL IMPLEMENTATION: THIS FUNCTION SHOULD CLEAR ALL THE PIECES IN THE BOARD.
	for (int i = 0; i < MAX_ROW; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			delete m_board[i][j];
			m_board[i][j] = nullptr;
		}
	}
}

void ChessBoard::showBoard() const {
	//INITIAL IMPLEMENTATION: THIS FUNCTION SHOULD SHOW THE STATE OF THE BOARD IN THE CONSOLE.
	std::cout << "BOARD STATE" << std::endl;
	for (int i = 0; i < MAX_ROW; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if (m_board[i][j] != nullptr) {
				// std::setw(3) forces this column to be exactly 3 characters wide
				std::cout << std::setw(3) << m_board[i][j]->toString();
			}
			else {
				std::cout << std::setw(3) << "X";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void ChessBoard::movePiece(Position initialPos, Position finalPos) {
	//INITIAL IMPLEMENTATION: THIS FUNCTION SHOULD MOVE A PIECE TO THE DESIRED POSITION, ONLY IF POSSIBLE (EMPTY SPACE).
	//missing boundary checks (I don't think I need to implement it here if it's already being checked by the getpossiblepositions functions)
	int startX = initialPos.getX();
	int startY = initialPos.getY();

	if (m_board[startX][startY] == nullptr) {
		std::cout<<"Movement not possible."<<std::endl;
		return;
	}
	int endX = finalPos.getX();
	int endY = finalPos.getY();

	bool possible = false;
	
	std::vector<Position> possiblePos = getPiece(startX, startY)->getPossiblePositions(this, startX, startY);
	for (std::vector<Position>::iterator it = possiblePos.begin(); it != possiblePos.end(); ++it) {
		if (*it == finalPos) {
			possible = true;
		}
	}

	if (possible) {
		if (m_board[endX][endY] != nullptr) {
			std::cout << m_board[startX][startY]->toString() << " takes " << m_board[endX][endY]->toString() << "." << std::endl;
			delete m_board[endX][endY];

		}
		m_board[endX][endY] = m_board[startX][startY];
		m_board[startX][startY] = nullptr;
	}
	else {
		std::cout<<"Movement not possible."<<std::endl;
	}
}

void ChessBoard::putPiece(ChessPiece* piece, Position position) {
	//INITIAL IMPLEMENTATION: FUNCTION DESIGNED TO PUT A NEW PIECE OF CHOICE IN THE BOARD. IT MAY HANDLE PROMOTIONS LATER.
	int posX = position.getX();
	int posY = position.getY();
	if (m_board[posX][posY] == nullptr) {
		m_board[posX][posY] = piece;
	}
	std::cout<<piece->toString()<< " created in " << position << ". "<<std::endl;
}