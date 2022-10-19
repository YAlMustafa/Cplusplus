/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Functions I
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=5

6.Write a function named double perimeter(double r) which returns the circumference of a circle of radius r.
*/

#include <iostream>
#include <cmath>
using namespace std;

double perimeter(double r){
	return 2*M_PI*r;
}
int main(){
	double r;
	cout<<"Please enter the value of r:\n";
	cin>>r;
	cout<<"The Circumstanse = "<<perimeter(r)<<endl;
	
	return 0;
}
