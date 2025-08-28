#include<iostream>
using namespace std;

int main(){
	char jzq[4][4] = {
		{'3','+','+','+'},
		{'2','+','+','+'},
		{'1','+','+','+'},
		{' ','1','2','3'}
	};
	
	short o_x;
	short o_y;
	short x_x;
	short x_y;
	
	while(1){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				cout<<jzq[i][j];
			}
			cout<<endl;
		}
		cin>>o_x>>o_y;
		if(o_x == 1){
			if(o_y == 1){
				jzq[2][1]='o';
			}else if(o_y == 2){
				jzq[1][1]='o';
			}else if(o_y == 3){
				jzq[0][1]='o';
			}
		}else if(o_x ==2){
			if(o_y == 1){
				jzq[2][2]='o';
			}else if(o_y == 2){
				jzq[1][2]='o';
			}else if(o_y == 3){
				jzq[0][2]='o';
			}
		}else if(o_x ==3){
			if(o_y == 1){
				jzq[2][3]='o';
			}else if(o_y == 2){
				jzq[1][3]='o';
			}else if(o_y == 3){
				jzq[0][3]='o';
			}
		}
		
		system("cls");
		
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				cout<<jzq[i][j];
			}
			cout<<endl;
		}
		cin>>x_x>>x_y;
		if(x_x == 1){
			if(x_y == 1){
				jzq[2][1]='x';
			}else if(x_y == 2){
				jzq[1][1]='x';
			}else if(x_y == 3){
				jzq[0][1]='x';
			}
		}else if(x_x ==2){
			if(x_y == 1){
				jzq[2][2]='x';
			}else if(x_y == 2){
				jzq[1][2]='x';
			}else if(x_y == 3){
				jzq[0][2]='x';
				
			}
		}else if(x_x ==3){
			if(x_y == 1){
				jzq[2][3]='x';
			}else if(x_y == 2){
				jzq[1][3]='x';
			}else if(x_y == 3){
				jzq[0][3]='x';
			}
		}
		
		system("cls");
	}
	
	return 0;
}
