#include <iostream>

// Class template definition
template <typename T>
class Box {
	private:
		T data;

	public:
		Box(T value) : data(value) {}
		T getData() const {
			return data;
		}
};

int main() {
	Box<int> intBox(42);
	Box<double> doubleBox(3.14);

	std::cout << "Integer in the box: " << intBox.getData() << std::endl;
	std::cout << "Double in the box: " << doubleBox.getData() << std::endl;

	return 0;
}
