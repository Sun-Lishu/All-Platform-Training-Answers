#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 6 * n - 3; j++)
		{
			if ((j >n-i && j < n+i) || (j > 3*n-i-1 && j < 3*n+i-1) || (j > 5 * n - i - 2 && j < 5 * n + i-2))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
