/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Functions I
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=5

8. Write a function named bool isEven(int x) that returns true if x is an even number or false otherwise.
Hint: Use modulo operator (%). For example y = 1 for the operation y = x % 2 if x is an odd number.
*/

#include <iostream>
using namespace std;

bool isEven(int x){
	if(x%2==0)
		return 1;
	else
		return 0;
}
int main(){
	int x;
	cout<<"Please enter an integer:\n";
	cin>>x;
	if(isEven(x))
		cout<<"It is even"<<endl;
	else
		cout<<"It is odd"<<endl;
	
	return 0;
}
