// Lab_03_4.cpp
// ������� ³�����
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 0.7
#include <iostream>
using namespace std;
int main()
{
	double R; // ������� ��������
	double y; // ������� ��������

	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;
	// ������������ � ����� ����
if (( y <= -R && y >= R ) || ( y <= (R * R) && y >= -R && y <= 0 ) )
cout << "yes" << endl;
else
cout << "no" << endl;
cin.get();
return 0;
}