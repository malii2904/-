#include "4.h"
void Full(int arr[], int M) {

    for (int i = 0; i < M; i++) {
        *(arr + i) = rand() % 10 + 1;

    }
}
int MAX_MIN(int max, int min, int* arr, int M, int count) {
    int max_schet = 0;
    int min_schet = 0;
    cout << " ������������ �������� �������:" << endl;
    for (int i = 0; i < M; ++i)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
            max_schet = i;
        }

    }
    cout << endl;
    cout << max << endl;
    cout << "����������� ������� �������:" << endl;
    for (int i = 0; i < M; ++i)
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
    cout << "����� ����� ����� ������������ � ����������� ����������:" << sum << endl;
#ifdef DEBUG  
    count = 0;
    for (int i = 0; i < M; i++) {
        if (*(arr + i) > min) {
            count++;
        }
    }
    return count;
#endif // DEBUG  
}