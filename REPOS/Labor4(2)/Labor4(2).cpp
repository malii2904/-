﻿// Labor4(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#pragma warning (disable : 4996)
#include <stdlib.h>


int main(void)
{
    setlocale(LC_ALL, "RUS");
    short s;
    short m;
    short h;
    unsigned short REZ;
    
    printf("Введите слово состояние устройства\n");
    printf("(16-ричное число от 0 до 0xFFFF)>");
    scanf_s("% hd", &REZ);

    s = (REZ >> 11) & 0x1f;
    m = (REZ >> 5) & 0x3f;
    h = REZ & 0x1f;

   
    printf("Секунды=&hd\n", &s);
    printf("Минуты=&hd\n", &m);
    printf("Часы=&hd\n", &h);

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
