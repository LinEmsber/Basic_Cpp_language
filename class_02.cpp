#include <iostream>

class Rectangle {
	private:
		int width, height;
	public:
		void set_values (int, int);
		int area() {return width * height;}
};

void Rectangle::set_values (int w, int h) {
	width = w;
	height = h;
}

int main () {
	Rectangle rect;
	rect.set_values (3, 4);
	std::cout << "area: " << rect.area() << std::endl;
	return 0;
}

