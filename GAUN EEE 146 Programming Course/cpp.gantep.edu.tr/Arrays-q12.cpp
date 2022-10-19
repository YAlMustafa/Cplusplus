/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Arrays
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=7

12. Write a void function named void crossProd(double a[], double b[], double c[]) which assigns
	the result of cross product of the vector A and B to vector C (C = A x B). Here, vector sizes
	must be 3 for these three vectors.
*/

#include <iostream>
using namespace std;
void crossProd(double a[], double b[], double c[]){
	c[0]=a[1]*b[2]-a[2]*b[1];
	c[1]=a[2]*b[0]-a[0]*b[2];
	c[2]=a[0]*b[1]-a[1]*b[0];
}
int main(){
	double A[3], B[3], C[3];
	cout<<"Please enter the values of vector A:\n";
	for(int i=0; i<3; i++){
		cout<<"a"<<i<<" = ";
		cin>>A[i];
	}
	cout<<"Please enter the values of vector B:\n";
	for(int i=0; i<3; i++){
		cout<<"b"<<i<<" = ";
		cin>>B[i];
	}
	
	crossProd(A,B,C);
	cout<<"AxB = C = ";
	cout<<"("<<C[0]<<")i + ";
	cout<<"("<<C[1]<<")j + ";
	cout<<"("<<C[2]<<")k";
	
	return 0;
}
