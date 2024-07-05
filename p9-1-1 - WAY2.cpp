#include<iostream>
using namespace std;
int main() {
	int n, ans = 0, i = 0;
	char s[32];
	scanf("%d\n", &n);
	while ((s[i] = getchar()) != '\n') {
		ans = ans * n + (s[i] - 48);
		i++;
	}
	printf("%d\n", ans);
	return 0;
}
