#include <iostream>
#include <Windows.h>
using namespace std;
//#pragma execution_character_set( "utf-8" )


int main()
{
	//setlocale(LC_ALL,"Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c[20];
	gets_s(c);
	cout << "Тест";
}

