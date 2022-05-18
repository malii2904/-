#include "Lab_3.h";

void MAX_MIN(int max, int min, int* arr) {
    int max_schet = 0;
    int min_schet = 0;
    cout << " Максимальный эллемент массива:" << endl;
    for (int i = 0; i < N; ++i)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
            max_schet = i;
        }

    }
    cout << endl;
    cout << max << endl;
    cout << "Минимальный элемент массива:" << endl;
    for (int i = 0; i < N; ++i)
    {
        if (*(arr + i) < min)
        {
            min = *(arr + i);
            min_schet = i;
        }

    }
    cout << min << endl;

    int sum = 0;
    if (max_schet > min_schet) {
        for (int i = min_schet + 1; i < max_schet; i++) {
            sum += *(arr + i);
        }

    }
    if (max_schet < min_schet) {
        for (int i = max_schet + 1; i < min_schet; i++) {
            sum += *(arr + i);
        }

    }
    cout << "Ваша сумма:" << sum << endl;
#ifdef DEBUG 
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (*(arr + i) > min) {
            count++;
        }
    }
    int mas[N];
    cout << "Массив без минимального элемента:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < count; j++) {
            if (*(arr + i) > min) {
                *(mas + j) = *(arr + i);
            }
        }
        if (*(arr + i) > min) {
            cout << setw(4) << *mas;
        }
    }
#endif // DEBUG 
}
