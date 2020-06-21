#include <iostream>
#include <cmath>
#include "digitalNumsLayout.h"
	
const int boardWidth = 30;
const int boardHeight = 30;
char tempBoard[boardHeight][boardWidth];


//initializing board and setting it to blank position 
void setup() {
	digitalNumGenerator(); // defining all of the digital number 2d arrays by using function in digitalNumbsLayout.h
	
	char board[boardHeight][boardWidth];

	for (int i = 0; i < boardWidth; i++) {
		for (int j = 0; j < boardHeight; j++) {
			board[i][j] = '0';
			tempBoard[i][j] = '0';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int main() {
	setup();

}

//transition animation for switching between the different board styles
void boardTransition() {
	for (int j = 29; j > -1; j-- ) {
		for (int i = 0; i < 30; i++) {

		}
	}
}

void setDigitalTempBoardHour(int hour) {
	switch (hour) {
	case 1:
		for (int i = 5; i < 16; i++) {
			for (int j = 0; j < 7; j++) {
				tempBoard[i][j] = digitalZero[i][j];
			}
		}
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalOne[i][j - 8];
			}
		}
		break;
	case 2:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalTwo[i][j - 8];
			}
		}
		break;
	case 3:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalThree[i][j - 8];
			}
		}
		break;
	case 4:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalFour[i][j - 8];
			}
		}
		break;
	case 5:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalFive[i][j - 8];
			}
		}
		break;
	case 6:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalSix[i][j - 8];
			}
		}
		break;
	case 7:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalSeven[i][j - 8];
			}
		}
		break;
	case 8:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalEight[i][j - 8];
			}
		}
		break;
	case 9:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalNine[i][j - 8];
			}
		}
		break;
	case 10:
		for (int i = 5; i < 16; i++) {
			for (int j = 0; j < 7; j++) {
				tempBoard[i][j] = digitalOne[i][j];
			}
		}
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalZero[i][j - 8];
			}
		}
		break;
	case 11:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalOne[i][j - 8];
			}
		}
		break;
	case 12:
		for (int i = 5; i < 16; i++) {
			for (int j = 8; j < 15; j++) {
				tempBoard[i][j] = digitalTwo[i][j - 8];
			}
		}
		break;
	}
}

void setDigitalTempBoardMinute(int minute) {
	int onesPlace = minute % 10;
	int tensPlace = minute / 10;

	//change the number in the tens place only when ones place switches from 9 to 0 
	if (onesPlace == 0) {
		switch (tensPlace) {
		case 0:
			for (int i = 5; i < 16; i++) {
				for (int j = 15; j < 22; j++) {
					tempBoard[i][j] = digitalZero[i][j - 15];
				}
			}
			break;
		case 1:
			for (int i = 5; i < 16; i++) {
				for (int j = 15; j < 22; j++) {
					tempBoard[i][j] = digitalOne[i][j - 15];
				}
			}
			break;
		case 2:
			for (int i = 5; i < 16; i++) {
				for (int j = 15; j < 22; j++) {
					tempBoard[i][j] = digitalTwo[i][j - 15];
				}
			}
			break;
		case 3:
			for (int i = 5; i < 16; i++) {
				for (int j = 15; j < 22; j++) {
					tempBoard[i][j] = digitalThree[i][j - 15];
				}
			}
			break;
		case 4:
			for (int i = 5; i < 16; i++) {
				for (int j = 15; j < 22; j++) {
					tempBoard[i][j] = digitalFour[i][j - 15];
				}
			}
			break;
		case 5:
			for (int i = 5; i < 16; i++) {
				for (int j = 15; j < 22; j++) {
					tempBoard[i][j] = digitalFive[i][j - 15];
				}
			}
			break;
		}
	}

	switch (onesPlace) {
	case 0:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalZero[i][j - 23];
			}
		}
		break;
	case 1:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalOne[i][j - 23];
			}
		}
		break;
	case 2:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalTwo[i][j - 23];
			}
		}
		break;
	case 3:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalThree[i][j - 23];
			}
		}
		break;
	case 4:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalFour[i][j - 23];
			}
		}
		break;
	case 5:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalFive[i][j - 23];
			}
		}
		break;
	case 6:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalSix[i][j - 23];
			}
		}
		break;
	case 7:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalSeven[i][j - 23];
			}
		}
		break;
	case 8:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalEight[i][j - 23];
			}
		}
		break;
	case 9:
		for (int i = 5; i < 16; i++) {
			for (int j = 23; j < 30; j++) {
				tempBoard[i][j] = digitalNine[i][j - 23];
			}
		}
		break;
	}
}