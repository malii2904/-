#include"5.h"

void ZErkmatrix(int rows, int cols, int** arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (j < cols / 2) {
                *(*(arr + i) + j) = *(*(arr + i) + cols - j - 1);      // arr[i][j] = arr[i][cols - j - 1]
            }
            cout << *(*(arr + i) + j) << '\t';
        }
        cout << '\n';
    }
}

void OdnomerkakDvumer(int rows, int cols, int* arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (j < cols / 2) {
                *(arr + i * cols + j) = *(arr + i * cols + cols - j - 1);
            }
            cout << *(arr + i * cols + j) << '\t';
        }
        cout << '\n';
    }
}
