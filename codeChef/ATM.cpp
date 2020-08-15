#include<iostream>
#include<iomanip>
using namespace std;


class trans{
	private:
		float accBalance;
	public:
	trans(){
	
		accBalance=2000;
	}
	trans(float accBalance){
		this->accBalance=accBalance;
	}


	void withdraw(){
		int bal;
		cin>>bal;
		cout<<bal<<" "<<setprecision(6)<<accBalance<<endl;
		if(bal%5==0){
			accBalance=accBalance-bal-0.5;

			cout<<fixed<<std::setprecision(6)<<accBalance<<endl;
		}
		else if(bal%5!=0){
			cout<<setprecision(6)<<accBalance<<endl;
		}
		else{
			cout<<"Insufficent Funds :"<<endl;
			cout<<fixed<<std::setprecision(6)<<accBalance<<endl;
		}
	}
	};


int main(){
	trans t;

	t.withdraw();

}

