#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i, num, f, g[1000010], lft, mid, rgt;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> g[i];
	}
	cin >> num;
	f = -1;
	lft = 1;
	rgt = n;
	while (lft <= rgt) {
		mid = (lft + rgt) / 2;
		if (g[mid] == num) {
			f = mid;
			break;
		}
		if (g[mid] > num) {
			rgt = mid - 1;
		}
		if (g[mid] < num) {
			lft = mid + 1;
		}
	}
	cout << f;
	return 0;
}
