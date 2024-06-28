#include<bits/stdc++.h>
using namespace std;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
char mine[110][110];
int sum[110][110] = {0};
int n, m, i, j, ni, nj, k = 0;
int main() {
	//cin >> n >> m;
	scanf("%d %d\n",&n,&m);
		for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			mine[i][j] = getchar();
		}
		getchar();
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (mine[i][j] == '?') {
				for (k = 0; k < 8; k++) {
					ni = i + dx[k];
					nj = j + dy[k];
					if (ni >= 0 && ni < n && nj >= 0 && nj < m && mine[ni][nj] == '*') {
						sum[i][j]++;
					}
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (mine[i][j] == '*') {
				putchar('*');
			} else {
				putchar(sum[i][j] + 48);
			}
		}
		putchar('\n');
	}
	return 0;
}
