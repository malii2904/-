#include "Lab_3.h"

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");

    int arr[N];

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 10 + 1;
        cout << setw(4) << arr[i];
    }
    cout << endl;
    int max = *arr;
    int min = *arr;
    MAX_MIN(max, min, arr);

}