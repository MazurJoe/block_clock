#pragma once

void digitalNumGenerator() {
	char digitalZero[21][7];
	char digitalOne[21][7];
	char digitalTwo[21][7];
	char digitalThree[21][7];
	char digitalFour[21][7];
	char digitalFive[21][7];
	char digitalSix[21][7];
	char digitalSeven[21][7];
	char digitalEight[21][7];
	char digitalNine[21][7];

	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 7; j++) {
			digitalZero[i][j] = '0';
			digitalOne[i][j] = '0';
			digitalTwo[i][j] = '0';
			digitalThree[i][j] = '0';
			digitalFour[i][j] = '0';
			digitalFive[i][j] = '0';
			digitalSix[i][j] = '0';
			digitalSeven[i][j] = '0';
			digitalEight[i][j] = '0';
			digitalNine[i][j] = '0';
		}
	}

	//filling in digitalZero
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || i == 15 || j == 1 || j == 5)
				digitalZero[i][j] = '1';
		}
	}

	//filling in digitalOne
	digitalOne[5][1] = '1';
	digitalOne[5][2] = '1';
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (j == 3)
				digitalOne[i][j] = '1';
			if (i == 15) {
				digitalOne[i][j] = '1';
			}
		}
	}

	//filling in digitalTwo
	digitalTwo[6][1] = '1';
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if((i == 5 || i == 10 ||i == 15) && j<6)
				digitalTwo[i][j] = '1';
			if (j == 5 && (i > 5 && i < 10))
				digitalTwo[i][j] = '1';
			if(j == 1 && (i>10 && i<15))
				digitalTwo[i][j] = '1';
		}
	}

	//filling in digitalThree
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (j == 5)
				digitalThree[i][j] = '1';
			if((i == 5 || i == 10 || i == 15) && j<5)
				digitalThree[i][j] = '1';
		}
	}

	//filling in digitalFour
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (j == 1 && (i > 4 && i < 10))
				digitalFour[i][j] = '1';
			if (j == 5)
				digitalFour[i][j] = '1';
			if (i == 10 && j < 6)
				digitalFour[i][j] = '1';
		}
	}

	//filling in digitalFive
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || i == 10 || i == 15)
				digitalFive[i][j] = '1';
			if (j == 1 && (i > 5 && i < 10))
				digitalFive[i][j] = '1';
			if (j == 5 && (i > 10 && i < 15))
				digitalFive[i][j] = '1';
		}
	}

	//filling in digitalSix
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || i == 10 || i == 15)
				digitalSix[i][j] = '1';
			if (j == 1 && (i > 5 && i < 15))
				digitalSix[i][j] = '1';
			if (j == 5 && (i > 10 && i < 15))
				digitalSix[i][j] = '1';
		}
	}

	//filling in digitalSeven
	digitalSeven[6][1] = '1';
	digitalSeven[7][1] = '1';
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || j == 5)
				digitalSeven[i][j] = '1';
		}
	}

	//filling in digitalEight
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || i == 10 || i == 15 || j == 1 || j == 5)
				digitalEight[i][j] = '1';
		}
	}

	//filling in digitalNine
	for (int i = 5; i < 16; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || i == 9 || j == 5)
				digitalNine[i][j] = '1';
			if (j == 1 && (i > 5 && i < 10))
				digitalNine[i][j] = '1';
		}
	}
}

	

