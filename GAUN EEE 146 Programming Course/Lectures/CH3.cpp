#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long double x, result=0;
	cout<<"Please Enter A Value Of A Angel In Degree:\n";
	cin>>x;
	
	x=(M_PI/180)*x;
	
	for(int i=0; i<=20; i++){
		double fac=1;
		for(int j=1;j<=2*i+1;j++){
			fac*=j;
		}
		result+=pow(-1,i)*pow(x,i+1)/fac;
	}
	
	cout<<result<<endl;
	cout<<sin(x)<<endl;
	
	return 0;
}
