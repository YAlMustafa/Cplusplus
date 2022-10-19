#include <iostream>
using namespace std;

double dotProduct(double v[], double u[]){
	return v[0]*u[0]+v[1]*u[1]+v[2]*u[2];
}
int main()
{  
	double u[3], v[3];
	cout<<"Enter the values of V:"<<endl;
	for(int i=0; i<3; i++){
		cout<<"u"<<i<<" = ";
		cin>>u[i];
	}
	cout<<endl;
	for(int i=0; i<3; i++){
		cout<<"v"<<i<<" = ";
		cin>>v[i];
	}
	cout<<endl;
	cout<<"u.v = "<<dotProduct(u,v);
	   
	return 0;
}
