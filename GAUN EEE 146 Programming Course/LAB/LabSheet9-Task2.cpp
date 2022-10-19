#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double mean(double a[], int n){
	double sum=0;
	for(int i=0; i<n; i++) sum+= a[i];
	return sum/n;
}
double average(double md1, double md2, double final){
	return md1*0.3+md2*0.3+final*0.4;
}
int getBestAverageIndex(double md1[], double md2[], double final[], int n){
	int best=0;
	for(int i=0; i<n; i++)
		if(average(md1[best], md2[best], final[best])<average(md1[i], md2[i], final[i]))
			best= i;
	return best;
}

int main(){
	string name[20];
	double md1[20], md2[20], final[20];
	ifstream myfile("student.txt");
	if(!myfile.is_open()){
		cout<<"The student.txt file can not be opened"<<endl;
	}
	else{
		for(int i=0; i<20; i++){
			myfile>>name[i];
			myfile>>md1[i];
			myfile>>md2[i];
			myfile>>final[i];			
		}
		
		cout<<"\t"<<"MidExam1"<<"\t"<<"MidExam2"<<"\t"<<"Final"<<endl;
		cout<<"Mean"<<"\t"<<mean(md1, 20)<<"\t\t"<<mean(md2, 20)<<"\t\t"<<mean(final, 20)<<"\n\n";
		
		int best= getBestAverageIndex(md1, md2, final, 20);
		cout<<"The Best Average:"<<average(md1[best], md2[best], final[best])<<endl;
		cout<<name[best]<<"\t"<<md1[best]<<"\t"<<md2[best]<<"\t"<<final[best]<<endl;
	}
	return 0;
}
