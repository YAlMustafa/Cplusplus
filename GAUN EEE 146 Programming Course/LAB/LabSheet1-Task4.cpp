#include <iostream>
using namespace std;

int main(){
	a:
	///////////////////////////////////////////	
	int m,n;
	cout<<"Enter two integer values:"<<endl;
	cin>>m;
	cin>>n;
	
	if(n>m){
		int x=n;
		n=m;
		m=x;
	}
	
	cout<<"\nPythagorean Triple are:\n";
	cout<<m*m-n*n<<", "<<2*m*n<<", "<<m*m+n*n;
	
	
	//To Repaet The Program
	cout<<"\n\n\nPlease Type 1 To Repeat Again\n";
	int repeatC;
	cin>>repeatC;
	cout<<"\n\n\n";
	if(repeatC==1)goto a;
	return 0;
}
