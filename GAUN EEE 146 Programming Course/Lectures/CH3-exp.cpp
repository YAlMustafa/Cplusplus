#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	long double x, result=0;
	cout<<"Please Enter The Value of n:\n";
	cin>>n;
	cout<<"Please Enter The Value of x (e^x):\n";
	cin>>x;
	
	for(int i=0;i<=n;i++){
		int fac=1;
		if(i>1)
			for(int j=2;j<=i;j++)
				fac*=j;
		result+=pow(x,i)/fac;
	}	
	
	cout<<"e^"<<x<<" = "<<result;
	
	return 0;
}
