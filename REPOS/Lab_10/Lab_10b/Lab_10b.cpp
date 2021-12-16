#include <iostream>
#include <iomanip>
using namespace std;
#define M 100


int array_print(int arr[M][M], int row, int coll) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coll; j++) {
            arr[i][j] = rand() % 10 - 5;
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

int positive(int arr[M][M], int choice, int coll) {
    int sum = 0;
    cout << "Позитивные числа:" << endl;
    for (int j = 0; j < coll; j++) {

        if (arr[choice - 1][j] >= 0) {
            cout << setw(3) << arr[choice - 1][j];
            sum++;
        }
    } cout << endl;
    return sum;
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    int array[M][M];
    cout << "Двумерный массив:" << endl;
    int row, coll;
    cout << "Введите количество строк ";
    cin >> row;
    cout << "Введите количество столбцов в нем ";
    cin >> coll;


    array_print(array, row, coll);

    while (true) {

        int choice;
        cout << "Выберите строку, в которой будем искать положительные числа ";
        cin >> choice;


        if (choice > 0 && choice <= row) {
            cout << "Количество позитивных чисел: " << positive(array, choice, row) << endl;
        }
        else
            cout << "Невозможно" << endl;
    }

    return 0;
}