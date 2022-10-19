#include <iostream>

using namespace std;

int calculate(int input){
	if(input>=1&&input<=13){
		int result=1;
		for(int i=1; i<input;i++){
			result*=i;
		}
		return result;
	}
	else if(input<=0){
		return -1;
	}
	else if(input>13){
		return -2;
	}
}

int main(){
	cout<<"Enter An Integer Number:\n";
	int x;
	cin>>x;
	cout<<calculate(x);
	return 0;
}
