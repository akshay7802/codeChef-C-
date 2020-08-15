#include<iostream>
#include<vector>

using namespace std;


int main(){
	int count=0, numbers,divide;

	cin>>numbers;

	cin>>divide;

	vector<int > ivec;

	for(int i=0;i<numbers;i++){
	
		int n;
		cin>>n;
		ivec.push_back(n);
	}
	for(int j=0;j<numbers;j++){	
		if(ivec[j]%divide==0)
		{
			
			count+=1;
		}
	
	}
	cout<<count<<endl;

	
}
