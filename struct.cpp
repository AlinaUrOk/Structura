// struct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*1. Описать структуру с именем NOTE, содержащую следующие поля:
• фамилия, имя;
• номер телефона;
• день рождения (массив из трех чисел).
2. Написать программу, выполняющую следующие действия:
• ввод с клавиатуры данных в массив, состоящий из восьми элементов типа
NOTE; записи должны быть размещены но алфавиту;
• вывод на экран информации о людях, чьи дни рождения приходятся на
месяц, значение которого введено с клавиатуры;
• если таких нет, выдать на дисплей соответствующее сообщение.*/
#include <iostream>
#include "struct.h"

using namespace std;
struct NOTE {
    string fio{};
    int number{};
    int birth[3]{};
};
int main()
{
    int n;
    int j = 1;
    cout << "enter month 1-12: ";
    cin >> n; '\n';
    NOTE* note = new NOTE[8];
    for (int i = 0; i < 8; i++)
    {
        if (n == note[i].birth[j])
        {
            cout << "enter name: ";
            cin >> note[i].fio; '\n';
            cout << "enter number: ";
            cin >> note[i].number; '\n';
            for (; j < 3; j++)
            {
                cout << "birthday: ";
                cin >> note[i].birth[j];
            }
        }
        else 
        {
            cout << "Not correct!";
        }
    }
    return 0;

}


