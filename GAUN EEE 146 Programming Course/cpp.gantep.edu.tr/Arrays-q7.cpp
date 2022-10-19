/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Arrays
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=7

7. Write a program to perform the following tasks:
	Declare an integer array x of size n = 100.
	Input number of data m < n required.
	Input the data (i.e. read the first m elements of x)
	Output the sum of even and odd elements separately.
*/

#include <iostream>
using namespace std;
int main(){
	const int n=100;
	int x[n];
	int m;
	
	cout<<"Please Enter An Integer\n";
	cin>>m;
	
	if(m>n)
		cout<<"Error: The entered number must be equal or smaller than 100.\n";
	else{
		cout<<"Please Enter Data:\n";
		for(int i=0;i<m;i++)
			cin>>x[i];
		int odd=0, even=0;
		for(int i=0; i<m; i++){
			if(x[i]%2==0)
				even+=x[i];
			else
				odd+=x[i];
		}
		cout<<"The sum of odd numbers is "<<odd<<endl;
		cout<<"The sum of even numbers is "<<even<<endl;
	}	
	
	return 0;
}
