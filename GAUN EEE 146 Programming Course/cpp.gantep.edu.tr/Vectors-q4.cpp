/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Vectors
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=8

4.Write a program that creates a vector containing all prime numbers between 1 and 500.
See http://en.wikipedia.org/wiki/Prime_number
and http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec(499);
	//initializing the values of the vector elements from 2 to 500;
	for(int i=0; i<vec.size(); i++)
		vec[i]=i+2;
	
	//checking for prime numbers and erasing others
	int i=0;
	while(i<vec.size()){
		int j=i+1;
		while(j<vec.size()){
			if(vec[j]%vec[i]==0)
				vec.erase(vec.begin()+j);
			else
				j++;
		}
		i++;
	}
	
	//printing the content of the vector elements
	for(int k=0; k<vec.size();k++){
		cout<<vec[k]<<" ";
		if((k+1)%5==0)	//adding a new line after every printing of 5 elements
			cout<<endl;
	}
		
	return 0;
}
