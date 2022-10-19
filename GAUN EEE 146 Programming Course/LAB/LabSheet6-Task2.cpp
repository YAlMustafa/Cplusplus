#include <iostream>
using namespace std;
bool isPalindrome(char str[],int n){
	for(int i=0;i<=n/2;i++)
		if(str[i]!=str[n-1-i])
			return 0;
	return 1;
}
int main(){
	int n;
	cout<<"Please enter the number characters:\n";
	cin>>n;
	char str[n];
	cout<<"Please enter the characters:\n";
	cin>>str;
	cout<<(isPalindrome(str,n)?"Yes":"No");
	return 0;
}
