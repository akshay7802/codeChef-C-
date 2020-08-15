#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main(){
	int n,x,y;
	vector<int > vec;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		cin>>y;
		int remainder=x%y;
		vec.push_back(remainder);
	}
	for(auto x:vec){
	cout<<x<<endl;
	}

}
