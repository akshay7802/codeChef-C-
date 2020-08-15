#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	for(int i = 0;i < t; i++){
	    int a,digit = 0;
	    cin>>a;
	    while(a>=10){
	       digit += a%10;
	       a = a/10;
	         
	    }
	    if(a < 10){
	        digit += a;
	    }
	    cout<<digit<<endl;
	}
	return 0;
}
