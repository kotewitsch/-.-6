#include<iostream>
#include<windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

char block = 219;
char block1 = 219;
class Task
{
public:
	void PractTask()
	{
		cout << "Завдання 1. Змiнна цiни" << endl;
		cout << "Завдання 2. Кислотнiсть грунтiв" << endl;
		
	}
	void TaskNumberOne()
	{
		int i = 0;

		for (int i = 0; i < 119; i++)
		{
			setlocale(LC_CTYPE, "C");
			cout << block;
		}
		cout << endl;
		;
		cout << block << block << "                            " << block << block << "                          " << block << block << "                          " << block << block << "                             " << block << block << endl;
		cout << block << block << "       1 Тиждень            " << block << block << "         2 Тиждень        " << block << block << "        3 Тиждень         " << block << block << "          4 Тиждень          " << block << block << endl;
		cout << block << block << "                            " << block << block << "                          " << block << block << "                          " << block << block << "                             " << block << block << endl;
			for (int i = 0; i < 119; i++)
			{
				setlocale(LC_CTYPE, "C");
				cout << block;
			}
			setlocale(LC_ALL, "Russian");
			cout << "\n";
			cout << block << block << "                            " << block << block << "                          " << block << block << "                          " << block << block << "                             " << block << block << endl;
			cout << block << block << "     Пiдвищення на 10%      " << block << block << "     Пiдвищення на 5%     " << block << block << "     Пiдвищення на 7%     " << block << block << "     Пiдвищення на 10%       " << block << block << endl;

			cout << block << block << "                            " << block << block << "                          " << block << block << "                          " << block << block << "                             " << block << block << endl;
			for (int i = 0; i < 119; i++)
			{
				setlocale(LC_CTYPE, "C");
				cout << block;
			}
			setlocale(LC_ALL, "Russian");
			cout << "\n";

			cout << "Введите 0 для возражения в меню:";
			cin >> i;
			if (i == 0)
			system("cls");
			Task objTasker;
			objTasker.Menu();					
	}
	void TaskNumberTwo()
	{
		int i = 0;
		for (int i = 0; i < 93; i++)
		{
			setlocale(LC_CTYPE, "C");
			cout << block;
		}
		
		cout << "\n";
		cout << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "        " << block1 << block1 << endl;
		cout << block1 << block1 << "   1   " << block1 << block1 << "   2   " << block1 << block1 << "   3   " << block1 << block1 << "   4   " << block1 << block1 << "   5   " << block1 << block1 << "   6   " << block1 << block1 << "   7   " << block1 << block1 << "   8   " << block1 << block1 << "   9   " << block1 << block1 << "   10   " << block1 << block1 << endl;
		cout << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "        " << block1 << block1 << endl;
		for (int i = 0; i < 93; i++)
		{
			setlocale(LC_CTYPE, "C");
			cout << block;
		}
		cout << "\n";
		cout << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "        " << block1 << block1 << endl;
		cout << block1 << block1 << "   5   " << block1 << block1 << "   6   " << block1 << block1 << "   7   " << block1 << block1 << "   3   " << block1 << block1 << "   9   " << block1 << block1 << "   8   " << block1 << block1 << "   4   " << block1 << block1 << "   5   " << block1 << block1 << "   7   " << block1 << block1 << "   5    " << block1 << block1 << endl;
		cout << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "       " << block1 << block1 << "        " << block1 << block1 << endl;
		for (int i = 0; i < 93; i++)
		{
			setlocale(LC_CTYPE, "C");
			cout << block;
		}
		setlocale(LC_ALL, "Russian");
		cout << "\n";
		cout << "pH < 7 : 1,2,3,4,5,6,5,6,3,4,,5,7" << endl;
		cout << "pH = 7 : 7,7,7" << endl;
		cout << "pH > 7 : 8,9,10,9,8" << endl;
		cout << "\n";
		cout << "Введите 0 для возражения в меню:";
		cin >> i;
		if (i == 0)
			system("cls");
		Task objTasker;
		objTasker.Menu();

	}
	void Menu()
	{
		int i = 0;
		for (int i = 0; i < 9; i++)
			cout << "\n";
		for (int i = 0; i < 40; i++)
			cout << " ";
		cout << "Практическая работа.Номер 6" << endl;
		for (int i = 0; i < 25; i++)
			cout << " ";
		cout << "Мета: >>Як вводити та вивидити значення табличних велечин у програмах." << endl;
		for (int i = 0; i < 25; i++)
			cout << " ";
		cout << "      >>Якi алгоротми э базовими для опрацювання табличних велечини." << endl;
		for (int i = 0; i < 25; i++)
			cout << " ";
		cout << "      >>Як описати алгоритми заходження суми чи кiлькостi елементiв табличной велечин." << endl;
		for (int i = 0; i < 1; i++)
			cout << "\n";
		Task objTasker;
		objTasker.PractTask();
		cout << "Для выбора задания введите его номер:";
		cin >> i;

		switch (i)
		{
		case 1:
			objTasker.TaskNumberOne();
			break;
		case 2:
			objTasker.TaskNumberTwo();
			break;
		}
	}

};

