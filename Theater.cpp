#include <iostream>
using namespace std;
// void enterSeatPrices(int &[]);
//first function to be called, asks users for price of each row
void menu();
//menu caller

int main(){
	menu();
	
	system("PAUSE");
	return 0;
}


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
} while(booll);
}
