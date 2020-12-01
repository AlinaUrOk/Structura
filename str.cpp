// str.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

using namespace std;
struct NOTE {
	char fio[20];
	int number;
	int birth[3];
	void print()
	{
		cout << "FIO: " << fio << endl << "Phone number: " << number << endl << "Birthday: " << birth[0] << "." << birth[1] << "." << birth[2] << endl;
	}
};
void MenuCrud() {
	std::cout << "1) Add human" << std::endl;
	std::cout << "2) Search human" << std::endl;
	std::cout << "3) Update the information" << std::endl;
	std::cout << "4) Delete human" << std::endl;
}

int main()
{

	NOTE human[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter fio: ";
		cin >> human[i].fio; '\n';
		cout << "Enter phone number: ";
		cin >> human[i].number; '\n';
		cout << "Enter day: ";
		cin >> human[i].birth[0]; '\n';
		cout << "Enter month: ";
		cin >> human[i].birth[1]; '\n';
		cout << "Enter year: ";
		cin >> human[i].birth[2]; '\n';
		cout << "///////////////////////////////////////" << endl;
	}

	int n = sizeof(human) / sizeof(NOTE);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(human[j].fio, human[j + 1].fio) > 0)
			{
				NOTE  k = human[j];
				human[j] = human[j + 1];
				human[j + 1] = k;

			}

		}
	}
	for (NOTE note : human)
	{
		note.print();
	}

	int d, count = 0;
	cout << "ENTER MONTH 1-12: ";
	cin >> d;
	for (int i = 0; i < 3; i++)
	{
		if (d == human[i].birth[1])
		{

			cout << "FIO: " << human[i].fio << endl << "Phone number: " << human[i].number << endl << "Birthday: " << human[i].birth[0] << "." << human[i].birth[1] << "." << human[i].birth[2] << endl;
		}
	}



	char* fio; NOTE human;
	cout << "Enter the name to delete: ";
	cin >> fio; '\n';
	for (int i = 0; i < 3; i++)
	{
		human[i].birth;
		human[i].fio;
		human[i].number;
		if (human[i].fio == fio)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << "FIO: " << human[i].fio << endl << "Phone number: " << human[i].number << endl << "Birthday: " << human[i].birth[0] << "." << human[i].birth[1] << "." << human[i].birth[2] << endl;
			}
		}
	}


	char* fio; NOTE human;
	int c, choice;
	cout << "Enter the name to update: ";
	cin >> fio; '\n';
	for (int i = 0; i < 3; i++)
	{
		human[i].birth;
		human[i].fio;
		human[i].number;
		cout << "What exactly you want to change?" << endl;
		cout << "1.FIO." << endl;
		cout << "2.Phone number." << endl;
		cout << "3.Birthday." << endl;
		switch (choice) {
		case 1:
		{
			cout << "Enter new name: ";
			cin >> human[i].fio;
		}
		case 2:
		{
			cout << "Enter new phone number: ";
			cin >> human[i].number;
		}
		case 3:
		{
			cout << "Enter new birthday: ";
			cout << "Enter day: ";
			cin >> human[i].birth[0]; '\t'; break;
			cout << "Enter month: ";
			cin >> human[i].birth[1]; '\t'; break;
			cout << "Enter year: ";
			cin >> human[i].birth[2]; '\t'; break;
		}

		cout << "FIO: " << human[i].fio << endl << "Phone number: " << human[i].number << endl << "Birthday: " << human[i].birth[0] << "." << human[i].birth[1] << "." << human[i].birth[2] << endl;

		}

	}

	NOTE human[3];
	char p[10];
	cout << "Enter name";
	cin >> p;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (p == human[i].fio)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << "FIO: " << human[i].fio << endl << "Phone number: " << human[i].number << endl << "Birthday: " << human[i].birth[0] << "." << human[i].birth[1] << "." << human[i].birth[2] << endl;
			}
		}
		count++;

		if (count == 0)
		{
			cout << "There id no such person!";
		}
	}

	int choice;
	cout << "Enter choice";
	cin >> choice;
	switch (choice)
	{
	case 1:  break;
	case 2:  break;
	case 3:  break;

	}

	return 0;
}
