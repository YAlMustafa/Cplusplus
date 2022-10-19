#include <iostream>
using namespace std;

int main(){
	int n,result;
	cout<<"Please Enter An Integer:\n";
	cin>>n;
	if(n==1)
		result=3;
	else if(n==2)
		result=4;
	else{
		int lastn=3;
		result=4;
		for(int i=3;i<=n;i++){
			int s=lastn;
			lastn=result;
			result=lastn+s;
		}
	}
	cout<<result;
	
	return 0;
}
