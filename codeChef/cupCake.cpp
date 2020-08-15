#include<iostream>
using namespace std;

int main(){
	int t,a;
//	cout<<"Enter test cases"<<endl;
	cin>>t;

	for(int i=0;i<t;i++){
//		cout<<"Enter packet  size"<<endl;
		cin>>a;
		int cc;
//		cout<<"Enetr cupcakes"<<endl;
		cin>>cc;
		int ans=cc-a;
		cout<<ans<<endl;
	}
}

