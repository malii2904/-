#include <iostream>
using namespace std;

char FUN(int a, int b) {

    for (int i = 1;; i++) {
        if (a == b) {
            return '=';
        }
        if (a > b) {
            return '>';
        }
        if (a < b) {
            return '<';
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите значения переменных" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    FUN(a, b);
    cout << "Знак сравнения:" << FUN(a, b) << endl;

}