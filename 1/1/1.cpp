
#include <iostream>

#define MODE 1

#ifndef MODE
#error " MODE not defined "
#endif

int add(int n1, int n2)
{
	return n1 + n2;
}

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
	std::cout << "Результат сложения: " << add(val1, val2) << std::endl;
#else
	std::cout << " Неизвестный режим. Завершение работы " << std::endl;
#endif  



}