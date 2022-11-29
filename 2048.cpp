#include "2048.h"


void Move::moveLeft() {
	for (int i = 0; i < 4; ++i) {
		for (int k = 0, j = 1; j < 4; ++j) {
			if (gameTable[i][j] > 0) {
				if (gameTable[i][k] == gameTable[i][j]) {

				}
				else if (gameTable[i][k] == 0) {

				}
				else {

				}
			}
		}
	}
}

void Move::moveRight() {
	for (int i = 0; i < 4; ++i) {
		for (int k = 3, j = 2; j >= 0; --j) {
			if (gameTable[i][j] > 0) {
				if (gameTable[i][k] == gameTable[i][j]) {

				}
				else if (gameTable[i][k] == 0) {

				}
				else {

				}
			}
		}
	}
}

void Move::moveUp() {
	for (int i = 0; i < 4; ++i) {
		for (int k = 0, j = 1; j < 4; ++j) {
			if (gameTable[i][j] > 0) {
				if (gameTable[i][k] == gameTable[i][j]) {

				}
				else if (gameTable[i][k] == 0) {

				}
				else {

				}

			}
		}
	}
}

void Move::moveDown() {
	for (int i = 0; i < 4; ++i) {
		for (int k = 3, j = 2; j >= 0; --j) {
			if (gameTable[i][j] > 0) {
				if (gameTable[i][k] == gameTable[i][j]) {

				}
				else if (gameTable[i][k] == 0) {

				}
				else {

				}
			}
		}
	}
}

void game2048::getInput() {
	switch (_getch()) {
	case 'w':
	case 'W':
		move.moveUp();
		break;

	case 's':
	case 'S':
		move.moveDown();
		break;

	case 'a':
	case 'A':
		move.moveLeft();
		break;

	case 'd':
	case 'D':
		move.moveRight();
		break;

	default:
		break;
	}
}
