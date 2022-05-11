
#include "2.h"
#include "struct.h"
int main(void) {
    setlocale(LC_ALL, "Rus");
    Progr mm[7];
    while (true) {
       
#ifdef PRINT_TYPE
        Input(mm); 
#else
       
            Random(mm);
#endif
            cout << "Выберите действие" << endl;
            cout << "(1)печать" << endl;
            cout << "(2)сортировка" << endl;
            int otv;
            cin >> otv;
            if (otv == 1) {
                Print(mm);
            }
            if (otv == 2) {
                Sort(mm);
            }
      
    }
    return 0;
}