#include"5.h"

void printARR(int const N, int* parr) {
    cout << "Array:" << "\n";
    for (int i = 0; i < N; i++) {
        int RAND = rand() % 50 - 10;

        *(parr + i) = RAND;
        cout << *(parr + i) << "  ";

    }
}
void newarr(int* ptodelete, int* p2arr, int const N, int* parr) {
    for (int i = 0, j = 0; i < N; i++, j++)
    {
        if (i != *(ptodelete + i))

            *(p2arr + j) = *(parr + i);
        else
            j--;

    }

}
int SUM(int index_min, int index_max, int* parr) {
    int sum = 0;

    if (index_min < index_max)
        for (int i = index_min + 1; i < index_max; i++) {

            sum = sum + *(parr + i);
        }
    if (index_min > index_max)
        for (int i = index_max + 1; i < index_min; i++) {

            sum = sum + *(parr + i);
        }
    return sum;
}