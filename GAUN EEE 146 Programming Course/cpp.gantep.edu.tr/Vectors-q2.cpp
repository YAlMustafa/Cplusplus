/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Vectors
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=8

2.A vector is given as follows: B={3,-5,-2,4,-7,9,22,-8}. Write a program to remove the negative elements from the vector.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> B(8);
	//initializing the elements
	B[0]=3;
	B[1]=-5;
	B[2]=-2;
	B[3]=4;
	B[4]=-7;
	B[5]=9;
	B[6]=22;
	B[7]=-8;
	
	//removing negative numbers
	int i=0;
	while(i<B.size()){
		if(B[i]<0)
			B.erase(B.begin()+i);
		else
			i++;
	}
	
	//printing the content of all vector elements
	for(int i=0; i<B.size();i++)
		cout<<B[i]<<endl;

	return 0;
}
