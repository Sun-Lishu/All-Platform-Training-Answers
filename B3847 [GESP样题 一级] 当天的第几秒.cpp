#include<bits/stdc++.h>
using namespace std;
int SecondFlowing(int hrs, int mins, int secs) {
	int TrasferedMins = mins * 60;
	return hrs * 3600 + TrasferedMins + secs;
}
int main() {
	int hrs, mins, secs;
	char c;
	cin >> hrs >> mins >> secs >> c;
	if (c == 'A') {
		cout << SecondFlowing(hrs, mins, secs);
	} else {
		cout << SecondFlowing(hrs + 12, mins, secs);
	}
	return 0;
}
