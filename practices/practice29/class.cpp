//Tyler Tracy \\tyler0

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
	int height, width;

	bool valid(unsigned int width, unsigned int height) {
		return (width >= 10 && width <= 30) && (height >= 10 && height <= 30);
	}

public:
	string title;
	void intialize() {
		this->height = this->width = 5;
	}
	
	void intialize(unsigned int width, unsigned int height) {
		if (valid(width, height)) {
			this->width = width;
			this->height = height;
		}
		else this->intialize();
	}

	void draw();
};

int main() {
	Rectangle shape;

	shape.intialize();
	shape.title = "Default draw";
	shape.draw();

	shape.intialize(11,11);
	shape.title = "Overloaded draw";
	shape.draw();
}

void Rectangle::draw() {
	cout << this->title << "(" << this->width << "," << this->height << ")" << endl;
	for (int i = 1; i <= height; i++) {
		for (int i = 1; i <= width; i++) cout << '*';
		cout << endl;
	}
};