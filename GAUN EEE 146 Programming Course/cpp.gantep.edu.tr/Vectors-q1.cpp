/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Vectors
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=8

1. Write a program that includes a vector with the following elements; A={3,5,-2,4,7},
then add two more elements with values 10 and 12 to the end of the vector.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> A(5);
	A[0]=3;
	A[0]=5;
	A[0]=-2;
	A[0]=4;
	A[0]=7;
	A.push_back(10);
	A.push_back(12);
	
	return 0;
}
