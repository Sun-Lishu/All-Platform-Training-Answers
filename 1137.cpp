#include<bits/stdc++.h>
using  namespace  std;
bool sushu(int n) {
	if (n < 2) return false;
	if (n == 2 || n == 3) return true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	for (int i = 1000; i <= 3000; i++) {
		if (sushu(i % 10) && sushu(i % 100) && sushu(i % 1000) && sushu(i))
			cout << i << endl;
	}
	return 0;
}
