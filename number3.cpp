#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	char str[50], temp;

	int i, j, cnt=0;

	cout << "enter an array: ";
	gets_s(str);

	j = strlen(str) - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp; 
	}

	cout << " " << endl;
	cout << "reversed array: " << str << endl << endl;

	for (int i = 0; str[i]; i++)
	{
		cnt++;
	}

	cout << "size of array: " << cnt << endl;

	_getch();
	return 0;
}