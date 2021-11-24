#include <iostream>
using namespace std;
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>
int main()
{
    setlocale(LC_ALL, "Rus");
    int N = 100, k, t;
     int mass[100];
    cout << "Начальный массив:" << endl;
    for (int i = 0; i < 100; i++) {
        mass[i] = rand() % 100 - 50;
        cout << setw(5) << mass[i] << " ";
    }
    k = t = 0;
    for (int i = t; i < 100 + 1; i++) {
        if ((i + 1) < 100 + 1 && mass[i] >= 0) {
            k++;
        }
        else {
            reverse(mass + i - k, mass + i);
            t = k;
            k = 0;
        }
    }
    cout << "Массив-результат:" << endl; for (int i = 0; i < N; i++)
        cout << setw(5) << mass[i] << ";";
    return 0;
}