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
	int num2 = 0;//��¼�ո����
	getline(cin, str1);
	getline(cin, str2);//���������������ַ���
	str2 = " " + str2 ;//���ص㣡����ǰ����ӿո�֤���ǵ��ʣ���Ȼthis�е�is�ᱻ����
	int a = str1.find(str2);//�ҵ�ƥ���λ��
	if (a >= 0)
	{
		for (int i = 0; i < str1.size(); i++)
		{
			if (str1[i] == ' ')
			{
				num2++;
				if (abs(i - a) < nearest)
				{
					nearest = abs(i - a);//�ո��뵥�����
					if (nearest == 0)
					{
						break;//0��������������ܸ�С��ֱ��break����ѭ��
					}
				}
			}
		}
		cout << num2 + 1;//�����ǿո��������һ�������Լ�һ
	}
	else if (a < 0)
	{
		for (int i = 0; i < str1.size(); i++)
		{
			if ((str1[i] > 64 && str1[i] < 91) || (str1[i] > 96 && str1[i] < 123))//ASCII������ĸ��Ӧ��ֵ
			{
				num1++;
			}
		}
		cout << num1;
	}
	return 0;
}
