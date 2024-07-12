#include <iostream>
//so,wtf
using namespace std;
int x[1100];
int y[1100];
int main() {
	string a;
	string b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		x[i] = a[a.size() - 1 - i] - 48;
	}
	for (int i = 0; i < b.size(); i++) {
		y[i] = b[b.size() - 1 - i] - 48;
	}
	int l;
	l = max(a.size(), b.size());
	for (int i = 0; i < l; i++) {
		x[i] += y[i];
		x[i + 1] += x[i] / 10;
		x[i] %= 10;
	}
	if (x[l] > 0 || x[l] != 0) {
		l++;
	}
	for (int i = l - 1; i >= 0; i--) {
		cout << x[i];
	}
	return 0;
}
