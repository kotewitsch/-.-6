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
		cout << "�������� 1. ��i��� �i��" << endl;
		cout << "�������� 2. �������i��� �����i�" << endl;
		
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
		cout << block << block << "       1 �������            " << block << block << "         2 �������        " << block << block << "        3 �������         " << block << block << "          4 �������          " << block << block << endl;
		cout << block << block << "                            " << block << block << "                          " << block << block << "                          " << block << block << "                             " << block << block << endl;
			for (int i = 0; i < 119; i++)
			{
				setlocale(LC_CTYPE, "C");
				cout << block;
			}
			setlocale(LC_ALL, "Russian");
			cout << "\n";
			cout << block << block << "                            " << block << block << "                          " << block << block << "                          " << block << block << "                             " << block << block << endl;
			cout << block << block << "     �i�������� �� 10%      " << block << block << "     �i�������� �� 5%     " << block << block << "     �i�������� �� 7%     " << block << block << "     �i�������� �� 10%       " << block << block << endl;

			cout << block << block << "                            " << block << block << "                          " << block << block << "                          " << block << block << "                             " << block << block << endl;
			for (int i = 0; i < 119; i++)
			{
				setlocale(LC_CTYPE, "C");
				cout << block;
			}
			setlocale(LC_ALL, "Russian");
			cout << "\n";

			cout << "������� 0 ��� ���������� � ����:";
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
		cout << "������� 0 ��� ���������� � ����:";
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
		cout << "������������ ������.����� 6" << endl;
		for (int i = 0; i < 25; i++)
			cout << " ";
		cout << "����: >>�� ������� �� �������� �������� ��������� ������� � ���������." << endl;
		for (int i = 0; i < 25; i++)
			cout << " ";
		cout << "      >>��i ��������� � �������� ��� ����������� ��������� ��������." << endl;
		for (int i = 0; i < 25; i++)
			cout << " ";
		cout << "      >>�� ������� ��������� ���������� ���� �� �i������i �������i� ��������� �������." << endl;
		for (int i = 0; i < 1; i++)
			cout << "\n";
		Task objTasker;
		objTasker.PractTask();
		cout << "��� ������ ������� ������� ��� �����:";
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

