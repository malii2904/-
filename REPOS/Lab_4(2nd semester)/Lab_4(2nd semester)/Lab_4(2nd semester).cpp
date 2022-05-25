#include "4.h"
int main()
{
    int M;
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    cout << "Введите размер массива" << endl;
    cin >> M;
    int* arr = new int[M];
    int count = 0;
    Full(arr, M);
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < M; i++) {
        cout << setw(4) << *(arr + i);
    }
    cout << endl;
    int max = *arr;
    int min = *arr;
    count = MAX_MIN(max, min, arr, M, count);
    int* mas = new int[count];
    cout << "Массив без минимального элемента:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < count; j++) {
            if (*(arr + i) > min) {
                *(mas + j) = *(arr + i);
            }
        }
        if (*(arr + i) > min) {
            cout << setw(4) << *mas;
        }
    }
    delete[]mas;
    delete[]arr;
}
