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
	cout << "ѕрактическа€ работа.Ќомер 6" << endl;
	for (int i = 0; i < 25; i++)
		cout << " ";
	cout << "ћета: >>як вводити та вивидити значенн€ табличних велечин у програмах." << endl;
	for (int i = 0; i < 25; i++)
		cout << " ";
	cout << "      >>якi алгоротми э базовими дл€ опрацюванн€ табличних велечини." << endl;
	for (int i = 0; i < 25; i++)
		cout << " ";
	cout << "      >>як описати алгоритми заходженн€ суми чи кiлькостi елементiв табличной велечин." << endl;
	for (int i = 0; i < 1; i++)
		cout << "\n";
	Task objTasker;
	objTasker.PractTask();
	cout << "ƒл€ выбора задани€ введите его номер:";
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