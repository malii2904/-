#include <iostream>
#include <iomanip>
using namespace std;
#define M 50
int main()

{
    setlocale(LC_ALL, "Rus");
    int arr_size;
    cout << "Введите количество элементов массива: ";
    cin >> arr_size;
    int arr[M];
    int a; 
    int b = 0; 
    int c; 
    cout << "Ваш массив:" << endl;
    for ( b = 0; b < arr_size; b++) {

        arr[b] = rand() % 10 + 1;

        cout << arr[b] << " ";
    }
    cout << endl;
    char result; 
    char move_away = '-';
    char add = '+';

    while (true) {
         cout << "Вы хотите удалить или добавить элементы? <-/+> ";
         cin >> result;
        if (result == add) {
            int spc; 
        cout << "Сколько элементов вы хотите добавить? ";
        cin >> a;
        cout << "Выберите позицию, с которой вы хотите добавть данное количество элементов: " << a << endl;
        cin >> spc;
            int add_new_arr[M];
            for (b = 0; b <spc ; b++) {

                add_new_arr[b] = arr[b];

            }

            int add_mnings[M];
            cout << "Новые элементы: ";
            for (c = 0; c < a; c++) {

                add_mnings[c] = rand() % 10 + 1;

                cout << add_mnings[c] << " ";

            }
            cout << endl;
            for (c = 0, b = spc; b < arr_size + a; b++, c++) {

                add_new_arr[b] = add_mnings[c];

            }
            
            for (c = spc + a, b = spc;c < arr_size + a; c++, b++) {

                add_new_arr[b + a] = arr[b];

            }
             cout << "Ваш новый массив:" << endl;

            for (b= 0; b < arr_size + a; b++) {

                cout << add_new_arr[b] << " ";
             }

            cout << endl;
        }

        else if (result == move_away) {
            

            cout << "Сколько элементов вы хотите удалить? ";

            cin >> a;
            cout << "Выберите позицию, с которой вы хотите удалить данное количество элементов: " << a << endl;

            cin >> b;
            
            if (arr_size == a and b == 0) {

                cout << "Массив удалён!" << endl;

            }
            else {
                for (; b < arr_size - a; b++) {

                    arr[b] = arr[b+a];
                }
              

                cout << "Ваш новый массив:" << endl;

                for (b = 0; b< arr_size - a; b++) {

                    cout << arr[b] << " ";

                }

                cout << endl;
           }
        }
       
    }
    return 0;
}

