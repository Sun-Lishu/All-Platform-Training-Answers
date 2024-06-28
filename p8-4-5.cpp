#include<bits/stdc++.h>
using namespace std;
struct tsutudent {
	int num;
	char name[20];
	char sex;
	int age;
};
int main() {
	tsutudent x = {13, "lihao", 'm', 35};
	tsutudent*p;
	p=&x;
	cout<<x.num<<endl;
	cout<<(*p).name<<endl;
	cout<<p->age<<endl;
	return 0;
}
