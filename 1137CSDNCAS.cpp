#include <iostream>
bool isnum(long long n)//����Ϊ0������Ϊ1
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
		int d = i % 1000 % 100 % 10;//isnum����ûд�ã����1�жϳ�����
		if (isnum(i) == 1 && isnum(i % 10) == 1 && isnum(i % 100) == 1 && isnum(i % 1000) == 1 && d != 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}
