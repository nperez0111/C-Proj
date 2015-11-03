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

void displaySeatPrices(double []);
//displays prices by row 

void confirm();
//calls menu again if user presses enter after couting Press the Enter key to continue;


int main(){
	
	double theaterSeats[rows][cols];
	
	system("PAUSE");
	return 0;
}


void enterSeatPrices(double (&array)[rows])
{
	
	
}

void displaySeatPrices(double []){
	cout>>"Ticket Prices by Row \n";
	for(int i=0;i<16;i++){
		cout<<"\tRow\t"<<"Price \n";
		cout<<"\t---\t"<<"---- \n";
		cout<<"\t"
	}
	
	
}
