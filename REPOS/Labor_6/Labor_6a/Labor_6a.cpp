#include <stdio.h>
#include <time.h>
#include <iostream>
#pragma warning(disable : 4996)

int main(void)
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int randnum = rand() % 100;
    int randnum2 = 0;
    int k = 0;
    printf("Отгадайте число от 0 до 100\n");
    while (randnum2 != randnum)
    {
        ++k;
        printf("Введите ваше значениe ");
        scanf("%d", &randnum2);
        if (randnum2 > randnum)
            printf("Число больше загаданного компьюеторм\n");
        else if (randnum2 < randnum)
            printf("Число меньше загаданного компьюеторм\n");
    }
    printf("Вы угадали за"" %d ""попыток\n", k);
    printf("\n\n\n");
    return 0;


}
