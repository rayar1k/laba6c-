#include <iostream>
#include <clocale>
#include "Fraction.h"

int main()
{
    std::setlocale(LC_ALL, "Russian_Russia.1251");
    int numerator = 0, denumerator = 0;
    std::cout << "��������� = ";                  // ����� ���������
    std::cout.flush();                            // ����� ������ ������
    std::cin >> numerator;                        // ���� �����
    std::cout << "����������� = ";                // ����� ���������
    std::cout.flush();                            // ����� ������ ������
    std::cin >> denumerator;                      // ���� �����
    Fraction objFract(numerator, denumerator);    // ���������� ������� � ������������� ��������� ������
    objFract.reduction();                         // ����� ������� ���������� �����
    objFract.Show();                              // ������� ����� �����
    return 0;
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"#include "Fraction.h"
