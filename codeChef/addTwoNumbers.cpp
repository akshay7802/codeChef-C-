#include<iostream>
#include<vector>

using namespace std;


int main(){
	int n;

	cin>>n;
	vector <int > vec;
	for(int i=0;i<n;i++){
		int a;
		int b;
		cin>>a>>b;
		a+=b;
		vec.push_back(a);
	}

	for(auto x:vec){
	cout<<x<<endl;
	}
}

