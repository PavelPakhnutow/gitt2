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

void func::set() //������� ����� ������
{
	cout << "������� ������ �����: ";
	cin >> first;
	cout << "������� ������ �����: ";
	cin >> second;
}

void func::getf() //������� ��������� ������� �����
{
	cout << "���������: " << first;
}
void func::gets() //������� ��������� ������� �����
{
	cout << second << " = ";
}