#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int a, b, c;
	a = n / 100;
	b = n % 100 / 10;
	c = n % 100 % 10;
	sum = n + 100 * c + 10 * b + a;
	cout << sum;
	return 0;
}
