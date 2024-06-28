#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[] = {10, 11, 12, 13, 14, 15};
	int *p = a + 4;
	cout << *a;
	cout << " " << *(a + 3);
	cout << " " << *(++p) << endl;
	return 0;
}
