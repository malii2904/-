#include <iomanip>
#include <iostream>
#include <chrono>
#include<ctime>
using namespace std;


void Sorts_by_insert(int array[], const int size) {
    for (int i = 1; i < size; i++) {
        for (int j = i; j > 0 && array[j - 1] > array[j]; j--) {

            int temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    const int size = 45;
    const int amount = 100;
    int array[size];
    int array_2[size];
    cout << "Наш неупорядоченный массив:" << endl;;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 30;
        cout << setw(3) << array[i] << " ";
        array_2[i] = array[i];
    }
    cout << endl;
    double avg = 0;
    double sum = 0;
    double duration_arr[amount];
    cout << "Сортировка вставками массива №1:" << endl;
    for (int i = 0; i < amount; i++) {
        for (int j = 0; j < size; j++) {
            array[j] = array_2[j];
        }
        auto start = std::chrono::high_resolution_clock::now();
        Sorts_by_insert(array, size);
        auto end = std::chrono::high_resolution_clock::now();
        chrono::duration<double>duration = end - start;
        duration_arr[i] = duration.count();
        /*cout << "Сортировка неупорядоченного массива:" << endl;
        for (int q = 0; q < size; q++) {
            cout << setw(3) << array[q] << " ";
        }
        cout << endl;*/
       // printf("Программа длится в течении: %.10lf\n", duration.count());
        sum += duration.count();
        avg = sum / amount;
    }
    
    printf("Среднее время: = %.10lf\n", avg);
    cout << "Массив-результат после сортировки:" << endl;
    for (int q = 0; q < size; q++) {
        cout << setw(3) << array[q] << " ";
    }
    cout << endl << endl << endl << endl;
    //cout << "Массив по убыванию:" << endl;
    //int ok, i;
    //for (int j = 1; j < size; ++j) {
    //    ok = array[j];
    //    i = j - 1;
    //    while (array[i] <= ok && i >= 0) {
    //        array[i + 1] = array[i];
    //        --i;
    //    }
    //    array[i + 1] = ok;
    //}
    //for (int q = 0; q < size; q++) {
    //    cout << setw(3) << array[q] << " ";
    //}
    //cout << endl;
    //cout << "Сортировка  массива вставками  №2:" << endl;
    //for (int i = 0; i < amount; i++) {
    //    for (int j = 0; j < size; j++) {
    //        array[j] = array_2[j];
    //    }
    //    auto start = std::chrono::high_resolution_clock::now();
    //    Sorts_by_insert(array, size);
    //    auto end = std::chrono::high_resolution_clock::now();
    //    chrono::duration<double>duration = end - start;
    //    duration_arr[i] = duration.count();
    //    /*cout << "Сортировка неупорядоченного массива по убыванию:" << endl;
    //    for (int q = 0; q < size; q++) {
    // //        cout << setw(3) << array[q] << " ";
    // //    }
    // //    cout << endl;*/
    //    printf("Программа длится в течении: %.10lf\n", duration.count());
    //    sum += duration.count();
    //    avg = sum / amount;
    //}
    //printf("Среднее время: = %.10lf\n", avg);
    //cout << "Массив-результат:" << endl;
    //for (int q = 0; q < size; q++) {
    //    cout << setw(3) << array[q] << " ";
    //}
    //cout << endl;
    //cout << "Сортированный массив:" << endl;
    //for (int q = 0; q < size; q++) {
    //    Sorts_by_insert(array, size);
    //    cout << setw(3) << array[q] << " ";
    //}
    //cout << endl;
    //cout << "Сортировка массива №3:" << endl;
    //for (int i = 0; i < amount; i++) {
    //    auto start = std::chrono::high_resolution_clock::now();
    //    Sorts_by_insert(array, size);
    //    auto end = std::chrono::high_resolution_clock::now();
    //    chrono::duration<double>duration = end - start;
    //    duration_arr[i] = duration.count();
    //    /*cout << "Сортировка неупорядоченного массива:" << endl;
    //    for (int q = 0; q < size; q++) {
    //        cout << setw(3) << array[q] << " ";
    //    }
    //    cout << endl;*/
    //    printf("Программа длится в течении: %.10lf\n", duration.count());
    //    sum += duration.count();
    //    avg = sum / amount;
    //}
    //printf("Среднее время: = %.10lf\n", avg);

    //cout << "Массив-результат после сортировки:" << endl;
    //for (int q = 0; q < size; q++) {
    //    cout << setw(3) << array[q] << " ";
    //}
    //return 0;
}


