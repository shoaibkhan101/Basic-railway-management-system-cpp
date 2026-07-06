#include <iostream>
using namespace std;

struct Train {
    string name;
    string departure;
	string destination;                                                      
    float fare;
    int seats;
};

void menu(){
	cout<<"PRESS 1 IF YOU ARE ADMIN"<<endl;
	cout<<"PRESS 2 IF YOU ARE A PASSENGER LOOKING TO TRAVEL WITH US"<<endl;}


void menuadmin1(){
	cout<<"press 1 to add trains"<<endl;
		cout<<"press 2 for viewing and modifying section"<<endl;
				cout<<"press 0 to return to main menu"<<endl;
}


void submenuadmin2(){
		cout<<"press 1 to view added  trains"<<endl;
		cout<<"press 2 for to modify train"<<endl;
				cout<<"press 0 to return to main menu"<<endl;
}

void submenuadmin3(){
	cout << "1. return to main menu" << endl;
    cout << "2. Update Train" << endl;
    cout << "3. Delete Train" << endl;
    cout << "Enter choice:" << endl;  
}
int main()
 {
    int n, choice, tickets, total;
    Train trains[100];
    while(true){
    	

    	system ("cls");
menu();
int option,suboption;
cin>>option;
if(option==1){
	int pin=45388;
cout<<"enter your pin to continue"<<endl;
cin>>pin;
if(pin==56767){
cout<<"  WELCOME TO  Railways"<<endl;
menuadmin1();
cin>>suboption;
if(suboption==1){
	//input trains//
	  // Input train information from admin
   	cout<<"how many trains you want to add"<<endl;
	cin>>n;
	 for (int i = 0; i < n; i++) {
        cout << "Enter train " << i + 1 << " name: "<<endl;
  cin>>trains[i].name;
        cout << "Enter departure for train " << i+1 << endl;
   cin >>trains[i].departure;
        cout<<"Enter destination for train" << i+1 <<endl;
   cin >>trains[i].destination;
        cout << "Enter fare for train " << i+1  << endl;      
cin >>trains[i].fare;
cout<<"enter seats in train" << i+1<<endl;
cin>>trains[i].seats;
}
cout<<"press 0/enter to return to main menu"<<endl;
cin.ignore();
cin.get();
}
else if(suboption==2){
	submenuadmin2();
	int select;
	cin>>select;
	switch(select){
		case 1:
			 // Display menu to user
    cout << "HaMmAd Railways Menu" << endl;
    for (int i = 0; i < n; i++) {
      
           cout << i + 1 << ". " << trains[i].name << " (" << trains[i].departure<<" to "<< trains[i].destination<< ") - Rs" 	<< trains[i].fare	<< "Available seats : " << trains[i].seats << endl;

    }
cin.ignore();
cin.get();
    break;
    case 2:
    	 for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << trains[i].name << " (" << trains[i].departure<<" to "<< trains[i].destination<< ") - Rs" 	<< trains[i].fare	<< "Available seats : " << trains[i].seats << endl;
        

    }
    cout<<"select train you want to edit"<<endl;
    cin>>choice;
    
    cout << "0. return to main menu" << endl;
    cout << "1. Modify Train" << endl;
    cout << "2. Delete Train" << endl;
    cout << "Enter choice:" << endl;
   int subchoice;
    cin>>subchoice;

    if(subchoice==0){
	menu();
	}
	else if(subchoice==1){
		  cout << "Enter new name for train: " <<endl; 
		       cin >>trains[choice - 1].name;
        cout << "Enter new route for train: "<<endl;      
		  cin >> trains[choice - 1].departure;
		  cout << "Enter new destination for train: "<<endl;      
		  cin >> trains[choice - 1].destination;
        cout << "Enter new fare for train: " <<endl;
		 cin >>trains[choice - 1].fare;
        cout << "Train information updated successfully"<<endl;
    }
	else if(subchoice==2){
		 for (int i = choice - 1; i < n - 1; i++) {
            trains[i] = trains[i + 1];
        }
        n--;
        cout << "Train deleted successfully"<<endl;
	}
	break;
	default:
		cout<<"Invalid entry"<<endl;
	break;
	}
	
	
	}
}
else{
	cout<<"Invalid Password ,Try try and try Again one day you will succeed surely"<<endl;
}
cin.ignore();
cin.get();
}
else if(option==2){
	cout<<"press 1 to check trains menu and train informations"<<endl;
	cout<<"press 2 to book tickets"<<endl;
	cout<<"press 0 to return to main menu"<<endl;
	
	  cin>>choice;
if(choice==0){
	
	menu();
}	  

else if(choice==1){
	  for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << trains[i].name << " (" << trains[i].departure<<" to "<< trains[i].destination<< ") - Rs" << trains[i].fare << endl;
    }
    cin.ignore();
    cin.get();
      } 
else if(choice==2){
  cout << "Train Booking Menu" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << trains[i].name << " (" << trains[i].departure<<" to "<< trains[i].destination<< ") - Rs" << trains[i].fare << endl;}
	    // Ask user for number of tickets and calculate total fare
	    cin>>choice;
    cout  << "Enter number of tickets:"<<endl;
cin >> tickets;
    total = trains[choice - 1].fare * tickets;
    
    // Check if enough seats are available
    if (tickets <= trains[choice - 1].seats) {

        // Update available seats
        trains[choice - 1].seats -= tickets;
    // Display bill
    cout << "Train: " << trains[choice - 1].name << endl;
    cout << "Departure from : " <<  trains[choice - 1].departure <<endl;
    cout << "Destination: " << trains[choice - 1].destination << endl;
    cout << "Fare: Rs" << trains[choice - 1].fare << endl;
    cout << "Number of tickets: " << tickets << endl;
    cout << "Total fare: Rs" << total << endl;
	 cin.ignore();
    cin.get();
	}
    else{
    	cout<<"not enough seats"<<endl;
	}
	cin.ignore();
	cin.get();
	
	}
}
      }}

    	
