//#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	cout << "������� ���������� ������ \n" << endl;
	
	//������� ��� ���������� ������
	char Word[100];
	// ������ ����� � �������
	cin >> Word;

	// ������� �����
	cout << "��� ����� " << Word << endl;

	for (int i = 0; Word[i] != 0; i++)

	cin.get();
	cin.get();
	
	return 0;
}