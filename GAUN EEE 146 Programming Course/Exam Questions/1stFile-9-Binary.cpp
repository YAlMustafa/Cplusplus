#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int bin, binCopy, dec=0;
	cout<<"Enter A Binary Number:\n";
	cin>>bin;
	binCopy=bin;
	int i=0;
	while(bin>0){
		int lsd=bin%10;
		bin/=10;
		cout<<lsd<<"*"<<pow(2,i);
		if(bin>0) cout<<" + ";
		i++;
	}
	
	cout<<" = ";
	
	i=0;
	bin=binCopy;
	while(bin>0){
		int lsd=bin%10;
		bin/=10;
		dec+=lsd*pow(2,i);
		cout<<lsd*pow(2,i);
		if(bin>0) cout<<" + ";
		i++;
	}
	cout<<" = "<<dec;
	
	return 0;
}
