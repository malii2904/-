#include"5.h"

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "ru");
    int rows, cols;
    cout << "Введите кол-во строк: ";
    cin >> rows;
    cout << "Введите кол-во столбцов: ";
    cin >> cols;

#ifdef OprArr

    int* arr = new int[rows * cols];

    cout << "Начальная матрица" << '\n';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            *(arr + i * cols + j) = rand() % 50;    //*(*(arr + i) + j)    arr[i][j]
            cout << *(arr + i * cols + j) << '\t';
        }
        cout << endl;
    }

    cout << endl;
    cout << "Зеркальная матрица" << '\n';

    OdnomerkakDvumer(rows, cols, arr);

    delete[]arr;

#else
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    cout << "Начальная матрица" << '\n';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(arr + i) + j) = rand() % 30;    //*(*(arr + i) + j)    arr[i][j]
            cout << *(*(arr + i) + j) << '\t';
        }
        cout << endl;
    }

    cout << endl;
    cout << "Зеркальная матрица" << '\n';

    ZErkmatrix(rows, cols, arr);
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

#endif

}


