#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int num = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			num *= j;
		}
		sum += num;
		num = 1;
	}
	cout << sum;
	return 0;
}
