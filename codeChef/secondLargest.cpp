#include<iostream>
#include<vector>
using namespace std;

int main(){
	//vector <int > vec;

	int t,ans,a;
	cout<<"test cases"<<endl;
	cin>>t;

	for(int i=0;i<3;i++){
		vector <int > vec;
		cout<<"how many no."<<endl;
		cin>>a;
		for(int j=0;i<a;i++)
		{
		cout<<"Enter numbers"<<endl;
		cin>>ans;
		vec.push_back(ans);
		sort(vec.begin(),vec.end());
		reverse(vec.begin(),vec.end());
		}
	
	
	  cout<<vec[1]<<endl;
	  continue;
}
}
