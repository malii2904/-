#include <iomanip>
#include <iostream>
#include <chrono>
#include<ctime>
using namespace std;


void Shuttle_Sort_1(int array[], const int size) {
    for (int i = 0; i < size - 1; i++) {
        
        if (array[i] > array[i + 1]) {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
        for (int j = i; (array[j] < array[j - 1]) && (j >= 1); j--) {
            if (array[j] < array[j - 1]) {
               int temp = array[j]; 
               array[j] = array[j - 1]; 
               array[j - 1] = temp;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    const int size = 25;
    const int amount= 100;
    int array[size];
    cout << "Наш неупорядоченный массив:" << endl;;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 30;
        cout << setw(3) << array[i] << " ";
    }
    cout << endl << endl;;
    double avg, sum = 0;
    double duration_arr[amount];
    cout << "Сортировка  массива №1:" << endl;
    for (int i = 0; i < amount; i++) {
        auto start = std::chrono::high_resolution_clock::now();
        Shuttle_Sort_1(array, size);
        auto end = std::chrono::high_resolution_clock::now();
        chrono::duration<double>duration = end - start;
        duration_arr[i] = duration.count();
        /*cout << "Сортировка неупорядоченного массива:" << endl;
        for (int q = 0; q < size; q++) {
            cout << setw(3) << array[q] << " ";
        }
        cout << endl;*/
        printf("Программа длится в течении: %.10lf\n", duration.count());
        sum += duration_arr[i];
     }
    avg = sum / amount;
    printf(" Время программы: %.10lf\n\n\n\n", avg);
    cout << "Массив-результат после сортировки:" << endl;
    for (int q = 0; q < size; q++) {
        cout << setw(3) << array[q] << " ";
        }
    cout << endl<<endl<<endl<<endl;
    cout << "Массив по убыванию:" << endl;
    for (int i = 0; i <= size - 1; i++) {
        int temp = 0;
        if (array[i] < array[i + 1]) { 
            temp = array[i];
            array[i] = array[i + 1]; 
            array[i + 1] = temp; }
        for (int j = i; j >= 1; j--) {
            if (array[j] > array[j - 1]) { 
                temp = array[j]; 
                array[j] = array[j - 1]; 
                array[j - 1] = temp; 
            }
        }
    }
    for (int q = 0; q < size; q++) {
        cout << setw(3) << array[q] << " ";
    }
    cout << endl << endl << endl;
    cout << "Сортировка  массива №2:" << endl;
    for (int i = 0; i < amount; i++) {
       auto start = std::chrono::high_resolution_clock::now();
       Shuttle_Sort_1(array, size);
       auto end = std::chrono::high_resolution_clock::now();
       chrono::duration<double>duration = end - start;
       duration_arr[i] = duration.count();
       /*cout << "Сортировка неупорядоченного массива по убыванию:" << endl;
       for (int q = 0; q < size; q++) {
    //        cout << setw(3) << array[q] << " ";
    //    }
    //    cout << endl;*/
       printf("Программа длится в течении: %.10lf\n", duration.count());
     sum += duration_arr[i];
    }
    avg = sum / amount;
    printf(" Время программы: %.10lf\n\n", avg);
    cout << "Массив-результат:" << endl;
    for (int q = 0; q < size; q++) {
        cout << setw(3) << array[q] << " ";
    }
    cout << endl<<endl<<endl;
    cout << "Сортированный массив:" << endl;
    for (int q = 0; q < size; q++) {
        Shuttle_Sort_1(array, size);
        cout << setw(3) << array[q] << " ";
    } 
    cout << endl << endl << endl;;
        cout << "Сортировка массива №3:" << endl;
        for (int i = 0; i < amount; i++) {
            auto start = std::chrono::high_resolution_clock::now();
            Shuttle_Sort_1(array, size);
            auto end = std::chrono::high_resolution_clock::now();
            chrono::duration<double>duration = end - start;
            duration_arr[i] = duration.count();
            /*cout << "Сортировка неупорядоченного массива:" << endl;
            for (int q = 0; q < size; q++) {
                cout << setw(3) << array[q] << " ";
            }
            cout << endl;*/
            printf("Программа длится в течении: %.10lf\n", duration.count());
            sum += duration_arr[i];
        }
        avg = sum / amount;
        printf(" Время программы: %.10lf\n\n\n\n", avg);
    
    cout << "Массив-результат после сортировки:" << endl;
    for (int q = 0; q < size; q++) {
        cout << setw(3) << array[q] << " ";
    }
    return 0;
}
       
        
