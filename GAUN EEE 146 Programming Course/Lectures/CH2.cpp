#include <iostream>

using namespace std;

int main(){
	cout<<"Enter The Lengths:\n";
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a-b<0){
		int x=a;
		a=b;
		b=x;
	}
	
	if(a==b&&a==c)
		cout<<"It Is A Equilateral Traingle";
	else if(a==b||a==c||b==c)
		cout<<"It Is A Isosceles Traingle";
	else{
		if(c<a+b){
			if(a-b<c)
				cout<<"It Is A Traingle";	
			else
				cout<<"It Is Not A Traingle";
		}else
			cout<<"It Is Not A Traingle";
	}
					
	
	return 0;
}
