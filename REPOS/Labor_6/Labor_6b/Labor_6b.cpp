#include <iostream>
using namespace std;
#include <stdio.h>
#include <ctime>


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    int a = rand() % 10;
    int b = rand() % 10;
    int d;// ответ пользователя
    int f = 0;// кол-во верных ответов
    int exs = 10;

    for (int i = 0; i < exs; ++i) {
        a = rand() % 10;
        b = rand() % 10;
        d = a * b;
        int n = a * b;
        cout << "a=" << a << "b=" << b << endl;
        cout << "a*b=";
        cin >> d;
        if (d == n) {
            f++;
        }
        else (d != n);
        {
            f += 0;
        }
    }
    cout << "Количество верных ответов=" << f << endl;
    int g = (f * 12) / exs;
    cout << "Ваша оценка:" << g;



}