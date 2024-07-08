#include<bits/stdc++.h>
using namespace std;
int n;
int jz = 2;
string ch(int n) {
	string a = "";
	while (n) {
		a = char(n % 2 + 48) + a;
		n /= 2;
	}
	return a;
}
int main() {
	cin >> n;
	if (n == 0) {
		cout << "0" << endl;
	} else {
		cout << ch(n) << endl;
	}
	return 0;
}
