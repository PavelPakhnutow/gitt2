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

void func::set() //функци€ ввода данных
{
	cout << "¬ведите первое число: ";
	cin >> first;
	cout << "¬ведите второе число: ";
	cin >> second;
}