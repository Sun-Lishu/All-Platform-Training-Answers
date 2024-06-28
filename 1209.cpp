#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s=2*n+1;
	int a[s][s];
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			cout<<setw(2)<<max(abs(n-j),abs(n-i));
		}
		cout<<endl;
	}
	return 0;
}
