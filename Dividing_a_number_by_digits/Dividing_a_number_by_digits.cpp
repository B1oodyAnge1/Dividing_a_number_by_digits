#include <iostream>
#include <string>
#include "regex"

//Составить программу, которая будет считывать введённое пятизначное число.
//После чего, каждую цифру этого числа необходимо вывести в новой строке.
//
//В этой задаче нужно воспользоваться операцией — остаток от деления %.

int main()
{
	setlocale(LC_ALL, "ru");
	std::string number = "0";
	std::regex reg("^[0-9]");
	int a= 10000;
	while (true)
	{
		std::cout << "Введите пятизначное число:" << std::endl;
		std::cin >> number;
		if (std::regex_search(number,reg) && stoi(number) < 100000 && stoi(number) > 9999) { //stof строка в число. C++ 11
			break;
		}	
	}
	
	for (int i = 0; i < 5; i++) {
		std::cout << "Число номер " << i + 1 << ": " << (stoi(number) / a) % 10 << std::endl;
		a /= 10;
	}
    return 0;
}

