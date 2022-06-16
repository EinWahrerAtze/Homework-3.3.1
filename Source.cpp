#include <iostream>
#include "Calculator.h"

int main()
{
	Calculator calc = Calculator();
	double num1 = 0.0;
	double num2 = 0.0;

	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	
	while (true)
	{
		std::cout << "Enter first number: ";

		while (!(std::cin >> num1) || !(calc.set_num1(num1)))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Please enter a numeric value not equal to \"0\": ";
		}

		std::cout << "Enter second number: ";

		while (!(std::cin >> num2) || !(calc.set_num2(num2)))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Please enter a numeric value not equal to \"0\": ";
		}

		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
		std::cout << std::endl;
	}
	
	return 0;
}

