#include <iostream>
using namespace std;

int gcd(int x, int y){
	if(x<y){
		int s=x;
		x=y;
		y=s;
	}
	if(y!=0)
		return gcd(x-y,y);
	else
		return x;
}

int main(){
	double x,y;
	cout<<"Enter Two Integer Numbers:\n";
	cin>>x>>y;
	cout<<"The Greatest Common Divisor : "<<gcd(x,y);	
	return 0;
}
