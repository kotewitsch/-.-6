#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include"Task.h" 
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");



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


		system("pause");
		return 0;

	}
}