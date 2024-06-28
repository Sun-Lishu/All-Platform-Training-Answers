#include <iostream>
bool isnum(long long n)//合数为0，质数为1
{
	long long j;
	for (j = 2; j * j <= n; j++)
	{
		if (n % j == 0)
		{
			return false;
		}
	}
	return true;
}
using namespace std;
int main()
{
	for (int i = 1000; i <= 3000; i++)
	{
		int d = i % 1000 % 100 % 10;//isnum函数没写好，会把1判断成质数
		if (isnum(i) == 1 && isnum(i % 10) == 1 && isnum(i % 100) == 1 && isnum(i % 1000) == 1 && d != 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}
