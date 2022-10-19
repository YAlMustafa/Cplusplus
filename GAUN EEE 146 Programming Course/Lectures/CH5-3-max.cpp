#include <iostream>
#define SIZE 4		//SIZE--> SIZE by SIZE Matrix. ex: 4 --> 4 by 4 Matrix.
using namespace std;
void maxVal(double Mat[SIZE][SIZE], int &m, int &n){
	for(int i=0; i<SIZE; i++){				//for loop for going through all rows of the matrix.
		for(int j=0;j<SIZE; j++){			//for loop for going through all columns of the matrix.
			if(Mat[m][n]<Mat[i][j]){		//checking if the value is greater than the last value indexed by m and n.
				m=i;
				n=j;
			}
		}
	}	
}

int main(){
	int m=0, n=0;
	double Mat[SIZE][SIZE];							//declaring a two-dimension array.
	cout<<"Please enter values of a "<<SIZE<<" by "<<SIZE<<" Matrix:"<<endl;	//prompting the user to enter values.
	for(int i=0; i<SIZE; i++)						//for loop for going through all rows of the matrix.
		for(int j=0; j<SIZE; j++)					//for loop for going through all columns of the matrix.
													//((of course you can use just one for loop by making i begins from
													//0 to SIZE*SIZE-1, but you will have to manipulate the "cin" statement a little bit.)).
			cin>>Mat[i][j];							//geting values from the user and putting them into the current element.
	
	maxVal(Mat, m, n);									//getting the indexes of the max element.
	
	cout<<endl<<"the maximum value is at: m = "<<m+1<<" and n = "<<n+1<<endl;	//we add 1 to m and n because in the actual matrices the index begins from 1.
	
	
	return 0;
}
