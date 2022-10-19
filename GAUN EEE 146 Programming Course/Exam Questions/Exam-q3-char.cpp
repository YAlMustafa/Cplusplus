#include <iostream>
#include <cmath>

#define SIZE 200

using namespace std;

const char eDigit=' ';
const char fDigit='*';

void drawC(char plan[][SIZE], int type){
	int r = (30.0/200)*SIZE;
	int opoint = SIZE/2 - 1;
	switch(type){
		case 1:	//Drawing a Solid Circle
			for(int i=0; i<=r; i++){
				int y = sqrt(r*r - i*i);
				for(int j=0; j <= y; j++){
					plan[opoint+i][opoint+j]=fDigit;
					plan[opoint-i][opoint+j]=fDigit;
					plan[opoint+i][opoint-j]=fDigit;
					plan[opoint-i][opoint-j]=fDigit;
				}
			}
		break;
		case 2:	//Drawing a Circle - just The Circumastance
			for(int i=0; i<=r; i++){
				int y = sqrt(r*r - i*i);
				plan[opoint+i][opoint+y]=fDigit;
				plan[opoint-i][opoint+y]=fDigit;
				plan[opoint+i][opoint-y]=fDigit;
				plan[opoint-i][opoint-y]=fDigit;
				int x = sqrt(r*r - i*i);
				plan[opoint+x][opoint+i]=fDigit;
				plan[opoint+x][opoint-i]=fDigit;
				plan[opoint-x][opoint+i]=fDigit;
				plan[opoint-x][opoint-i]=fDigit;
			}
		break;
	}
}

int main(){
	char plan[SIZE][SIZE]={eDigit};
	
	//Drawing the Rectangle
	for(int i=0; i<SIZE; i++){
		plan[i][0] = fDigit;
		plan[i][SIZE-1] = fDigit;
		plan[0][i] = fDigit;
		plan[SIZE-1][i] = fDigit;
	}
	
	//Drawing The Circle
	drawC(plan, 1);
	
	//Print on the Screen
	for(int h=0; h<SIZE; h++){
		for(int w=0; w<SIZE; w++){
			cout<<plan[w][h];
		}
		cout<<endl;
	}
	
	
	return 0;
}
