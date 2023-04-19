
#include <iostream>

#define MODE 1

#ifndef MODE
#error " MODE not defined "
#endif

int main()
{
	setlocale(LC_ALL, "Russian");
#if (MODE == 0)
	std::cout << "Работаю в режиме треннировки" << std::endl;
#elif(MODE == 1)
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	int val1 = 0;
	std::cin >> val1;
	std::cout << "Введите число 2: ";
	int val2 = 0;
	std::cin >> val2;
	std::cout << "Результат сложения: " << val1 + val2 << std::endl;
#else
#error " Неизвестный режим. Завершение работы "
#endif  



}