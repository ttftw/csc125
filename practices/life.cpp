// Game of Life. Tyler Tracy 2019
#include <time.h>
#include <Windows.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

const char ALIVE = '*', DEAD = ' ';

bool growing = false;
float speed = .001;
string world;
unsigned int generation;
unsigned int height = 30;
unsigned int width = 120;
unsigned int area = height * width;

void gen() {  // initialize game
	generation = 0;
	world = string(area, ' ');
	unsigned short seeds[500];
	for (unsigned short seed : seeds) world[rand() % area] = '*';
	growing = true;
}

int liveNeighbors(int i) {
	int count = 0, col = i % width;
	if (i > width) {
		if (col > 1 && world[i - width - 1] == ALIVE) count++;      // Up Left
		if (world[i - width] == ALIVE) count++;                     // Up
		if (col < width && world[i - width + 1] == ALIVE) count++;  // Up Right
	}

	if (col > 1 && world[i - 1] == ALIVE) count++;      // Left
	if (col < width && world[i + 1] == ALIVE) count++;  // Right

	if (area - i > width) {
		if (col > 1 && world[i + width - 1] == ALIVE) count++;      // Down Left
		if (world[i + width] == ALIVE) count++;                     // Down
		if (col < width && world[i + width + 1] == ALIVE) count++;  // Down Right
	}
	return count;
}

void life() {
	string nextgen = world;
	for (int i = 0; i <= area - 1; i++) {
		// Any live cell with fewer than two live neighbors dies, as
		// if by underpopulation.

		// Any live cell with two or three live neighbors lives on to
		// the next generation.

		// Any live cell with more than three live neighbors dies, as
		// if by overpopulation.

		// Any dead cell with exactly three live neighbors becomes a
		// live cell, as if by reproduction.
		int n = liveNeighbors(i);

		if (world[i] == ALIVE)
			nextgen[i] = (n == 2 || n == 3) ? ALIVE : DEAD;
		else if (n == 3)
			nextgen[i] = ALIVE;
	}
	world = nextgen;
	generation++;
}

void draw() {  // draw
	system("CLS");
	int on = count(world.begin(), world.end(), ALIVE), off = area - on;

	cout << "Generation " << generation << " (A:D) " << on << ":" << off << " ("
		<< (float)on * 100 / area << "%)" << endl;
	for (int row = 1; row <= height; row++) {
		cout << '|';
		for (int cell = (row - 1) * width; cell < row * width - 1; cell++)
			cout << world[cell];
	}
	cout << flush;
	Sleep(speed * 1e3);
}

int main() {
	srand(time(NULL));
	gen();
	draw();

	Sleep(5 * 1e3);
	while (growing) {
		life();
		draw();
	}
}