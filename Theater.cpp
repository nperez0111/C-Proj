#include <iostream>
#include <iomanip>
using namespace std;

const int rows= 15;
const int cols= 30;

//Function Prototypes done by Nick Perez and Nalin Suri
void enterSeatPrices(double (&array)[rows]);
//first function to be called, asks users for price of each row
void menu();
//menu caller function to display menu and selection
void displaySeats(bool [][cols]);
//display Seats will display the seats the user has purchased or not passed a multi dimensional array where true means the seat is sold and false means the seat is available
void displaySeatPrices(double []);
//displays prices by row 
void confirm();
//calls menu again if user presses enter after couting Press the Enter key to continue;
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

*/
void juan();
void nick();
void nalin();

int main(){
	
	//menu();
	juan();
	nalin();
	nick();
	
	system("PAUSE");
	return 0;
}


//Menu done by Juan Herrera
void menu(){
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
	cout<< "Case 1 \n";
	break;
	case 2:
	cout<<"Case 2 \n";
	break;
	case 3:
	cout<< "Case 3 \n";
	break;
	case 4:
	cout<< "Case 4 \n";
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
	menu();
}

//Function done by Nalin Suri
void enterSeatPrices(double (&array)[rows]) 
{
	for (int count=0;count<rows; count++)
	{
		cout<< "Please enter ticket price for Row"<< setw(2) << count+1<< " ";
		cin>> array[count];
	}
	
}

void displaySeatPrices(double price[]){
	cout<<"Ticket Prices by Row \n";
	cout<<"\tRow\t"<<"Price \n";
	cout<<"\t---\t"<<"---- \n";
	for(int i=0;i<15;i++){
	
		cout<<"\t"<<i+1<<"\t"<<price[i]<<endl;
	}
	
	
}
void nick(){

}
void nalin(){
	double seats[rows];
	enterSeatPrices(seats);
	
}
void juan(){
	double arr[15]{1,2,3,4,1,2,3,4,1,2,3,4,1,2};

 displaySeatPrices(arr);	
}
