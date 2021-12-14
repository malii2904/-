#include <iostream>
using namespace std;
#include <iomanip>

#define N 3
#define M 3
int  FUN(int arr_1[]);

int main()
{
    setlocale(LC_ALL, "Rus");

    int arr_1[N * M] = { 1,2,3,5,6,7,8,9,0};
    cout << "Одномерный массив:" << endl;
    for (int i = 0; i < N * M; i++) 
        cout << setw(4) << arr_1[i];
        cout << endl;
        int avg = FUN(arr_1);
        cout << "Одномерный массив после функции:" << endl;
        for (int i = 0; i < N * M; i++)
            cout << setw(4) << arr_1[i];
        cout << endl;
       
        cout << "Средние значение максимальных элементов каждой строки:" << endl;
        cout << "avg=" << avg << endl;
}
int FUN(int arr_1[]) {
    int arr_2[N][M];
    cout << "Печать ДМ из ОМ" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr_2[i][j] = arr_1[i * M + j];
            cout<<setw(4) << arr_2[i][j] << "";
        }
        cout << endl;
    }
    int avg = 0;
    for (int i = 0; i < M; i++)
    {
        int max = 0;
        for (int j = 0; j < N; j++) {
            if (arr_2[i][j] > max) {
                max = arr_2[i][j];
            }
        }
        avg += max;
    }
    avg /= M;
    
    return avg;
}


