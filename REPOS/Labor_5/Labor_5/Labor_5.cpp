

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

    if ((y > x * x - 1))
    {
        (0 >= x <= 0) && (y <= 1) && (y >= 1);
        printf("Точка попадает в область\n");
    }

    else
        printf("Точка не попадает в область\n");

    return 0;

}
