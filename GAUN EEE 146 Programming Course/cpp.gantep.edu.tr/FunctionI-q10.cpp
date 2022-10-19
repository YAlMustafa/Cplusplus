/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Functions I
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=5

10. In mathematics the Stirling's approximation (or Stirling's formula) is an approximation for large factorials.
	The formula is written as: [PHOTO OF FORMULA]
	Write a function named sfact(n) to calculate n! according to Stirling approximation.
	Note that return value of the function must be float or double since the formula generates real values.
*/

#include <iostream>
#include <cmath>
using namespace std;

double sfact(int n){
	return sqrt(2*M_PI*n)*pow(n/M_E,n);
}
int main(){
	int n;
	cout<<"Please enter an integer:\n";
	cin>>n;
	cout<<sfact(n);
	
	return 0;
}
