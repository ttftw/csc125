//Tyler Tracy \\tyler0

#include <iostream>
using namespace std;

class Rectangle {
private:
	int height, width;

public:
	void intialize() {
		height = width = 5;
	}
	
	void draw();
};

int main() {
	Rectangle shape;

	shape.intialize();
	shape.draw();
}

void Rectangle::draw() {
	for (int i = 1; i <= height; i++) {
		for (int i = 1; i <= width; i++) cout << '*';
		cout << endl;
	}
};