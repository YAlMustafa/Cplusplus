#include <iostream>
#include <cmath>
using namespace std;

double power(double b, double p){
	return exp(p*log(b));
}

int main(){
	double b,p;
	cout<<"Enter The Base:\n";
	cin>>b;
	cout<<"Enter The Power:\n";
	cin>>p;
	cout<<power(b,p);	
	return 0;
}
