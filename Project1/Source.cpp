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
	cout  << "Введите первое число: ";
	cin	  >> argA;
	cout  << "Введите второе число: ";
	cin	  >> argB;
	cout  << "\n";
	cout  << "Сумма: "			<< argA + argB << "\n";
	cout  << "Разность: "		<< argA - argB << "\n";
	cout  << "Произведение: "	<< argA * argB << "\n";
	cout  << "Частное: "		<< argA / argB << "\n";
	*/

	float a;
	float b;
	char _operator;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите оператор: ";
	cin >> _operator;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Результат: ";
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
		cout << "Оператора \"" << _operator << "\" нету или не поддерживается";
		// cout << "NAN";
	return 0;
}