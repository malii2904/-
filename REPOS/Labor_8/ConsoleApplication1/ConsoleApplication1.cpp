
/* #include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int N = 12, a(0);// N - количество элементов
	int A[12];
	for (int i = 0; i < N; i++) cin >> A[i];//заполнение масива
	for (int i = 0; i < 100; i++) //сам переворот массива
	{
		a = A[i];
		A[i] = A[N - i - 1];
		A[N - i - 1] = a;
	}
	for (int i = 0; i < N; i++) cout << A[i] << "; ";
	
	return 0;
 */



#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>
using namespace std;



int main() {
	setlocale(LC_ALL, "Rus");
	int mass[100];
	cout << "Начальный массив:" << endl;
	for (int i = 0; i < 100; i++) {
		mass[i] = rand() % 100 - 50;
		cout <<setw(5)<< mass[i] <<""<< endl;
	}






}

   
        