#include <iostream>
#include <Windows.h>
#include <string>

#include "Class.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string userAnswer;
    int userValue;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> userAnswer;



    if (userAnswer == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> userValue;

        Counter counter(userValue);

        char comand;
        while (true)
        {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> comand;

            if (comand == '+')
            {
                counter.increase();
            }
            else if (comand == '-')
            {
                counter.decrease();
            }
            else if (comand == '=')
            {
                std::cout << counter.getValue() << std::endl;
            }
            else if (comand == 'x')
            {
                std::cout << "До свидания!" << std::endl;
                break;
            }
            else
            {
                std::cout << "Неверная команда. Попробуйте снова." << std::endl;
            }
        }
    }
    else if (userAnswer == "нет")
    {
        Counter counter;

        char comand;
        while (true)
        {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> comand;

            if (comand == '+')
            {
                counter.increase();
            }
            else if (comand == '-')
            {
                counter.decrease();
            }
            else if (comand == '=')
            {
                std::cout << counter.getValue() << std::endl;
            }
            else if (comand == 'x')
            {
                std::cout << "До свидания!" << std::endl;
                break;
            }
            else
            {
                std::cout << "Неверная команда. Попробуйте снова." << std::endl;
            }
        }
    }
    else
    {
        std::cout << "Некорректный ввод. Используется значение по умолчанию (1)." << std::endl;

        Counter counter;

        char comand;
        while (true)
        {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> comand;

            if (comand == '+')
            {
                counter.increase();
            }
            else if (comand == '-')
            {
                counter.decrease();
            }
            else if (comand == '=')
            {
                std::cout << counter.getValue() << std::endl;
            }
            else if (comand == 'x')
            {
                std::cout << "До свидания!" << std::endl;
                break;
            }
            else
            {
                std::cout << "Неверная команда. Попробуйте снова." << std::endl;
            }
        }
    }

    return 0;
}