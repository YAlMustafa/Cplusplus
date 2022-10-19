/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Functions II
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=6

6. Write a program that inputs an integer number n and an integer power p and outputs n p.
The calculation should be done using a recursive function named int power(n, p).
*/

#include <iostream>
using namespace std;

int power(int n, int p){
	if(n==0&&p==0) return -1;
	else if(n==0&&p!=0) return 0;
	else if(p==0) return 1;
	else return n*power(n,p-1);
}
int main(){
	int n, p;
	cout<<"Please enter two integer:\n";
	cin>>n>>p;
	cout<<power(n, p);
	
	return 0;
}
