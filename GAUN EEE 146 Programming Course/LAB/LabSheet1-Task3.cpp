#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Please enter number of days:\n";
	cin>>n;
	cout<<n/360<<" Year(s). ";
	n%=360;
	cout<<n/30<<" Month(s). ";
	n%=30;
	cout<<n<<" Day(s). ";
	
	return 0;
}
