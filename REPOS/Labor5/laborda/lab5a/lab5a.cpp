#include <stdio.h>
#include <iostream>
#include <math.h>
#pragma warning (disable:4996)


int main(void)
{
    setlocale(LC_ALL, "Rus");
    double a, b, c;
    double x, x1, x2;
    double D;

    printf("Введите значение а= ");
    scanf("%lf", &a);

    printf("Введите значение b= ");
    scanf("%lf", &b);

    printf("Введите значение c= ");
    scanf("%lf", &c);

    D = pow(-b, 2) - 4 * a * c;
    a* x* x - b * x + c;

    if (D >= 0)
    {
        x1 = (-b + sqrt(D) / (2 * a));
        x2 = (-b - sqrt(D) / (2 * a));
        printf("x1=%lf\n", x1);
        printf("x2=%lf\n", x2);
    }
    if (D < 0)
        printf("Корней не существует");

}
