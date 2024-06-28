#include<bits/stdc++.h>
using namespace std;
void CrackANumber(int n,int p){
	if(n==1){
		return ;
	}
	if(n>1){
		if(n%p==0){
			cout<<p ;
		}
		else cout<<" "<<p;
		CrackANumber()
	}
}
int main(){
	
	return 0;
}
