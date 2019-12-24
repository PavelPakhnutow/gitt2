// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int n;

	do
	{
		n = 0;
		system("cls"); //отчистка экрана
		cout << "Action selection:" << endl << endl;
		cout << "1 +" << endl;
		cout << "2 -" << endl;
		cout << "3 *" << endl;
		cout << "4 /" << endl;
		cout << "0 Escape" << endl;
		cin >> n; 
		

		switch (n)
		{
		case 1:
		{
			cout << "1" << endl;
			system("pause");
			break;
		}

		case 2:
		{
			cout << "2" << endl;
			system("pause");
			break;
		}
		case 3:
		{
			cout << "3" << endl;
			system("pause");
			break;
		}
		case 4:
		{
			cout << "4" << endl;
			system("pause");
			break;
		}


		}
	} while (n != 0);

	return 0;
}