#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int toInt(string s);
//just to parse integers easier
double toDble(string s);
//parse string to a double



int main(){
	cout<<toDble("]3;");
	return 0;
}



//returns 0 if first char is not a number
int toInt(string s){
	return atoi(s.c_str());
}

//returns 0 if first char is not a number
double toDble(string s){
	return atof(s.c_str());
}
