#include <iostream>
using namespace std;

const int rows= 15;
const int cols= 30;

void enterSeatPrices(double (&array)[rows]);
//first function to be called, asks users for price of each row
void menu();
//menu caller

void displaySeats(int [][cols]);
//display Seats

void displaySeatPrices(double (&array) prices);
//displays prices by row 

int main(){
	
	double theaterSeats[rows][cols];
	
	system("PAUSE");
	return 0;
}


void enterSeatPrices(double (&array)[rows])
{
	
	
}
