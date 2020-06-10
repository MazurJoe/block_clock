#include <iostream>
#include <cmath>

int main() {
	const int boardWidth = 25;
	const int boardHeight = 25;
	char board[boardWidth][boardHeight];

	for (int i = 0; i < boardWidth; i++) {
		for (int j = 0; j < boardHeight; j++) {
			if ((i % 3) == 0)
				board[i][j] = '1';
			else
				board[i][j] = '0'; 
			if ((j % 3) == 0)
				board[i][j] = '1';
			std::cout << board[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

}