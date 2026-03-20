#include "ChessBoard.h"

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
		}
	}
}

void ChessBoard::showBoard() {
	//INITIAL IMPLEMENTATION: THIS FUNCTION SHOULD SHOW THE STATE OF THE BOARD IN THE CONSOLE.
	std::cout << "BOARD STATE" << std::endl;
	for (int i = 0; i < MAX_ROW; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			if (m_board[i][j] != nullptr) {
				std::cout << m_board[i][j]->toString() << " ";
			}
			else {
				std::cout << "X" << " ";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void ChessBoard::movePiece(Position initialPos, Position finalPos) {
	//INITIAL IMPLEMENTATION: THIS FUNCTION SHOULD MOVE A PIECE TO THE DESIRED POSITION, ONLY IF POSSIBLE (EMPTY SPACE).
	int startX = initialPos.getX();
	int startY = initialPos.getY();

	int endX = finalPos.getX();
	int endY = finalPos.getY();

	if(m_board[endX][endY] == nullptr) {
		m_board[endX][endY] = m_board[startX][startY];
		m_board[startX][startY] = nullptr;
	}
}