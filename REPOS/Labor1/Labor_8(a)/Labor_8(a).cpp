

#include <iostream> 
#include <math.h> 
#include <iomanip> 
#include <ctime> 
#include <string> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int arr_1[6];
    int arr_2[6];
    int i = 0;
    int b = 0;
    int all_plc = 0;
    int smoke = 0;
    string a;
    int nosmoke = 0;
    сout << "Вы курите?" << endl;
      for (int i = 0; ;)
    {
        cout << "Вы курите? ";
        cin >> a;
        if (a == "да" && smoke < 5)
        {
            i++;
            arr_1[i] = i;
            smoke= arr_1[i];
            cout << "Ваше место:" << smoke << endl;
            int all_places = i + b;
            if (all_places == 10)
            {
                cout << "Места закончились" << endl;
                break;
            }
            continue;
        }
        if (a == "no" && nosmoke < 10)
        {
            b++;
            arr_2[b] = b + 5;
            nosmoke = arr_2[b];
            cout << "Ваше место:" << nosmoke << endl;
            int all_places = i + b;
            if (all_places == 10)
            {
                cout << "Места закончились" << endl;
                break;
            }
            continue;
        }

    }
    return 0;
}