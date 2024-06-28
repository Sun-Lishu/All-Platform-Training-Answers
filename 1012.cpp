#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	string str1;
	string str2;
	int num1 = 0;
	int word_number = 1;
	int nearest = 9999;
	int num2 = 0;//记录空格个数
	getline(cin, str1);
	getline(cin, str2);//这两个用来接收字符串
	str2 = " " + str2 ;//最重点！！在前面添加空格证明是单词，不然this中的is会被误判
	int a = str1.find(str2);//找到匹配的位置
	if (a >= 0)
	{
		for (int i = 0; i < str1.size(); i++)
		{
			if (str1[i] == ' ')
			{
				num2++;
				if (abs(i - a) < nearest)
				{
					nearest = abs(i - a);//空格离单词最近
					if (nearest == 0)
					{
						break;//0就是最近，不可能更小，直接break跳出循环
					}
				}
			}
		}
		cout << num2 + 1;//单词是空格个数的下一个，所以加一
	}
	else if (a < 0)
	{
		for (int i = 0; i < str1.size(); i++)
		{
			if ((str1[i] > 64 && str1[i] < 91) || (str1[i] > 96 && str1[i] < 123))//ASCII码中字母对应的值
			{
				num1++;
			}
		}
		cout << num1;
	}
	return 0;
}
