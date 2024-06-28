#include<bits/stdc++.h>
long long RemovingData(int m,int n){
	if(n==0){
		return m;
	}
	else{
		return RemovingData(n,m%n);
	}
}
using namespace std;
int main(){
	int m,n;
	cin>>n>>m;
	cout<<RemovingData(m,n)<<endl;
	return 0;
}
