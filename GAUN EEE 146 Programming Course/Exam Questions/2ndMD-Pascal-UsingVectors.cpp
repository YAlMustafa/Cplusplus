//Advanced Pascal Triangle
//Creating Pascal Triangle Using Vector
//The advantage is that the limit of the dimensions of the matrix is not constant
/*
[								]
|	a_00	a_01	...	a_0j	|
|	a_10	a_11	...	a_1j	|
|	 .		 .	 	 .	 .		|
|	 . 		 .	 	 .	 .		|
|	a_i0	a_i1	...	a_ij	|
[								]
*/
#include <iostream>
#include <vector>
using namespace std;

void pascal(vector<int> vec[], int k){
	for(int i=0;i<k;i++){
		for(int j=0; j<k; j++){
			if(i>=j){						//if it is from lower triangle
				if(i==0&&j==0)				//if it is a_00
					vec[0].push_back(1);	//Initializing 1 to a_00
				else{						//if it is not a_00
					if(j==0)				//if it is a_i0
						vec[i].push_back(vec[i-1][0]);	//Write the value of a_(i-1)0
					else					//if it is a_ij or anything except a_i0
						vec[i].push_back(vec[i-1][j]+vec[i-1][j-1]);	//Write the sum of a_(i-1)j + a_(i-1)(j-1)
				}
			}
			else							//if it is from upper triangle not including the diagonal
				vec[i].push_back(0);		//write 0
		}
	}
}

int main(){
	int k;
	//Prompting the user to enter a value of the matrix dimension
	cout<<"Please Enter An Integer:\n";
	cin>>k;
	
	//Declaring a vector array of integer type to be like a matrix
	vector<int>* vec=new vector<int>[k];
	
	//Writing Pascal Triangle's values in the matrix called "vec"
	pascal(vec, k);
	
	//Printing the content of "vec" as a matrix
	for(int i=0;i<k;i++){
		for(int j=0; j<k; j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
