#include <iostream>
#define SIZE 4		//SIZE--> SIZE by SIZE Matrix. ex: 4 --> 4 by 4 Matrix.
using namespace std;
double calTrace(double Mat[SIZE][SIZE]){
	double result=0;								//initializing to 0, because we do a summation operation. 
	for(int i=0; i<SIZE; i++)						//for loop to acess to all the values of the main diagonal of the matrix.
		result+= Mat[i][i];							//summation operation.
	return result;									//returnning the trace.
}

int main(){
	double Mat[SIZE][SIZE];							//declaring a two-dimension array.
	cout<<"Please enter values of a "<<SIZE<<" by "<<SIZE<<" Matrix:"<<endl;	//prompting the user to enter values.
	for(int i=0; i<SIZE; i++)						//for loop for going through all rows of the matrix.
		for(int j=0; j<SIZE; j++)					//for loop for going through all columns of the matrix.
													//((of course you can use just one for loop by making i begins from
													//0 to SIZE*SIZE-1, but you will have to manipulate the "cin" statement a little bit.)).
			cin>>Mat[i][j];							//geting values from the user and putting them into the current element.
	cout<<"Its Trace = "<<calTrace(Mat);			//printing the trace.
	return 0;
}
