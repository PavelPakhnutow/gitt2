#include "Class.h"

float func::sum()
{
	return res = fir + sec;
}

float func::sub()
{
	return res = fir - sec;
}

float func::mul()
{
	return res = fir * sec;
}

float func::div()
{
	return res = fir / sec;
}

void func::set() //функция ввода данных
{
	cout << "Введите первое число: ";
	cin >> first;
	cout << "Введите второе число: ";
	cin >> second;
}

void func::getf() //функция получения первого числа
{
	cout << "Результат: " << first;
}
void func::gets() //функция получения второго числа
{
	cout << second << " = ";
}