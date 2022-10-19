#include <iostream>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main(){
	int n;
	cout<<"Please Enter An Integer:\n";
	cin>>n;
	cout<<(isPrime(n)?"Yes":"No");
	
	return 0;
}
