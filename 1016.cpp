#include <iostream>
using namespace std;
int main()
{
	int X, A, B;
	cin >> X >> A >> B;
	int num = 0;
	for (int i = 1; i <X/A+1; i++)
	{
		for (int j = 1; j <=X/B+1; j++)
		{
			if (i * A + j * B == X)
			{
				num++;
			}
		}
	}
	cout<<                                                                                     num;
	return 0;
}
