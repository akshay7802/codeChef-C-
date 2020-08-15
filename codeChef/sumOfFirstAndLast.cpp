#include<iostream>
#include<vector>

using namespace std;
int main(){
	int last,first,a,t;

	cout<<"how many test cases"<<endl;
	cin>>t;
	for(int i=0;i<t;i++){
		cout<<"Enter number"<<endl;
		cin>>a;
		last=a%10;
		while(a>0){
			first=a%10;
			a=a/10;
		}
		first+=last;
	}
	cout<<first<<endl;
}
