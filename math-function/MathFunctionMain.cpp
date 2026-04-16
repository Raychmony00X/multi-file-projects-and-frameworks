#include <iostream>
#include <Windows.h>

#include "MathFunctions.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num1, num2, operation;
	
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << std::endl;

	std::cout << "Введите второе число: ";
	std::cin >> num2;
	std::cout << std::endl;

	std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;

	switch(operation)
	{
	case 1:
		std::cout << num1 << "+" << num2 << " = " << sum(num1, num2) << std::endl;
	  break;
	case 2:
		std::cout << num1 << "-" << num2 << " = " << sub(num1, num2) << std::endl;
		break;
	case 3:
		std::cout << num1 << "*" << num2 << " = " << mult(num1, num2) << std::endl;
		break;
	case 4:
		std::cout << num1 << ":" << num2 << " = " << divi(num1, num2) << std::endl;
		break;
	case 5:
		std::cout << num1 << " в степени " << num2 << " = " << exp(num1, num2) << std::endl;
		break;
	}



	return 0;
}