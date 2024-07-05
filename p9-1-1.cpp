#include<bits/stdc++.h>
using namespace std;
int main() {
	int HEXORDECOROCTORBIN;
	string Emount;
	cin >> HEXORDECOROCTORBIN >> Emount;
	int quan = 1;
	int S = 0;
	for (int i = Emount.size() - 1; i >= 0; i--) {
		S += quan * int(Emount[i] - 48);
		quan *= HEXORDECOROCTORBIN;
	}
	cout << S << endl;
	return 0;
}
