#include <iostream>

using namespace std;

class example {
	private:
		int* data_0;

	public:
		example() {
			cout << "Constructor called" << endl;
			data_0 = new int[10];
		}

		~example() {
			cout << "Destructor called" << endl;
			delete[] data_0;
		}
};

int main() {
	example my_ex;
	return 0;
}

