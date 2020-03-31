#include <iostream>

// I want a software that take care of simple calculations
// +, -, *, /
// Input a, b and the operation required.

int getInteger() {
	int x{};
	std::cout << "Input: ";
	while (true) {
		std::cin >> x;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Invalid input, try again.\n";
		}
		else {
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

double getDouble() {
	double x{};
	std::cout << "Input: ";
	while (true) {
		std::cin >> x;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Invalid input, try again.\n";
		}
		else {
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

int getOperation() {

	while (true) {
		std::cout << "Please pick up an operation:\n";
		std::cout << "1) Addiction\n";
		std::cout << "2) Subtraction\n";
		std::cout << "3) Multiplicity\n";
		std::cout << "4) Division\n";
		int operation{ getInteger() };
		if (operation != 1 && operation != 2 && operation != 3 && operation != 4) {
			std::cout << "Invalid input, try again.\n";
		}
		else {
			return operation;
		}
	}
}

int callBackOperation() {
	while (true) {
		std::cout << "1) Exit\n";
		std::cout << "2) Go back to the main menu\n";
		int operation{ getInteger() };
		if (operation != 1 && operation != 2) {
			std::cout << "Invalid input, try again.\n";
		}
		else {
			return operation;
		}
	}
}

double calculate(double x, double y, int operation) {
	switch (operation) {
	case 1:
		return x + y;
		break;
	case 2:
		return x - y;
		break;
	case 3:
		return x * y;
		break;
	case 4:
		return x / y;
		break;
	default:
		break;
	}
}



int main() {
	
	
	while(true) {

		// Introduction
		std::cout << "This is your private calculator\n";
		std::cout << "You can do x (+, -, *, /) y\n";


		// Input
		int operation{ getOperation() };
		std::cout << "X\t ";
		double x{ getDouble() };
		std::cout << "Y\t ";
		double y{ getDouble() };

		// Output
		double result{ calculate(x, y, operation) };
		std::cout << "Final result: " << result<<'\n';

		// Call back, or exit
		operation = callBackOperation();
		if (operation == 1) {
			std::cout << "Goodbye\n";
			break;
		}
		
	}
	return 0;
}
