#include <iostream>
using namespace std;

int schillaci(int n){
	if(n==1) return 3;
	if(n==2) return 4;
	if(n >2) return schillaci(n-1)+schillaci(n-2);
}
int main(){
	int n;
	cout<<"Please enter an integer:\n";
	cin>>n;
	cout<<schillaci(n);
	
	return 0;
}
