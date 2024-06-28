#include <iostream>
using namespace std;
int main()
{
	int t, x;
	for (int i = 100007; i < 999999; i += 10)
	{
		int t = i / 10;
		int x = 700000 + t;
		if (x % i == 0 && x / i == 4)
		{
			cout << i;
		}
	}
	return 0;
}
