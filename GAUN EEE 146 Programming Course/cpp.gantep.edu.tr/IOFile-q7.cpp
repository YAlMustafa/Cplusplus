/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Formatted I/O and File Processing
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=9

7.Write a program that outputs to a file called numbers.dat the integer numbers 1 to 100 and their square-roots.
	The output should be formatted as illustrated below.
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	ofstream myfile("SquareRoot.txt");
	if(myfile.is_open()){
		for(int i=1; i<=100; i++){
			myfile<<setw(3)<<i<<"\t"<<setprecision(4)<<sqrt(i)<<endl;
		}
	}
	else
		cout<<"The file can be opened"<<endl;
	myfile.close();			
	return 0;
}
