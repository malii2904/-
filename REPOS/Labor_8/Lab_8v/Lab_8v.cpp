#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int number;
    int reverse = 0;
    int sum = 0;
    int size = 0;
    int smth;
    cout << "Введите число: ";
    cin >> number;
    smth = number;
    do {
        smth /= 10;
        size++;
    } while (smth > 0);

    int array[10];
    for (int i = 0; i < size; i++) {
        array[i] = (number % 10);
        reverse = reverse * 10 + array[i];
        number /= 10;
        sum += array[i];
    }
    cout << "Количество цифр: " << size << endl;
    cout << "Сумма чисел: " << sum << endl;
    cout << "Число наоборот: " << reverse<<endl;
  return 0;
}

