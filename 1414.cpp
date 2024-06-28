#include<bits/stdc++.h>
using namespace std;
struct Displaying{
	int Leaning_Number;
	string Learning_Name;
	int score;
};
const int MAXN=200;
bool Comparing_Stu(Displaying a,Displaying b){
	if(a.score==b.score){
		return a.Leaning_Number<b.Leaning_Number;
	}
	else{
		return a.Leaning_Number>b.Leaning_Number;
	}
}
int main(){
	int n;
	cin>>n;
	vector<Displaying> OfferStu(n);
	for(int i=0;i<n;i++){
		cin>>OfferStu[i].Leaning_Number>>OfferStu[i].Learning_Name>>OfferStu[i].score;
	}
	sort(OfferStu.begin(),OfferStu.end(),Comparing_Stu());
	for(int i=0;i<=0;i++){
		//TODO
	}
	return 0;
}
