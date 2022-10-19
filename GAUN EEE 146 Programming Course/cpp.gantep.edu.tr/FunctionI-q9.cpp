/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Functions I
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=5

9. Write a boolean type function called bool isPrime(unsigned n) that returns true if n is a prime number or returns false otherwise.
Hint: you can use the algorithm defined at: Sieve of Eratosthenes.
*/

#include <iostream>
using namespace std;

bool isPrime(unsigned x){
	for(int i=2;i<x ;i++)
		if(x%i==0) return 0;
	return 1;
}
int main(){
	int x;
	cout<<"Please enter an integer:\n";
	cin>>x;
	if(isPrime(x))
		cout<<"It is Prime"<<endl;
	else
		cout<<"It is not Prime"<<endl;
	
	return 0;
}
