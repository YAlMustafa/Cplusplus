#include <iostream>

using namespace std;

int main(){
	double hRate, hours, overtime=0;
	cout<<"Enter The Hourly Rate:\n";
	cin>>hRate;
	cout<<"Enter The Number of Hours Worked:\n";
	cin>>hours;
	
	if(hours>40)
		overtime=hours-40;			
	cout<<"Sum of Hours Worked: "<<hours<<endl;
	cout<<"Overtime Hours: "<<overtime<<endl;
	cout<<"Regular Salary: "<<hours*hRate<<endl;
	cout<<"Overtime Salary: "<<hRate*0.5*overtime<<endl;	
	cout<<"Gross Salary: "<<hours*hRate+hRate*0.5*overtime<<endl;
	
	return 0;
}
