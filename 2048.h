#pragma once

#include <time.h>
#include <conio.h>
#include <vector>

#define FRAMEWIDTH 20
#define FRAMEHIGHT 20

using namespace std;


vector<vector<int>> gameTable(4, vector<int>(4, 0));


// Basic functions to support the game

class Move {
public:
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
};

class game2048 {
	Move move;

	void getInput();

};

