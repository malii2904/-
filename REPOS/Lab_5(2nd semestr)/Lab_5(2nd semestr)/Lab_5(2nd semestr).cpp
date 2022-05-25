#include"5.h"

int main()
{           // name of arr its pointer on first el

    srand(time(NULL));

    int N;
    cout << "Enter array size:";
    cin >> N;
    int* arr = new int[N];
    int* todelete = new int[N];
    int* array = new int[N];

    srand(time(NULL));
    int d = 0;
    int* parr = arr;
    int* p2arr = array;

    int* ptodelete = todelete;

    int index_min = 0;
    int index_max = 0;
    printARR(N, parr);
    cout << "\n";
    int max = *parr;
    int min = *parr;

    for (int i = 0; i < N; i++)
    {
        if (*(parr + i) <= min) {
            min = *(parr + i);
            index_min = i;

        }
        if (*(arr + i) >= max) {
            max = *(parr + i);
            index_max = i;
        }
    }

    cout << "\n" << "INdex_Max=>" << index_max << endl;
    cout << "\n" << "INDEX_min=>" << index_min << endl;
    cout << endl;
    cout << "\n" << "Max=>" << max << endl;
    cout << "\n" << "min=>" << min << "\n" << endl;
    cout << "Sum of elements between the min and max:" << SUM(index_min, index_max, parr) << "\n" << endl;
    for (int i = 0; i < N; i++) {
        if (min == *(arr + i)) {

            d++;

            *(todelete + i) = i;

        }
    }
    newarr(todelete, p2arr, N, parr);

    cout << "NEW ARRAY:\n";
    for (int i = 0; i < N - d; i++)
    {
        cout << *(p2arr + i) << "  ";
    }
    delete[] arr;
    delete[] array;
    delete[]  todelete;
}