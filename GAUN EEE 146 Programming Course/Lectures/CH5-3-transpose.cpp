#include <iostream>
#define SIZE 4		//SIZE--> SIZE by SIZE Matrix. ex: 4 --> 4 by 4 Matrix.
using namespace std;
void transpose(double Mat[SIZE][SIZE]){
	double h;							//declaring a double as a helper to memorize values temporarily.
	for(int i=0; i<SIZE; i++){			//for loop for going through all rows of the matrix.
		for(int j=i+1;j<SIZE; j++){		//for loop for going through (i+1)th column to the last column.
			h=Mat[i][j];				//swap operation. to undertand operation here draw a matrix then do transpose operation and notice how the elements moves.
			Mat[i][j]=Mat[j][i];
			Mat[j][i]=h;
		}
	}
}

int main(){
	double Mat[SIZE][SIZE];							//declaring a two-dimension array.
	cout<<"Please enter values of a "<<SIZE<<" by "<<SIZE<<" Matrix:"<<endl;	//prompting the user to enter values.
	for(int i=0; i<SIZE; i++)						//for loop for going through all rows of the matrix.
		for(int j=0; j<SIZE; j++)					//for loop for going through all columns of the matrix.
													//((of course you can use just one for loop by making i begins from
													//0 to SIZE*SIZE-1, but you will have to manipulate the "cin" statement a little bit.)).
			cin>>Mat[i][j];							//geting values from the user and putting them into the current element.
	
	transpose(Mat);									//doing transposing
	
	cout<<endl;
	
	//for loops for printing the matrix.
	for(int i=0; i<SIZE; i++){
		for(int j=0;j<SIZE; j++)
			cout<<Mat[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}
