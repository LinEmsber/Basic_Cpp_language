#include <iostream>

class MyClass {
	public:
		void setPrivateVariable(int value); // public member function
		void printPrivateVariable(); // public member function

	private:
		int privateVariable; // private data member
};

void MyClass::setPrivateVariable(int value) {
	privateVariable = value;
}

void MyClass::printPrivateVariable() {
	std::cout << "Private variable value: " << privateVariable << std::endl;
}

int main() {
	MyClass myObject;
	myObject.setPrivateVariable(42);
	myObject.printPrivateVariable();
	return 0;
}
