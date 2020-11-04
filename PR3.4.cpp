// Lab_03_4.cpp
// Обухова Віктора
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.7
#include <iostream>
using namespace std;
int main()
{
	double R; // вхідний аргумент
	double y; // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
if (( y <= -R && y >= R ) || ( y <= (R * R) && y >= -R && y <= 0 ) )
cout << "yes" << endl;
else
cout << "no" << endl;
cin.get();
return 0;
}