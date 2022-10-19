/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Arrays
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=7

11. Modify Program 7.8 such that it also outputs the angle in degrees between two vectors by means of a function called dotProd().
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
double dotProd(double v1[], double v2[], int n){
	double result=0;
	for(int i=0; i<n; i++)
		result+= v1[i]*v2[i];
	return result;
}
int main(){
	double v[10], u[10];
	int n;
	cout<<"Please enter the number of dimensions of the vectors: ";
	cin>>n;
	cout<<"Please enter the values of vector V:\n";
	for(int i=0; i<n; i++){
		cout<<"v"<<i<<" = ";
		cin>>v[i];
	}
	cout<<"Please enter the values of vector U:\n";
	for(int i=0; i<n; i++){
		cout<<"u"<<i<<" = ";
		cin>>u[i];
	}
	cout<<"The degeree between V and U = "<<acos(dotProd(v, u, n)/(norm(v, n)*norm(u, n)))/M_PI*180<<"deg";
	
	return 0;
}
