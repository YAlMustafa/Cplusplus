#include <iostream>
#include <cmath>
using namespace std;

double calWCF(double temp, double speed){
	return 35.3 + 0.6 * temp - 35.7 * pow(speed, 0.17) + 0.43 * temp * pow(speed, 0.16);
}

int main(){
	cout << "Temperature\\Wind Speed\t";
	for(int i = 0; i <= 55; i+= 5) cout << i << "\t";
	cout<<endl;
	cout.precision(3);
	for(int temp = -20; temp <= 55; temp+= 5){
		cout<<temp<<"\t\t\t";
		for(int speed = 0; speed <= 55; speed+= 5){
			cout<<calWCF(temp, speed)<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}//Y.M.
