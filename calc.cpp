#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

// Функция для сложения
double add(double x, double y) { return x + y; }

// Функция для вычитания
double subtract(double x, double y) { return x - y; }

// Функция для умножения
double multiply(double x, double y) { return x * y; }

// Функция для деления
double divide(double x, double y) { return (y != 0) ? x / y : (cout << "Ошибка: Деление на ноль" << endl, 0.0); }

// Функция для возведения в степень
double power(double x, double y) { return pow(x, y); }

// Функция для нахождения квадратного корня
double squareRoot(double x) { return (x >= 0) ? sqrt(x) : (cout << "Ошибка: Невозможно извлечь квадратный корень из отрицательного числа" << endl, 0.0); }

// Функция для нахождения 1 процента от числа
double percentageOf(double x) { return 0.01 * x; }

// Функция для нахождения факториала числа
int factorial(int x) { return (x < 0) ? (cout << "Ошибка: Невозможно вычислить факториал отрицательного числа" << endl, 0) : (x == 0 || x == 1) ? 1 : x * factorial(x - 1); }

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RUS");

    while (true) {
        cout << "Calculator" << endl;
        cout << ">>>>>>>>>>>>>>>>>>" << endl;
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;

        int choice;
        cout << "Введите номер операции: ";
        cin >> choice;

        if (choice == 9) {
            cout << "Программа завершена." << endl;
            exit(0);
        }

        double num1, num2;
        cout << "Введите первое число: ";
        cin >> num1;

        if (choice != 6 && choice != 7 && choice != 8) {
            cout << "Введите второе число: ";
            cin >> num2;
        }

        switch (choice) {
        case 1:
            cout << "Итог: " << add(num1, num2) << endl;
            cout << "---------------" << endl;
            break;
        case 2:
            cout << "Итог: " << subtract(num1, num2) << endl;
            cout << "---------------" << endl;
            break;
        case 3:
            cout << "Итог: " << multiply(num1, num2) << endl;
            cout << "---------------" << endl;
            break;
        case 4:
            cout << "Итог: " << divide(num1, num2) << endl;
            cout << "---------------" << endl;
            break;
        case 5:
            cout << "Итог: " << power(num1, num2) << endl;
            cout << "---------------" << endl;
            break;
        case 6:
            cout << "Итог: " << squareRoot(num1) << endl;
            cout << "---------------" << endl;
            break;
        case 7:
            cout << "Итог: " << percentageOf(num1) << endl;
            cout << "---------------" << endl;
            break;
        case 8:
            cout << "Итог: " << factorial(static_cast<int>(num1)) << endl;
            cout << "---------------" << endl;


            break;
        default:
            cout << "Ошибочный ввод. Выберите число от 1 до 9." << endl;
            cout << "---------------" << endl;
        }
    }

    return 0;
}