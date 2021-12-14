#include <iostream>
#include <iomanip>
using namespace std;
#define A 5


int main()
{
	setlocale(LC_ALL, "Rus");
	int sizecol_1, sizerow_1; 
	int arr_1[A][A];
	int arr_2[A][A];
	cout << "Введите количество строк матрицы №1" << endl;
	cin >>sizerow_1;
	cout << "Введите количество столбцов матрицы №1" << endl;
	cin >> sizecol_1;
	int sizerow_2 = 0;
	int sizecol_2 = 0;
	cout << "Введите количество строк матрицы №2" << endl;
	cin >> sizerow_2;
	cout << "Введите количество столбцов матрицы №2" << endl;
	cin >> sizecol_2;

	while (sizerow_1 != sizecol_2 or sizecol_1 != sizerow_2) {
		cout << "Ошибка, невозможно" << endl << "Попробуйте еще" << endl;
		cout << "Введите количество строк матрицы №1" << endl;
		cin >> sizerow_1;
		cout << "Введите количество столбцов матрицы №1" << endl;
		cin >> sizecol_1;
		cout << "Введите количество строк матрицы №2" << endl;
		cin >> sizerow_2;
		cout << "Введите количество столбцов матрицы №2" << endl;
		cin >> sizecol_2;
	}
	cout << "Вашa матрица №1:" << endl;
	for (int i = 0; i < sizerow_1; i++)
	{
		for (int j = 0; j < sizecol_1; j++)
		{
            arr_1[i][j] = rand() %5;
			cout << setw(5) << arr_1[i][j];
		}
		cout << endl;
	}
	cout << "\n\n";
	cout << " Ваша матрица №2" << endl;
	for (int i = 0; i < sizerow_2; i++)
	{
		for (int j = 0; j < sizecol_2; j++)
		{
			arr_2[i][j] = rand() %5;
			cout << setw(4) << arr_2[i][j];
		}
		cout << endl;
	}
	cout << "\n\n";
	int multip_1=0,multip_2=0;//произведение
	int sum_1=0, sum_2=0;
	int arr[A][A];
	if (sizerow_1 == sizecol_2 or sizecol_1 == sizerow_2) {
		for (int k = 0; k < sizerow_1; k++)
			for (int i = 0; i < sizerow_1; i++)
			{
				sum_1 = 0;
				for (int j = 0; j < sizerow_2; j++) {

					multip_1 = arr_1[k][j] * arr_2[j][i];
					sum_1 += multip_1;
					arr_2[k][i] = sum_1;
					cout << "Результат перемножения:" << multip_1 << endl;
					cout << "Результат сложения:" << sum_1 << endl;

				}
			}
	}
	cout << "Ваше произведение:" << endl;
	for (int k = 0; k < sizerow_1; k++)
	{
		for (int i = 0; i < sizecol_2; i++)
		{
			cout << setw(4) << arr_2[k][i];
		}
		cout << endl;
	}

}

