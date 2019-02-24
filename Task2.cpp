//#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	cout << "Введите символьную строку \n" << endl;
	
	//Массиив для символьной строки
	char Word[100];
	// Вводим слово с консоли
	cin >> Word;

	// Выводим слово
	cout << "Это слово " << Word << endl;

	for (int i = 0; Word[i] != 0; i++)

	cin.get();
	cin.get();
	
	return 0;
}