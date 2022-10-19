/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Arrays
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=7

10. Write a function (together with a main program) named int maxPos(double a[], int n)
	that returns the position of element of maximum value of the array a of size n.
*/

#include <iostream>
using namespace std;
int maxPos(double a[], int n){
	double result=0;
	for(int i=0; i<n; i++)
		if(a[i]>result)
			result=i;
	return result;
}
int main(){
	double a[100];
	int n;
	cout<<"Please enter the number of values: ";
	cin>>n;
	cout<<"Please enter the values:\n";
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<"The position of the maximum value of the array = "<<maxPos(a, n);
	
	return 0;
}
