﻿// Labor5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
    setlocale(LC_ALL, "Rus");
    double x, y;
    printf("Введите координату x >");
    scanf("%lf", &x);
    printf("Введите координату y >");
    scanf("%lf", &y);
    printf("x=%6.3lf;  y=%6.3lf\n", x, y);

    if  ((x*x+y*y<=1) &&

        (1 >= x)&&(x >= 0) && (0 >= y)&&(y>=-1)|| (0<=y)&&(y <= 1) && (1>=x)&&(x>=0))
        printf("Точка попадает в область\n");
    else
        printf("Точка не попадает в область\n");

    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
