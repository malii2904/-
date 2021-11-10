#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    short n;
    double x, y;
    short h;

    for (n = 0; n < 5; n++)
    {
        printf("|   x   |      y     |\n");
        printf("|-------|------------|\n");

        for (x = 0; x <= 4; x += 0.25)
        {

            if (x < 1)
            {
                y = 2;
                printf("| %5.2lf | %10.7lf |", x + n * 4, y);

                h = (y + 1) * 10;
                if (y - 1 - h * 10 > 0.5) h++;

                for (; h > 0; h--) printf(" ");
                printf("*\n");
            }
            else if (x == 1)
            {
                printf("| %5.2lf | y є [0; 2] |", x + n * 4);

                for (int i = 0; i < 10; i++)
                {
                    printf(" ");
                }
                for (int i = 0; i < 10; i++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            else if (x > 1 && x < 3)
            {
                y = -sqrt(1 - (x - 2) * (x - 2));
                printf("| %5.2lf | %10.7lf |", x + n * 4, y);

                h = (y + 1) * 10;
                if (y - 1 - h * 10 > 0.5) h++;

                for (; h > 0; h--) printf(" ");
                printf("*\n");
            }
            else if (x >= 3 && x < 4)
            {
                y = x - 3;
                printf("| %5.2lf | %10.7lf |", x + n * 4, y);

                h = (y + 1) * 10;
                if (y - 1 - h * 10 > 0.5) h++;

                for (; h > 0; h--) printf(" ");
                printf("*\n");
            }
            else
            {
                printf("| %5.2lf | y є [1; 2] |", x + n * 4, y);

                for (int i = 0; i < 20; i++)
                {
                    printf(" ");
                }
                for (int i = 0; i < 5; i++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }

        printf("Нажмите клавишу Enter...");
        getchar();
    }
    return 0;
}