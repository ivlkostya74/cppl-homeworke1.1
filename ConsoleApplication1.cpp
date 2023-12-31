﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::vector<int> v_arr = { 4, 7, 9, 14, 12 };

	std::cout << "Входные данные: ";
	std::for_each(v_arr.begin(), v_arr.end(), [](const int& n) { std::cout << n << " "; });
	std::cout << std::endl;

	std::cout << "Выходные данные: ";
	auto namber = v_arr.begin();
	std::for_each(v_arr.begin(), v_arr.end(), [](int n) { if (1 == n % 2) { n = n * 3; } ++n; });
	std::for_each(v_arr.begin(), v_arr.end(), [](const int& n) { std::cout << n << " "; });
	std::cout << std::endl;

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
