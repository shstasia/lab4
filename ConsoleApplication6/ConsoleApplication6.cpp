// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include<locale>
#include "windows.h"
using namespace std;


void main(void)
{
	//etlocale(LC_ALL, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Ім'я: Шароградська Анастасія" << endl;
	cout << "Дата народження: 30.10.1997" << endl;
	cout << "Місце навчання:Донецький національний університет" << endl;
	cout << "Улюблений серіал: я зомбі, люцифер" << endl;
	cout << "Улюблений Напій: кава" << endl;
	cout << "Улюблений жанр фільму: комедія, тріллер " << endl;
	cout << "Улюблений колір: Голубий, рожевий " << endl;
	cout << "Улюблене місто: Львів " << endl;
	cout << "пам'ятки Львова " << endl;
	cout << "улюблені місця: " << endl;
	cout << "копальня" << endl;
	cout << "дворець Потоцьких" << endl;

	system("pause");

}

