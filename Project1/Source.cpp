#include <iostream>;
#include <cstdlib>;
#include <windows.h>;

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
	float argA = 0, argB = 0;
	cout  << "������� ������ �����: ";
	cin	  >> argA;
	cout  << "������� ������ �����: ";
	cin	  >> argB;
	cout  << "\n";
	cout  << "�����: "			<< argA + argB << "\n";
	cout  << "��������: "		<< argA - argB << "\n";
	cout  << "������������: "	<< argA * argB << "\n";
	cout  << "�������: "		<< argA / argB << "\n";
	*/

	float a;
	float b;
	char _operator;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ��������: ";
	cin >> _operator;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "���������: ";
	if (_operator == '+')
		cout << a << " + " << b << " = " << (a + b);
	else if (_operator == '-')
		cout << a << " - " << b << " = " << (a - b);
	else if (_operator == '*')
		cout << a << " * " << b << " = " << (a * b);
	else if (_operator == '/')
	{
		if (b == 0)
		{
			cout << a << " / " << b << " = " << "NAN";
		}
		else
		{
			cout << a << " / " << b << " = " << (a / b);
		}
	}
	else if (_operator == '%')
		cout << a << " % " << b << " = " << a << " % ( " << a << " * ( " << b <<  " / 100 )) = " << (a * (b / 100));
	else
		cout << "��������� \"" << _operator << "\" ���� ��� �� ��������������";
		// cout << "NAN";
	return 0;
}