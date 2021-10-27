#include <math.h> 
#include <iostream> 
#include <Windows.h> 
#pragma warning(disable : 4996)

int main()
{
    setlocale(LC_ALL, "Russian");

    int k;
    while (1)
    {
        printf("Введите значения k = ");
        scanf("%d", &k);


        if ((k % 100 >= 11) && (19 >= k % 100))
            printf("У меня"" %d ""грибов\n", k);
        else
            if ((k % 10 >= 5) && (9 >= k % 10))
                printf("У меня"" %d ""грибa\n", k);
            else
                if ((k % 10 >= 2) && (4 >= k % 10))
                    printf("У меня"" %d ""грибa\n", k);
                else
                    if (k % 10 == 0)
                        printf("У меня"" %d ""грибов\n", k);
                    else
                        if (k % 10 == 1)
                            printf("У меня"" %d ""гриб\n", k);

                        else
                            printf("У меня"" %d ""грибов\n", k);
    }

    return 0;
}