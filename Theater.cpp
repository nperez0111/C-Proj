#include <iostream>
#include <iomanip>
using namespace std;


//Variables by Nalin Suri
const int rows= 15;
const int cols= 30;
double seatPrices[rows];
bool availableSeats[rows][cols];


//Function Prototypes/Organizational Logic by Nick Perez

void enterSeatPrices();
//first function to be called, asks users for price of each row (using loop)
//Created by Nalin Suri

void menu();
//menu caller function to display menu and selection
//Created by Juan Herrera

void displaySeats();
//display Seats will display the seats the user has purchased or not passed a multi dimensional array where true means the seat is sold and false means the seat is available
//Created by Nalin Suri

void displaySeatPrices(double []);
//Displays prices by row
//Created by Juan Herrera

void confirm();
//calls menu again if user presses enter after couting Press the Enter key to continue;
//Created by Nick Perez

void viewTicketSales(double prices[],bool seats[][cols]);


/*
goes through seats array and if it is true add its price by its row to an accumulator
example pseudocode:
for(){
	for(){
		if(seats[row][col]){
		total+=prices[row]
		}
	}
}
after call the main function immediately
Function/Pseudocode created by Nick Perez
*/

void purchaseTicket(bool (&seats)[rows][cols]);
/*asks user whether to view available seats or not 
if(y){displaySeats();confirm();} 
do{
flag=false;
	asks user for row to purchase
	asks user for seat num to purchase
	set that seat to be purchased
	ask user if they'd like to purchase another seat
	if(y){flag=true;} 
}while(flag);
Pseudocode by Nick Perez
*/


int main(){

	//Functions Implemented by Nalin Suri
	enterSeatPrices();
	menu();
	

	system("PAUSE");
	return 0;
}



void menu() //Juan Herrera
{
int choice;
cout << "\n\n\n\t\tC++ Theatre" << endl << endl;
cout << "\n\t1. View Available Seats";
cout << "\n\t2. View Seating Prices";
cout << "\n\t3. View Ticket Sales";
cout << "\n\t4. Purchase a Ticket";
cout << "\n\t5. Exit the Program\n\n";
cout << "\n\tEnter your choice(1-5): ";
cin>>choice;
bool booll;

do{
	booll=false;
switch(choice){
	case 1:
	displaySeats();
	break;
	case 2:
	displaySeatPrices(seatPrices);
	break;
	case 3:
	cout<< "Case 3\n";
	break;
	case 4:
	cout<<"Case 4\n";
	break;
	case 5:
	return;
	break;
	default:
	cout<<"Choice must be between 1 and 5. Please re-enter: ";
	cin>>choice;
	booll=true;
	break;
			}
} while(booll);}
void confirm(){
	string nothing;
	cout<<"Please enter to continue";
	cin>>nothing;
}


void enterSeatPrices() //Nalin Suri
{
	for (int count=0;count<rows; count++)
	{
		cout<< "Please enter ticket price for Row "<< setw(2) << count+1<< " ";
		cin>> seatPrices[count];
	}
	
}

void displaySeats() //Nalin Suri
{
	cout << "\n\t\tSeats";
	cout << "\n\t123456789012345678901234567890" << endl;

	for(int count=0;count<rows; count++)
	{
		cout<< "\nRow "<<setw(2) << count+1<<"\t";
		
		for(int count1=0; count1<cols; count1++)
		{
			if(availableSeats[rows][cols]==false)
			{
				cout<<"#";
			}
			else
			{
				cout<<"*";
			}
		}
	}
	cout << "\n\n\n\tLegend:\t* = Sold";
	cout << "\n\t\t# = Available";
	cout << "\n\n\nPress the Enter key to continue.";
	cin.ignore();
	cin.get();
	menu();
	
}

void displaySeatPrices(double price[]) //Juan Herrera
{
	cout<<"\nTicket Prices by Row \n\n";
	cout<<"\tRow\t"<<"Price \n";
	cout<<"\t---\t"<<"---- \n";
	for(int i=0;i<15;i++){
	
		cout<<"\t"<<i+1<<"\t"<<price[i]<<endl;
	}
	
menu();
}

void viewTicketSales(double prices[],bool seats[][cols]){
	displaySeats(seats);

	double total=0.0;
	
	}
	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
		if(seats[r][c]){
		total+=prices[r]
		}
	}
 }
 cout>>"Total Sales to Date: $"<<total<<endl;
 
}



void nalin(){
	
}
void juan(){
bool seats [row][cols];
	for(int r=0;r<rows;r++){
		for(int c=0;c<cols;c++){
			seats[r][c]=(r%2==0);
		}
	}
	double prices[15]={1,2,1,1,2,1,1,2,1,1,2,1,1,2,1}
	viewTicketSales(double prices[],bool seats[][cols]);
	
}
