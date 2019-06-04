#include "Header.h"
#include <iostream>
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <clocale>
#include "windows.h"
#include <windows.h>
int answer;
int y, z, x2, y2,x3,y3,z3,checks=1,f=0;
int x;
char a1;
void Locate::setloc()
{
	cout << "Введите место события:";
	getline(cin, locates);
}
void Locate::def2()
{
	locates = "Отсутствует";
}
void Calendar::def()
{
	day = 99;
	mounth = 99;
	year = 99;
	event = "Отсутствует";
}
void Clocks::def1()
{
	minutes = 99;
	hours = 99;
}
void Locate::getloc()
{
	cout << "Ваше место события:" << locates << endl;
}
void Clocks::settime()
{
	minutes = y2;
	hours = x2;
}
void Clocks::gettime()
{
	cout << "Время:" << hours << ":" << minutes << endl;
}
void Clocks::del()
{
	minutes = 00;
	hours = 00;
}
void Calendar::set()
{
	day = x;
	mounth = y;
	year = z;
	cout << "Введите событие:";
	getline(cin, event);
	cout << endl;
}
void Calendar::print()
{
	cout << "Ваше событие :" << event << endl;
}
void Calendar::deletet()
{
	event = "Отсутствует";
}
void set1()
{
	if (y == 1)
	{
		x = x;
	}
	if (y == 2)
	{
		x = x + 31;
	}
	if (y == 3)
	{
		x = x + 31 + 28;
	}
	if (y == 4)
	{
		x = x + 31 + 28 + 31;
	}
	if (y == 5)
	{
		x = x + 31 + 28 + 31 + 30;
	}
	if (y == 6)
	{
		x = x + 31 + 28 + 31 + 30 + 31;
	}
	if (y == 7)
	{
		x = x + 31 + 28 + 31 + 30 + 31 + 30;
	}
	if (y == 8)
	{
		x = x + 31 + 28 + 31 + 30 + 31 + 30 + 31;
	}
	if (y == 9)
	{
		x = x + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
	}
	if (y == 10)
	{
		x = x + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	}
	if (y == 11)
	{
		x = x + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
	}
	if (y == 12)
	{
		x = x + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
	}
}
void check()
{
	while (checks == 1)
	{
		if (y > 12)
		{
			while (y > 12)
			{
				cout << "Ошибка ,попробуйте еще раз ввести месяц" << endl;
				cin >> y;
			}
			checks = 0;
		}
		if (y == 1)
		{
			while (x > 31)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 31" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 3)
		{
			while (x > 31)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 31" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 5)
		{
			while (x > 31)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 31" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 7)
		{
			while (x > 31)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 31" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 8)
		{
			while (x > 31)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 31" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 10)
		{
			while (x > 31)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 31" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 12)
		{
			while (x > 31)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 31" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 4)
		{
			while (x > 30)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 30" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 6)
		{
			while (x > 30)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 30" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 9)
		{
			while (x > 30)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 30" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 11)
		{
			while (x > 30)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 30" << endl;
				cin >> x;
			}
			checks = 0;
		}
		if (y == 2 )
		{
			while (x > 29)
			{
				cout << "Ошибка ,попробуйте еще раз ввести день в диапазоне от 1 до 29" << endl;
				cin >> x;
			}
			checks = 0;
		}
	}
}
void clocks2()
{
	while (x2 > 23)
	{
			cout << "Ошибка ,попробуйте еще раз часы" << endl;
			cin >> x2;
	}
	while (y2 > 59)
	{
		cout << "Ошибка ,попробуйте еще раз минуты" << endl;
		cin >> y2;
	}
}
void menu()
{
	cout << " _____________________________________" << endl;
	cout << "|Создать событие?-1                   |" << endl;
	cout << "|Показать событие за конкретную дату-2|" << endl;
	cout << "|Удалить событие-3                    |" << endl;
	cout << "|Показать даты за текущую сессию-4    |" << endl;
	cout << "|Выход-0                              |" << endl;
	cout << "|_____________________________________|" << endl;
	cout << endl;
}
void DataBase::set2()
{
	day1 = x3;
	mounth1 = y3;
	year1 = z3;
}
void DataBase::print2()
{
		cout << day1 << "," << mounth1 << "," << year1 << endl;
}
void old()
{
	setlocale(LC_ALL, "rus");
	Calendar date[100][100];
	Clocks clock1[100][100];
	DataBase Base[100];
	Locate locate1[100][100];
	menu();
	cin >> answer;
	while (answer != 0)
	{
		switch (answer)
		{
		case 1:
			cout << "Введите дату события в формате дд мм гггг" << endl;
			cin >> x >> y >> z;
			check();
			checks = 1;
			cin.ignore(); 
			set1();
			date[x][z].set();
			locate1[x][z].setloc();
			Base[f].set2();
			f++;
			cout << "Введите время в формате чч мм:";
			cin >> x2 >>a1>> y2;
			clocks2();
			clock1[x][z].settime();
			menu();
			cin >> answer;
			break;
		case 2:
			cout << "Какую дату вы хотите увидеть?" << endl;
			cin >> x >> y >> z;
			check();
			checks = 1;
			set1();
			date[x][z].print();
			clock1[x][z].gettime();
			locate1[x][z].getloc();
			menu();
			cin >> answer;
			break;
		case 3:
			cout << "Какое событие вы хотите удалить? Введите дату:" << endl;
			cin >> x >> y >> z;
			set1();
			date[x][z].deletet();
			clock1[x][z].del();
			menu();
			cin >> answer;
			break;
		case 4:
			for (int i = 0; i < f; i++)
			{
				Base[i].print2();
			}
			menu();
			cin >> answer;
			break;
		}
	}
	cout << "До свидания" << endl;
	system("pause");
}