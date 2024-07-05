#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <string>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <vector>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int side;
	cout << "Введите количество длину стороны матрицы:\n";
	cin >> side;
	int** start_mat = new int*[side];
	for (int i = 0; i < side; i++)
	{
		start_mat[i] = new int[side];
		for (int j = 0; j < side; j++)
		{
			start_mat[i][j] = rand() % 25;
		}
	}

	cout << "Начальная матрица:\n";
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			cout << start_mat[i][j];
			if (start_mat[i][j] < 10)
				cout << "  ";
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	int** res_mat = new int* [side];
	for (int i = 0; i < side; i++)
		res_mat[i] = new int[side];

	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			res_mat[i][j] = start_mat[j][i];
		}
	}
	cout << "Полученная матрица:\n";
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			cout << res_mat[i][j];
			if (res_mat[i][j] < 10)
				cout << "  ";
			else
				cout << " ";
		}
		cout << endl;
	}
	for (int m = 0; m < side; m ++ )
		delete[]start_mat[m];
	delete[]start_mat;

	for (int m = 0; m < side; m++)
		delete[]res_mat[m];
	delete[]res_mat;
}
