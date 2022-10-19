#include <iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"Enter Non-negative Integer X";
	cin>>x;
	cout<<"Enter Non-negative Integer Y";
	cin>>y;
	
	if(x==0){
		cout<<"X is a multiple of y.";
	}
	else if(y==0){
		cout<<"X is not a multiple of y.";
	}
	else if(x<y){
		cout<<"X is not a multiple of y.";
	}
	else{
		do{
			x-=y;
		}while(x>=y);
		if(x==0){
			cout<<"X is a multiple of y.";
		}
		else{
			cout<<"X is not a multiple of y.";
		}
	}
	
	return 0;
}
