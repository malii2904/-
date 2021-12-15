#include <stdio.h>
#include <iostream>
#include <math.h>
#pragma warning (disable:4996)


int main(void)
{
    setlocale(LC_ALL, "Rus");
    long n;
    double dbln;
    double sum = 0;
    double term;
    const double eps = 0.00000001;
    short k1 = 1;

    for (n = 0; ; n++, k1 = -k1)
    {
        dbln = n;
        term = k1 * (dbln + 1) / (dbln * dbln * dbln + 1);
        if (fabs(term) >= eps)
            sum += term;
        else break;
        if (n == 9)
            printf("Сумма 10 членов ряда = %10.7lf\n", sum);
    }
    printf("Полная сумма ряда = %10.7lf \n %d\n", sum, n);
    return 0;
}
#include <stdio.h>
#include <iostream>
#include <math.h>
#pragma warning (disable:4996)


int main(void)
{
    setlocale(LC_ALL, "Rus");
    long n;
    double dbln;
    double sum = 0;
    double term;
    const double eps = 0.00000001;
    short k1 = 1;

    for (n = 0; ; n++, k1 = -k1)
    {
        dbln = n;
        term = k1 * (dbln + 1) / (dbln * dbln * dbln + 1);
        if (fabs(term) >= eps)
            sum += term;
        else break;
        if (n == 9)
            printf("Сумма 10 членов ряда = %10.7lf\n", sum);
    }
    printf("Полная сумма ряда = %10.7lf \n %d\n", sum, n);
    return 0;
}