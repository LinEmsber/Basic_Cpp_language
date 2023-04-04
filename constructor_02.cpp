#include <iostream>
using namespace std;

class MyClass {
	private:
		int x;
		int y;

	public:
		MyClass() { // default constructor
			x = 0;
			y = 0;
		}

		MyClass(int a, int b) { // parameterized constructor
			x = a;
			y = b;
		}

		void print() {
			cout << "x = " << x << ", y = " << y << endl;
		}
};

int main() {
	MyClass obj1; // calls default constructor
	obj1.print(); // output: x = 0, y = 0

	MyClass obj2(5, 10); // calls parameterized constructor
	obj2.print(); // output: x = 5, y = 10

	return 0;
}
