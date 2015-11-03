#include <iostream>
#include <iomanip>
using namespace std;

const int rows= 15;
const int cols= 30;

void enterSeatPrices(double (&array)[]);
//first function to be called, asks users for price of each row
void menu();
//menu caller

void displaySeats(int [][cols]);
//display Seats

void displaySeatPrices(double (&array)[]);
//displays prices by row 

void confirm();
//calls menu again if user presses enter after couting Press the Enter key to continue;

int main(){
	
	double theaterSeats[rows][cols];
	
	enterSeatPrices(theaterSeats[]);
	
	system("PAUSE");
	return 0;
}


void enterSeatPrices(double (&array)[rows]) //Function done by Nalin Suri
{
	for (int count=0;count<rows; count++)
	{
		cout<< "Please enter ticket price for Row"<< setw(2) << rows+1;
		cin>> array[rows];
	}
	
}
