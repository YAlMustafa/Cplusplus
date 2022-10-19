//Normal Code
//Creating Pascal Triangle Using Array.

#include<iostream>
using namespace std;
void pascal(int a[][10], int k){
	for(int i=0;i<k;i++){
		for(int j=0; j<k; j++){
			if(i>=j){
				if(i==0&&j==0)
					a[0][0]=1;
				else{
					if(j==0)
						a[i][0]=a[i-1][0];
					else
						a[i][j]=a[i-1][j]+a[i-1][j-1];	
				}
			}
			else
				a[i][j]=0;
		}
	}
}

int main(){
	int a[10][10];
	int k;
	cout<<"Please Enter An Integer:\n";
	cin>>k;
	pascal(a, k);
	
	for(int i=0;i<k;i++){
		for(int j=0; j<k; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
