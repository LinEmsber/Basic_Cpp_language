#include <iostream>
#include <functional>

class Calculator {
	public:
		void setOperation(std::function<int(int, int)> operation) {
			m_operation = operation;
		}

		int calculate(int a, int b) {
			return m_operation(a, b);
		}

	private:
		std::function<int(int, int)> m_operation;
};

int main() {
	Calculator calculator;

	// Set the lambda function as the operation
	calculator.setOperation([](int a, int b) { return a + b; });

	int result_0 = calculator.calculate(5, 3);
	std::cout << "Result_0: " << result_0 << std::endl;

	// Set the lambda function as the operation
	calculator.setOperation([](int a, int b) { return a * b; });

	int result_1 = calculator.calculate(5, 3);
	std::cout << "Result_1: " << result_1 << std::endl;

	return 0;
}

