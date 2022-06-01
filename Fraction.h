#pragma once
#include <iostream>
#include <clocale>
using namespace std;

class Fraction
{
public:
	int n; // Изначальное значение числителя
	int d; // Изначальное значение знаменателя
	int n_mod; // Сокращённое значение числителя
	int d_mod; // Сокращённое значение знаменателя

	Fraction(int num_s, int den_s) // Конструктор класса
	{
		setValue(num_s, den_s); // Вызов функции установки значений
	}

	void setValue(int num_s, int den_s)  // Функция установки значений
	{
		n = num_s;
		d = den_s;
	}

	int NOD(int num, int den)  // Функция вычисления НОД
	{
		int div;
		if (num == den)  return num;
		int d = num - den;
		if (d < 0) {
			d = -d;
			div = NOD(num, d);
		}
		else
			div = NOD(den, d);
		return (div);
	}

	void reduction()  // Метод, который всё считает
	{
		std::setlocale(LC_ALL, "Russian_Russia.1251");
		int op = NOD(n, d);
		n_mod = n / op;
		d_mod = d / op;
		cout << "Проверим, что у нас получилось: " << "новый числитель = " << n_mod << ", новый знаменатель = " << d_mod << "." << endl;
	}

	void Show()  // Метод, который всё выводит
	{
		std::setlocale(LC_ALL, "Russian_Russia.1251");
		cout << "Сокращённая дробь: " << n_mod << "/" << d_mod << "." << endl;
	}

	~Fraction()
	{
		// Тут срабатывает деструктор
	}
};
