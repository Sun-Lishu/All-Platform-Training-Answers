#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		if (i == 1)
		{
			for (j = 1; j <= n; j++)
			{
				cout << "*";
			}
		}
		else
		{
			cout << "*";
			for (j = 1; j <= n + 2 * (i - 2); j++)
			{
				cout << " ";
			}
			cout << "*";
		}
		cout << endl;
	}
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		if (i == 1)
		{
			for (j = 1; j <= n; j++)
			{
				cout << "*";
			}
		}
		else
		{
			cout << "*";
			for (j = 1; j <= n + 2 * (i - 2); j++)
			{
				cout << " ";
			}
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
