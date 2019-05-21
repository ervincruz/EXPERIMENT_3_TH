#include <iostream>
#include <conio.h>

using namespace std;

const int week = 7;
const int prov = 3;
char p;

int main()
{
	int temp[prov][week];

	cout << "enter weekly temperature for province A , B , and C";

	for (int i = 0; i < prov; i++)
	{
		for (int j = 0; j < week; ++j)
		{
			if (i == 0) p = 'A';
			else if (i == 1) p = 'B';
			else p = 'C';

			cout << "\nProvince: " << p << ", Day: " << j + 1 << " : ";
			cin >> temp[i][j];
		}
	}

	cout << "\ndisplaying values: \n";

	for (int i = 0; i < prov; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			cout << "province: " << p << ", day: " << j + 1 << " = " << temp[i][j] << endl;
		}
	}
	_getch();
	return 0;
}
