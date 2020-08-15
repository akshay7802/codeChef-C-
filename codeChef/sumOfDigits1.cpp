#include<iostream>
using namespace std;

int main(){
	int t,a,ans=0;

	//cout<<"Enter how many test cases"<<endl;
	cin>>t;

	for(int i=0;i<t;i++){
		//cout<<"ENter digits"<<endl;
		cin>>a;

		while(a>0){
			ans+=a%10;
			a=a/10;
		}

	}
	cout<<ans<<endl

}
