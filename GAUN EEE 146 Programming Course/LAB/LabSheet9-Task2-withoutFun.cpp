#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string name[20];
	double md1[20], md2[20], final[20];
	double sum1=0, sum2=0, sumf=0;
	ifstream myfile("student.txt");
	if(!myfile.is_open()){
		cout<<"The student.txt file can not be opened"<<endl;
	}
	else{
		double avg, bestAvg=-1;
		int best=0;
		for(int i=0; i<20; i++){
			myfile>>name[i];
			myfile>>md1[i];
			myfile>>md2[i];
			myfile>>final[i];
			//sum
			sum1+= md1[i];
			sum2+= md2[i];
			sumf+= final[i];
			//average
			avg=md1[i]*0.3+md2[i]*0.3+final[i]*0.4;
			//best student
			if(bestAvg<avg){
				best=i;
				bestAvg=avg;
			}		
		}		
		cout<<"\t"<<"MidExam1"<<"\t"<<"MidExam2"<<"\t"<<"Final"<<endl;
		cout<<"Mean"<<"\t"<<sum1/20<<"\t\t"<<sum2/20<<"\t\t"<<sumf/20<<"\n\n";
		
		cout<<"The Best Average:"<<bestAvg<<endl;
		cout<<name[best]<<"\t"<<md1[best]<<"\t"<<md2[best]<<"\t"<<final[best]<<endl;
	}
	return 0;
}
