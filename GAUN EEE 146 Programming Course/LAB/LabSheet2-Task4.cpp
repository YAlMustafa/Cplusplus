#include <iostream>
using namespace std;

int main(){
	char type;
	double width, height;
	
	cout<<"Enter \"s\" or \"S\" for Square, \"r\" or \"R\" for Rectangle:\n";
	cin>>type;
	if(type=='s'||type=='S'){
		cout<<"Enter the length of the square: ";
		cin>>width;
		cout<<"The Area of The Square is "<<width*width;
	}else if(type=='r'||type=='R'){
		cout<<"Enter the width: ";
		cin>>width;
		cout<<"Enter the height: ";
		cin>>height;
		cout<<"The Area of The Rectangle is "<<width*height;
	}
	
	return 0;
}
