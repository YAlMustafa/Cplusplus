#include <iostream>
using namespace std;

int main(){
	int n;
	double* arr;
	
	//prompting the user to enter an integer.
	cout<<"Enter an integer:"<<endl;
	cin>>n;
	
	//declaring a dynamic array and prompting the user to enter values of the array 
	arr=new double[n];
	cout<<"Enter values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	//sorting the elements in increasing order.
	int i=0;
	while(i<n){
		int ce=i;
		for(int j=i+1; j<n; j++){
			if(arr[ce]>arr[j]){
				int h=arr[ce];
				arr[ce]=arr[j];
				arr[j]=h;
				ce=j;
			}
		}
		if(ce==i) i++;
	}
	
	//printing
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	return 0;
}
