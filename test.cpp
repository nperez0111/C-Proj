#include <iostream>
using namespace std;
const int rows=15;
const int cols=30;
void juan();
int main(){
	 juan();
	
	return 0;
}








void juan(){
		
	int r;
	double total=0.0;
bool seats[rows][cols]={true, false, true,true, false, true,true, false, true,true, false, true,true, false, true};{true, false, true,true, false, true,true, false, true,true, false, true,true, false, true; };
	double prices [15]={5,2,3,1,2,3,5,2,3,1,2,3,1,2,3};
	
	for(r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
		if(seats[r][c]){
		total+=prices[r];
		}
	}
 }
 cout<<"Total Sales to Date: $"<<total<<endl;
}
