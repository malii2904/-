// Laboratory_9a.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    setlocale(LC_ALL, "Rus");
   const int ROW = 4;
   const int COL = 4;
    int arr_1[ROW][COL];
    int arr_2[ROW][COL];
    cout << "Наш начальный массив:\n";
    for (int i = 0; i <ROW ; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr_1[i][j] = rand() % 20 ;
            arr_2[i][j] = arr_1[i][j];
            cout << setw(4) << arr_1[i][j];
        }
        cout << endl;
    }
    int max = 0;
    int temp = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr_1[i][j] >= arr_1[i][max])
                max = j;
        }
        cout << "Максимальное значение в строке:" << arr_1[i][max] << endl;
        temp = arr_1[i][0];
        arr_1[i][0] = arr_1[i][max];
        arr_1[i][max] = temp;
        max = 0;
    }
    cout << "Наш массив-результат №1:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(4) << arr_1[i][j];
        }
        cout << endl;
    }
    int min = 0;
    int change = 0;
    for (int j = 0; j < ROW; j++)
    {
        for (int i = 0; i < COL; i++) {
            if (arr_2[i][j] <= arr_2[min][j])
                min = i;
        }
        cout << "Минимальное значение столбца:" << arr_2[min][j] << endl;
        change = arr_2[COL-1][j];
        arr_2[COL-1][j] = arr_2[min][j];
        arr_2[min][j] = change;
    }
    cout << "Массив-результат №2:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(4) << arr_2[i][j];
        }
        cout << endl;
    } 
    return 0;
}