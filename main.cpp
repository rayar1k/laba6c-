#include <iostream>
#include <clocale>
#include "Fraction.h"

int main()
{
    std::setlocale(LC_ALL, "Russian_Russia.1251");
    int numerator = 0, denumerator = 0;
    std::cout << "числитель = ";                  // Вывод подсказки
    std::cout.flush();                            // Сброс буфера вывода
    std::cin >> numerator;                        // Ввод числа
    std::cout << "знаменатель = ";                // Вывод подсказки
    std::cout.flush();                            // Сброс буфера вывода
    std::cin >> denumerator;                      // Ввод числа
    Fraction objFract(numerator, denumerator);    // Объявление объекта и инициализвция элементов данных
    objFract.reduction();                         // Вызов функции сокращения дроби
    objFract.Show();                              // Выведем новую дробь
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"#include "Fraction.h"
