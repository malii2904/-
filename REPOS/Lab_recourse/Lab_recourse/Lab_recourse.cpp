#include <iostream>
#include <iomanip>

using namespace std;
int sum_mas(int mas[], int M, int sum) {
    
    for (int i = 0; i < 10&&mas[i]; i++) {
        if (mas[i] % 2 == 0) {
            sum += mas[i];
        }
    }
    return(sum_mas(mas, M-1, sum));
}
void main()
{
    setlocale(LC_ALL, "Rus");
    int M;
    const int size = 1000;
    int mass[size];
    while (true) {
        cout << endl;
        cout << "Введите количество элементов массива (до 1000)"<< endl;
       cin >> M;        cout << "Ваш массив:" << endl;
       for (int i = 0; i < M; i++) {
         mass[i] = rand() % 10 + 1;
          cout << mass[i] << setw(4) << " ";
        }
        cout << endl;
       static int sum = 0;
       cout << "Результат:" << sum_mas(mass, M, sum);
   }
}
//
//#include <iostream> 
//#include <windows.h> 
//#include<iomanip> 
//using namespace std;
//
//
//float SredneeArifm(int arr[], int M) {
//    if (M == 0) {
//        return arr[M];
//    }
//
//    return ((M - 1) * SredneeArifm(arr, M - 1) + arr[M - 1]) / M;
//
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int M;
//    const int size = 1000;
//    int arr[size];
//    while (true) {
//        cout << endl;
//        cout << "Введите количество элементов массива :" << endl;
//        cin >> M;
//        cout << "Ваш массив:" << endl;
//        for (int i = 0; i < M; i++) {
//            arr[i] = rand() % 10 + 1;
//            cout << arr[i] << setw(4) << " ";
//        }
//        cout << endl;
//        cout << "Результат:" << SredneeArifm(arr, M);
//    }
//
//}
//#include <iostream>
//#include <time.h>
//using namespace std;
//#define N 7
//int recursive(int Array[], int kolvo = 0, int i = 0);
//
//
//int main()
//{
//    int i, D[N];
//    srand(time(NULL));
//    setlocale(LC_ALL, "ru");
//    cout << "Массив:" << "\n";
//    for (i = 0; i < N; i++) {
//        D[i] = rand() % 10;
//        cout << D[i] << "  ";
//    }
//    cout << "\n";
//    cout << "Количество элементов массива, для которых выполняется условие Di > i." << "\n";
//    cout << recursive(D) << "\n";
//}
//
//
//int recursive(int Array[], int kolvo, int i)
//{
//    if (i < N)
//    {
//        if (Array[i] > i) {
//            kolvo++;
//        }
//        return recursive(Array, kolvo, i + 1);
//    }
//    return kolvo;
//}