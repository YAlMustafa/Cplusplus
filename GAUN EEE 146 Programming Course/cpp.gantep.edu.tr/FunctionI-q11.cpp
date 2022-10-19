/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Functions I
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=5

11. Write a main program that uses the functions fact(n) (defined in section 5.7) and sfact(n)
(defined in the previous exercise), to compare the factorial of n = 0, 1, 2, ..., 10 by outputting
the values of these functions. The output of the program should look something like this:
*/

#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
	if(n==0) return 1;
	int result=1;
	for(int i=2; i<=n; i++)
		result*=i;
	return result;
}
double sfact(int n){
	return sqrt(2*M_PI*n)*pow(n/M_E,n);
}
int main(){
	int r;
	cout<<"Please enter an integer:\n";
	cin>>r;
	cout<<"n\t\tfact(n)\t\tsfact(n)\n";
	cout<<"===\t\t===\t\t===\n";
	for(int i=0; i<=r; i++){
		cout<<i<<"\t\t"<<fact(i)<<"\t\t"<<sfact(i)<<endl;
	}
		
	return 0;
}
