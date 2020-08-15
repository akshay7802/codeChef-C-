#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t,a,ans;
	bool leadingZero=true;
	//cout<<"Enter test cases"<<endl;
	cin>>t;
	for(int i=0;i<t;i++){
		//cout<<"Enter a :"<<endl;
		cin>>a;

		while(a>0){
			if(a%10==0 && leadingZero){
				a/=10;
				continue;
			}

			//leadingZero=false;
			ans=a%10;
			cout<<ans;
			a/=10;
		}
		cout<<endl;
	}
}
