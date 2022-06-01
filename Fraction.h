#pragma once
#include <iostream>
#include <clocale>
using namespace std;

class Fraction
{
public:
	int n; // ����������� �������� ���������
	int d; // ����������� �������� �����������
	int n_mod; // ����������� �������� ���������
	int d_mod; // ����������� �������� �����������

	Fraction(int num_s, int den_s) // ����������� ������
	{
		setValue(num_s, den_s); // ����� ������� ��������� ��������
	}

	void setValue(int num_s, int den_s)  // ������� ��������� ��������
	{
		n = num_s;
		d = den_s;
	}

	int NOD(int num, int den)  // ������� ���������� ���
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

	void reduction()  // �����, ������� �� �������
	{
		std::setlocale(LC_ALL, "Russian_Russia.1251");
		int op = NOD(n, d);
		n_mod = n / op;
		d_mod = d / op;
		cout << "��������, ��� � ��� ����������: " << "����� ��������� = " << n_mod << ", ����� ����������� = " << d_mod << "." << endl;
	}

	void Show()  // �����, ������� �� �������
	{
		std::setlocale(LC_ALL, "Russian_Russia.1251");
		cout << "����������� �����: " << n_mod << "/" << d_mod << "." << endl;
	}

	~Fraction()
	{
		// ��� ����������� ����������
	}
};
