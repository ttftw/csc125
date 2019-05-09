//Tyler Tracy \\tyler0

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
	const int MIN = 20, MAX = 30;
	int height, width;

	bool valid(unsigned int w, unsigned int h) {
		return (w >= MIN && w <= MAX) && (h >= MIN && h <= MAX);
	}

	void initialize(unsigned int w = 0, unsigned int h = 0) {
		if (valid(w, h)) {
			width = w;
			height = h;
		}
		else {
			cout << "Both 'width' and 'height' have a valid range of [" << MIN << "-" << MAX << "]\n";
			initialize(MIN, MIN);
		}
	}
public:
	string title;
	void draw();

	Rectangle(unsigned int w = 0, unsigned int h = 0) {
		initialize(w, h);
	}

	~Rectangle() {
		cout << title << "(" << width << "," << height << ")" << endl;
	}
};

int main() {
	Rectangle shape;
	Rectangle shape2(21, 21);

	shape.title = "Default draw";
	shape.draw();

	shape2.title = "Overloaded draw";
	shape2.draw();
}

void Rectangle::draw() {
	for (int i = 1; i <= height; i++) {
		for (int i = 1; i <= width; i++) cout << '*';
		cout << endl;
	}
};