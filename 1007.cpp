#include <iostream>
using namespace std;
int main()
{
	char a[80];
	int num = 0;
	int num2 = 0;
	for (int i = 0; i < 80; i++)
	{
		cin >> a[i];
		num++;
		if (a[i] == '.')
		{
			break;
		}
	}
	for (int i = 0; i < num; i++)
	{
		if ((int)a[i] >= 65 && (int)a[i] <= 90)
		{
			num2++;
		}
	}
	cout << num2;
	return 0;
}
