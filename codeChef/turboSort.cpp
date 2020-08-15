#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int > vec;
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		vec.push_back(no);
	}
//first use STL sort() fun and then loop for display;
	sort(vec.begin(),vec.end());
	for(auto x:vec){
	cout<<x<<endl;
	}
}
