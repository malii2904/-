#include <iostream>
#include <math.h>
#include <windows.h>
#pragma warning(disable : 4996)

int main(void) {
    setlocale(LC_ALL, "Rus");
    int a;
    while (1)
    {
        printf("Введите значения a = ");
        scanf("%d", &a);

        if (a % 10 == 1)
            printf("У меня"" %d ""гриб\n", a);

        else
            if ((a % 10 >= 5) && (19 >= a % 10))
                printf("У меня"" %d ""грибов\n", a);
            else
                if ((a % 10 >= 2) && (4 >= a % 10))
                    printf("У меня"" %d ""грибa\n", a);
                else
                    if (a % 10 == 0)
                        printf("У меня"" %d ""грибов\n", a);

                    else
                        printf("У меня"" %d ""грибов\n", a);

    }

    return 0;
}