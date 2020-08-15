#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t,a,ans,count1=0;
	cout<<"How many test cases"<<endl;
	cin>>t;
	vector <int > vec={};
	for(int i=0;i<t;i++){
		cout<<"Enter no"<<endl;
		cin>>a;

		while(a>0){
			ans=a%10;
			vec.push_back(ans);
			a=a/10;	
		}
	int search=4;
	cout<<count(vec.begin(),vec.end(),search)<<endl;
	}
}
