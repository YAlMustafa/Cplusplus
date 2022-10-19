#include <iostream>
#include <vector>
using namespace std;

double mean(vector<int> vec){
	double result=0;
	for(int i=0; i<vec.size(); i++)
		result+= vec[i];
	return result/vec.size();
}

int Imedian(vector<int> vec){
	if(vec.size()%2==0) return -1;
	else return vec.size()/2;
}

vector<int> mode(vector<int> vec){
	vector<int> xValue, numValue;
	
	while(vec.size()){
		//checking if the last element exists in "xValue" vector.
		int x=-1;
		for(int i=0; i<xValue.size(); i++){
			if(xValue[i]==vec[vec.size()-1]){
				x=i;
				break;
			}
		}
		
		if(x==-1){ //if the last element does not exist.
			xValue.push_back(vec[vec.size()-1]);
			numValue.push_back(1);
		}
		else //if the last element exists.
			numValue[x]++;
		
		vec.pop_back();
	}
	
	//looking for the largest number in numValue
	int maxVal=1;
	for(int i=0; i<numValue.size(); i++)
		if(numValue[i]>maxVal)
			maxVal=numValue[i];
			
	if(maxVal==1) //if the largest value of "maxValue" is 1 then the "xVector" will be cleared entirely.
		xValue.clear();
	else{
		int i=0;
		while(i<numValue.size()){
			if(numValue[i]<maxVal){//clearing every element smaller than the value of "maxValue"
				numValue.erase(numValue.begin()+i);
				xValue.erase(xValue.begin()+i);
			}
			else
				i++;
		}
	}
	
	return xValue;
}

int main(){
	int n;
	cout<<"Please Enter An Integer:"<<endl;
	cin>>n;
	
	vector<int> vec(n);
	cout<<"Please enter values:"<<endl;
	for(int i=0; i<n; i++)
		cin>>vec[i];
	
	//printing the mean
	cout<<"Mean: "<<mean(vec)<<endl;
	
	//printing the median element
	int imedian=Imedian(vec);
	if(imedian==-1)
		cout<<"The number of the elements is even, there is no median!"<<endl;
	else
		cout<<"Median: "<<vec[imedian]<<endl;
	
	//printing the mode
	vector<int> modeVec=mode(vec);
	if(modeVec.size()==0)
		cout<<"There are no mode numbers"<<endl;
	else{
		cout<<"Mode: ";
		for(int i=0; i<modeVec.size(); i++){
			cout<<modeVec[i];
			if(i!=modeVec.size()-1) cout<<", ";
		}
	}
	cout<<endl;
	return 0;
}
