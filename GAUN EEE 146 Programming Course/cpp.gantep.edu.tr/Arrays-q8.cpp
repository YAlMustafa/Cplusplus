/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Arrays
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=7

8. Write a C++ function (together with a main program) named double norm(double a[], int n)
	that returns the norm (magnitude) of the vector A = (a1, a2, ... ,an). The norm is defined as |A|=sqrt(a1^2+a2^2+...+an^2)
*/

#include <iostream>
#include <cmath>
using namespace std;
double norm(double a[], int n){
	double result=0;
	for(int i=0; i<n; i++)
		result+= pow(a[i], 2);
	return sqrt(result);
}
int main(){
	double a[10];
	int n;
	cout<<"Please enter the number of dimensions of the vector: ";
	cin>>n;
	cout<<"Please enter the values:\n";
	for(int i=0; i<n; i++){
		cout<<"v"<<i<<" = ";
		cin>>a[i];
	}
	cout<<"The norm = "<<norm(a, n);
	
	return 0;
}
