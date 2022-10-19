/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Functions II
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=6

5. Write a recursive function called unsigned fib(unsigned n) that returns the n'th element of the Fibonacci series:
1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Each number, after the second, is the sum of the two numbers before it.
*/

#include <iostream>
using namespace std;

int fib(unsigned n){
	if(n==1) return 1;
	if(n==2) return 1;
	if(n>2) return fib(n-1)+fib(n-2);
}
int main(){
	int x;
	cout<<"Please enter an integer:\n";
	cin>>x;
	cout<<fib(x);
	
	return 0;
}
