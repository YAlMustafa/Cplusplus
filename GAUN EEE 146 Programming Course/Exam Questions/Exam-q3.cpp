#include <iostream>
#include <cmath>

#define SIZE 200

using namespace std;

void drawC(bool plan[][SIZE], int type){
	int r = (30.0/200)*SIZE;
	int opoint = SIZE/2 - 1;
	switch(type){
		case 1:	//Drawing a Solid Circle
			for(int i=0; i<=r; i++){
				int y = sqrt(r*r - i*i);
				for(int j=0; j <= y; j++){
					plan[opoint+i][opoint+j]=1;
					plan[opoint-i][opoint+j]=1;
					plan[opoint+i][opoint-j]=1;
					plan[opoint-i][opoint-j]=1;
				}
			}
		break;
		case 2:	//Drawing a Circle - just The Circumastance
			for(int i=0; i<=r; i++){
				int y = sqrt(r*r - i*i);
				plan[opoint+i][opoint+y]=1;
				plan[opoint-i][opoint+y]=1;
				plan[opoint+i][opoint-y]=1;
				plan[opoint-i][opoint-y]=1;
				int x = sqrt(r*r - i*i);
				plan[opoint+x][opoint+i]=1;
				plan[opoint+x][opoint-i]=1;
				plan[opoint-x][opoint+i]=1;
				plan[opoint-x][opoint-i]=1;
			}
		break;
	}
}

int main(){
	
	bool plan[SIZE][SIZE]={0};
	
	//Drawing the Rectangle
	for(int i=0; i<SIZE; i++){
		plan[i][0] = 1;
		plan[i][SIZE-1] = 1;
		plan[0][i] = 1;
		plan[SIZE-1][i] = 1;
	}
	
	//Drawing The Circle
	drawC(plan, 1);
	
	//Print on the Screen
	for(int h=0; h<SIZE; h++){
		for(int w=0; w<SIZE; w++) cout<<plan[w][h];
		cout<<endl;
	}
	
	
	return 0;
}//Y.M.
