#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<double> caly(double timeConstent, double begr, double endr, double step){
	if(begr>endr) swap(begr,endr);
	vector<double> vec;
	for(double i=begr; i<=endr; i+=step){
		vec.push_back(exp(-i*timeConstent));
	}
	return vec;
}

int main(){
	double tc1,tc2;
	cout<<"Enter the values of two Time Constent :\nT1 = ";
	cin>>tc1;
	cout<<"T2 = ";
	cin>>tc2;
	
	int t1,t2;
	cout<<"Enter beginning range of time : ";
	cin>>t1;
	cout<<"Enter ending range of time : ";
	cin>>t2;
	
	vector<double> rtc1 = caly(tc1, t1, t2, 1);
	vector<double> rtc2 = caly(tc2, t1, t2, 1);
	
	cout<<"\t\tTime Constent = " << tc1 << "\t\tTime Constent = " << tc2 << "\n";
	for(int i= 0; i<rtc1.size(); i++){
		cout<<"t = "<<t1+i<<"|\t\t"<<rtc1[i]<<"\t\t\t"<<rtc2[i]<<endl;
	}
	
	return 0;
}//Y.M.
