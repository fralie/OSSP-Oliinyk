// OSSP_lab2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>

#include "windows.h"
#include "stdio.h"
#include "tchar.h"
#include "psapi.h"
#include <sstream>
#include <string>
using namespace std;

int main()
{
	STARTUPINFO si = { sizeof(si) };
	LPTSTR czCommandLine;
	PROCESS_INFORMATION pi;

	si.cb = sizeof(si);
	ifstream file("C:\\klm\\process.txt");
	if (file.is_open()) {
		string line;

		while (getline(file, line)) {
			cout << line << endl;

		}
		cin >> line;
		HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, atol(line.c_str()));
		TerminateProcess(hProcess, 0);
		CloseHandle(hProcess);
	}

	system("pause");
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
