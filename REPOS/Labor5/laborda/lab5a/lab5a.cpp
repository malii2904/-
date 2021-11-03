#include <stdio.h>
#include <iostream>
#include <math.h>
#pragma warning (disable:4996)


int main(void)
{
    setlocale(LC_ALL, "Rus");
   float a, b, c;
    float  x1, x2;
    float D;

    printf("Введите значение а= ");
    scanf("%f", &a);

    printf("Введите значение b= ");
    scanf("%f", &b);

    printf("Введите значение c= ");
    scanf("%f", &c);

    D = b*b - 4 * a * c;
    

    if (D >= 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("x1=%f\n", x1);
        printf("x2=%f\n", x2);
    }
    if (D < 0)
        printf("Корней не существует");

}
