#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 3);
	if (a[0] + a[1] > a[2] && pow(a[0], 2) + pow(a[1], 2) > pow(a[2], 2))
	{
		cout << "ruijiao";
	}
	else if (a[0] + a[1] > a[2] && pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2))
	{
		cout << "zhijiao";
	}
	else if (a[0] + a[1] > a[2] && pow(a[0], 2) + pow(a[1], 2) < pow(a[2], 2))
	{
		cout << "dunjiao";
	}
	else
	{
		cout << "no";
	}
	return 0;
}
