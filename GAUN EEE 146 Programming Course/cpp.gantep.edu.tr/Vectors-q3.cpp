/*
The source of the question:
cpp.gantep.edu.tr >> tutorials >> Vectors
Direct link:
http://cpp.gantep.edu.tr/tutorialbasic.php?topic=8

3.Write a program that reads the elements of a vector of initial size n. Then insert the mean of the elements to the end of the vector.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	double sum=0;
	vector<double> vec;
	cout<<"Please enter the size of the vector: ";
	cin>>n;
	vec.resize(n);
	cout<<"Please enter the values: \n";
	for(int i=0;i<n;i++){
		cin>>vec[i];
		sum+=vec[i];
	}
	vec.push_back(sum/n);
	cout<<"-------------------\n";
	//printing the content of all vector elements
	for(int i=0; i<vec.size();i++)
		cout<<vec[i]<<endl;

	return 0;
}
