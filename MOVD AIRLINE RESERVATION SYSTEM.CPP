#include<iostream.h>
#include<conio.h>
#include<string.h>

//PNR numbers
int dom_pnr=100;
int int_pnr=200;

//Domestic Airlines
class dom_booking
{
	protected:
	int d_pnr,dom_passengers,dom_meal_choice;
	char flight_dom[50],dom_meal[20], meal1[20];
	char date_dom[10];
	char dom_dep[20],dom_arr[20];
	int choice_dom,source,destination;
	public:
	//Domestic ticket PNR generate
	void generate_dom_pnr()
	{
		dom_pnr++;
		d_pnr=dom_pnr;
	}
	//Domestic travel information
	int travel_details_dom()
	{
		cout << endl << "Please enter date of departure (DD/MM/YY):" <<  endl;
		cin >> date_dom;

		cout << "-------------------" << endl;
		cout<<  "      SOURCE     "<<endl;
		cout << "-------------------" << endl;
		cout << "1. New Delhi(1)" << endl ;
		cout <<"2. Chennai(2)" << endl;
		cout <<"3. Kolkatta(3)" << endl;
		cout <<"4. Mumbai(4) " << endl;
		cout << "-------------------\n"<<endl;
		cout << "Enter your source no.:" << endl;
		cin >> source;
		cout << "-------------------" << endl;
		cout<<  "  DESTINATION     "<<endl;
		cout << "-------------------" << endl;
		cout << "1. New Delhi(1)" << endl;
		cout <<"2. Chennai(2)" << endl;
		cout <<"3. Bangalore(3)" << endl;
		cout <<"4. Kolkatta(4)" << endl;
		cout << "-------------------\n"<<endl;
		cout << "Enter your destination no.:" << endl;
		cin >> destination;
		if((source==1 && destination==2) || (source==2 && destination==1))
		{
			cout << "\t\t\t Available flights" << endl << endl;
			cout<<"----------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Air India(1) \t 08:00 \t \t 11:05 \t \t Rs.5000 \n";
			cout << "IndiGo(2) \t 14:00 \t \t 17:05 \t \t Rs.5500 \n";
			cout << "SpiceJet(3) \t 19:00 \t \t 22:05 \t \t Rs.6000 \n";
		}
		else if((source==1 && destination==3) || (source==3 && destination==1))
		{
			cout << "\t\t\t Available flights" << endl << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "\Air India(1) \t 08:00 \t \t 11:05 \t \t Rs.5000 \n";
			cout << "IndiGo(2) \t 14:00 \t \t 17:05 \t \t Rs.5500 \n";
			cout << "SpiceJet(3) \t 19:00 \t \t 22:05 \t \t Rs.6000 \n";
		}
		else if((source==1 && destination==4) || (source==4 && destination==1))
		{
			cout << "\t\t\t Available flights" << endl << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;;
			cout << "Air India(1) \t 08:00 \t \t 11:05 \t \t Rs.5000 \n";
			cout << "IndiGo(2) \t 14:00 \t \t 17:05 \t \t Rs.5500 \n";
			cout << "SpiceJet(3) \t 18:00 \t \t 21:05 \t \t Rs.6000 \n";
		}
		else if((source==2 && destination==3) || (source==3 && destination==2))
		{
			cout << "\t\t\t Available flights" << endl << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Air India(1) \t 08:00 \t \t 11:05 \t \t Rs.5000 \n";
			cout << "IndiGo(2) \t 14:00 \t \t 17:05 \t \t Rs.5500 \n";
			cout << "SpiceJet(3) \t 18:00 \t \t 21:05 \t \t Rs.6000 \n";
		}
		else if((source==2 && destination==4) || (source==4 && destination==2))
		{
			cout << "\t\t\t Available flights" << endl << endl;
			cout<<"-------------------------------------------------------"<<endl;;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Air India(1) \t 08:00 \t \t 11:05 \t \t Rs.5000 \n";
			cout << "IndiGo(2) \t 14:00 \t \t 17:05 \t \t Rs.5500 \n";
			cout << "SpiceJet(3) \t 18:00 \t \t 21:05 \t \t Rs.6000 \n";
		}
		else if((source==3 && destination==4) || (source==4 && destination==3))
		{
			cout << "\t\t\t Available flights" << endl << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Air India(1) \t 08:00 \t \t 11:05 \t \t Rs.5000 \n";
			cout << "IndiGo(2) \t 14:00 \t \t 17:05 \t \t Rs.5500 \n";
			cout << "SpiceJet(3) \t 18:00 \t \t 21:05 \t \t Rs.6000 \n";
		}
		else if(source==destination)
		{
			cout << endl << "Do you have to go to your neighbourhood? Because, you have entered the same Source and Destination. Or, did an oopsie? Then please try again:)\n\n\n" << endl;
			return travel_details_dom();
		}
		else
		{
			cout << endl << "You have entered the wrong input. Please try again:) \n\n\n" << endl;
			return travel_details_dom();
		}
		return 0;
	}
	//Selecting Domestic flight
	int select_flight_dom()
	{
		cout << endl << "Enter your choice: " << endl;
		cin >> choice_dom;
		//Switch case
		switch(choice_dom)
		{
			case 1:
			cout << endl << "Your travel information" << endl;
			cout << "---------------------------------------" << endl;
			cout << "Flight name: Air India"<< endl;
			strcpy(flight_dom,"Air India");
			cout << "Departure Time: 08:00" << endl;
			cout<< "Arrival Time: 11:05" << endl;
			strcpy(dom_dep,"08:00");
			strcpy(dom_arr,"11:05");
			break;
			case 2:
			cout << endl << "Your travel information" << endl;
			cout << "---------------------------------------" << endl;
			cout << "Flight name: IndiGo" << endl;
			strcpy(flight_dom,"IndiGo");
			cout << "Departure Time: 14:00" << endl;
			cout << "Arrival Time: 17:05" << endl;
			strcpy(dom_dep,"14:00");
			strcpy(dom_arr,"17:05");
			break;
			case 3:
			cout << endl << "Your travel information" << endl;
			cout << "---------------------------------------" << endl;
			cout << "Flight name: SpiceJet" << endl;
			strcpy(flight_dom,"SpiceJet");
			cout << "Departure Time: 18:00" << endl;
			cout << "Arrival Time: 21:05" << endl;
			strcpy(dom_dep,"18:00");
			strcpy(dom_arr,"21:05");
			break;
			default:
			cout << endl << "You have entered the wrong input. Please try again:) \n\n\n" << endl;
			return select_flight_dom();
		}
		return 0;
	}
	//Domestic flight meal
	int dom_meals()
	{
		cout << endl << "---------------------------------------" << endl;
		cout << "You might get hungry during the flight." << endl;
		cout << "Wanna pre-order a meal? :P" << endl;
		cout << "Please enter your meal preference: " << endl;
		cout << "---------------------------------------" << endl;
		cout << "1. Vegetarian meal(1): Rs.350 \n";
		cout << "2. Non-Vegetarian meal(2): Rs.500 \n";
		cout << "3. No meal, I'm good!(3) \n \n";
		cout << "Please enter your choice: ";
		cin >> dom_meal_choice;

		while(dom_meal_choice > 3 || dom_meal_choice < 1)
		{
			cout << "You have entered the wrong input. Please enter a number between 1 and 3: ";
			cin >> dom_meal_choice;
		}
		if(dom_meal_choice == 1)
		{
			strcpy(meal1,"Vegetarian meal.");
		}
		else if (dom_meal_choice == 2)
		{
			strcpy(meal1,"Non-Vegetarian meal.");
		}
		else
		{
			strcpy(meal1,"NO meal.");
		}
		cout<<"You have chosen "<<meal1<<endl;
		return 0;
	}
};
//International Airlines
class int_booking
{
	protected:
	int i_pnr,int_passengers,int_meal_choice,int_meal_price;
	char flight_int[20],int_dep[20],int_arr[20],meal2[30],int_meal_choices[20];
	char date_int[20];
	int source_int,destination_int,choice_int;
	public:
	//International ticket PNR generate
	void generate_int_pnr()
	{
		int_pnr++;
		i_pnr=int_pnr;
	}
	//International travel information
	int travel_details_int()
	{
		cout << endl << "Please enter date of departure (DD/MM/YY): " <<  endl;
		cin>>date_int;

		cout << "-------------------" << endl;
		cout<<  "      SOURCE     " << endl;
		cout << "-------------------" << endl;
		cout << "1. Dubai(1)" << endl ;
		cout << "2. Kuala Lumpur(2)" << endl ;
		cout << "3. Hong Kong(3)" << endl ;
		cout << "4. Mumbai(4) " << endl ;
		cout << "-------------------\n" << endl;
		cout << "Enter your source:" << endl;
		cin >> source_int;
		cout << "-------------------" << endl;
		cout<<  "  DESTINATION     " << endl;
		cout << "-------------------" << endl;
		cout << "1. Dubai(1)" << endl ;
		cout << "2. Kuala Lumpur(2)" << endl;
		cout << "3. Hong Kong(3)" << endl;
		cout << "4. Mumbai(4) " << endl ;
		cout << "-------------------\n" << endl;

		cout << "Enter your destination: " << endl;
		cin >> destination_int;
		if((source_int==1 && destination_int==2) || (source_int==2 && destination_int==1))
		{
			cout << "\t\t\t Available flights" << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Lufthansa(1) \t 04:10 \t \t 08:30 \t \t Rs.14,010 \n";
			cout << "Emirates(2) \t 14:00 \t \t 18:05 \t \t Rs.15,120 \n";
			cout << "Vistara(3) \t 22:00 \t \t 02:10 \t \t Rs.12,500 \n";
		}
		else if((source_int==1 && destination_int==3) || (source_int==3 && destination_int==1))
		{
			cout << "\t\t\t Available flights" << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Lufthansa(1) \t 04:10 \t \t 08:30 \t \t Rs.23,010 \n";
			cout << "Emirates(2) \t 14:00 \t \t 18:05 \t \t Rs.28.340 \n";
			cout << "Vistara(3) \t 22:00 \t \t 02:10 \t \t Rs.29,320 \n";
		}
		else if((source_int==1 && destination_int==4) || (source_int==4 && destination_int==1))
		{
			cout << "\t\t\t Available flights" << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Lufthansa(1) \t 04:10 \t \t 08:30 \t \t Rs.10,500 \n";
			cout << "Emirates(2) \t 14:00 \t \t 18:05 \t \t Rs.9,120 \n";
			cout << "Vistara(3) \t 22:00 \t \t 02:10 \t \t Rs.10,550 \n";
		}
		else if((source_int==2 && destination_int==3) || (source_int==3 && destination_int==2))
		{
			cout << "\t\t\t Available flights" << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Lufthansa(1) \t 04:10 \t \t 08:30 \t \t Rs.14,010 \n";
			cout << "Emirates(2) \t 14:00 \t \t 18:05 \t \t Rs.15,120 \n";
			cout << "Vistara(3) \t 22:00 \t \t 02:10 \t \t Rs.12,500 \n";
		}
		else if((source_int==2 && destination_int==4) || (source_int==4 && destination_int==2))
		{
			cout << "\t\t\t Available flights" << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Lufthansa(1) \t 04:10 \t \t 08:30 \t \t Rs.14,010 \n";
			cout << "Etihad(2) \t 14:00 \t \t 18:05 \t \t Rs.15,120 \n";
			cout << "Vistara(3) \t 22:00 \t \t 02:10 \t \t Rs.12,500 \n";
		}
		else if((source_int==3 && destination_int==4) || (source_int==4 && destination_int==3))
		{
			cout << "\t\t\t Available flights" << endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout << "Airlines \t Departure \t Arrival \t Price \n"<<endl;
			cout << "Lufthansa(1) \t 04:10 \t \t 08:30 \t \t Rs.14,010 \n";
			cout << "Emirates(2) \t 14:00 \t \t 18:05 \t \t Rs.15,120 \n";
			cout << "Vistara(3) \t 22:00 \t \t 02:10 \t \t Rs.12,500 \n";
		}
		else if(source_int==destination_int)
		{
			cout << endl << "Do you have to go to your neighbourhood? Because, you have entered the same Source and Destination. Or, did an oopsie? Then please try again:)\n\n\n" << endl;
			return travel_details_int();
		}
		else
		{
			cout << endl << "You have entered the wrong input. Please try again:) \n\n\n" << endl;
			return travel_details_int();
		}
		return 0;
	}
	//Selecting International flight
	int select_flight_int()
	{
		cout << endl << "Enter your choice: " << endl;
		cin >> choice_int;
		switch(choice_int)
		{
			case 1:
			cout << endl << "Your travel information" <<endl;
			cout << "---------------------------------------" << endl;
			cout << "Flight name: Lufthansa" << endl;
			strcpy(flight_int,"Lufthansa");
			cout << "Departure Time: 04:10" << endl;
			cout << "Arrival Time: 14:05" << endl;
			strcpy(int_dep,"10:00");
			strcpy(int_arr,"14:05");
			break;
			case 2:
			cout << endl << "Your travel information" <<endl;
			cout << "---------------------------------------" << endl;
			cout << "Flight name: Emirates" << endl;
			strcpy(flight_int,"Emirates");
			cout << "Departure Time: 14:00" << endl;
			cout << "Arrival Time: 18:05" << endl;
			strcpy(int_dep,"14:00");
			strcpy(int_arr,"18:05");
			break;
			case 3:
			cout << endl << "Your travel information" <<endl;
			cout << "---------------------------------------" << endl;
			cout << "Flight name: Vistara" << endl;
			strcpy(flight_int,"Vistara");
			cout << "Departure Time: 18:00" << endl;
			cout << "Arrival Time: 22:05" << endl;
			strcpy(int_dep,"18:00");
			strcpy(int_arr,"22:05");
			break;
			default:
			cout << endl << "You have entered the wrong input. Please try again:) \n\n\n" << endl;
			return select_flight_int();
		}
		return 0;
	}
	//Selecting International flight meal
	int int_meal()
	{
		cout << endl << "-------------------------------------" << endl;
		cout << "You might get hungry during the flight." << endl;
		cout << "Wanna pre-order a meal? :P" << endl;
		cout << "Please enter your meal preference: " << endl;
		cout << "-------------------------------------" << endl;
		cout << "1. Vegetarian meal(1): Rs.450 \n";
		cout << "2. Non-Vegetarian meal(2): Rs.500 \n";
		cout << "3. No meal, I'm good!(3) \n \n";
		cout << "Please enter your choice:  ";
		cin >> int_meal_choice;

		while(int_meal_choice>3 ||int_meal_choice<1)
		{
			cout << "You have entered the wrong input. Please enter a number between 1 and 3: \n";
			cin >> int_meal_choice;
		}
		if (int_meal_choice== 1)
		{
			strcpy(meal2,"Vegetarian meal.");
		}
		else if (int_meal_choice == 2)
		{
			strcpy(meal2,"Non-Vegetarian meal.");
		}
		else
		{
			strcpy(meal2,"NO meal.");
		}
		cout<<"You have chosen "<<meal2<<endl;
		return 0;
	}
};
//Class passenger inherits the classes dom_booking & int_booking (Inheritance)
class passenger: public dom_booking,public int_booking
{
	protected:
	char name[100],email[50],gender[20],pass_no[30],contact_no[30];
	public:
	//Details of the passengers
	void passenger_details(int x)
	//if-else statements for domestic and international booking selection
	{
		if(x==1)
		{
			travel_details_dom();
			select_flight_dom();
			dom_meals();
		}
		else
		{
			travel_details_int();
			select_flight_int();
			int_meal();
		}
		cout << "\n\n\n-------------------------------------" << endl;
		cout << "Enter the required details:\n";
		cout << "-------------------------------------" << endl;
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your email ID: ";
		cin >> email;
		cout << "Enter your gender: ";
		cin >> gender;
		cout<<"Enter your contact number: ";
		cin >> contact_no;
		cout << "Enter your passport number: ";
		cin >> pass_no;
	}
	//Displaying passenger details
	void display_details()
	{
		cout << "\n\n-------------------------------------" << endl;
		cout << "Passenger details\n";
		cout << "-------------------------------------" << endl;
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Email ID: " << email << endl;
		cout << "Contact No.: " << contact_no << endl;
		cout << "Passport number: " << pass_no << endl;
	}
	//Getting PNR for domestic booking
	int getpnr_dom()
	{
		return d_pnr;
	}
	//Getting PNR for international booking
	int getpnr_int()
	{
		return i_pnr;
	}
	//Displaying details of domestic booking
	void disp_dom()
	{
		cout << "PNR: " << d_pnr << endl;
		cout << "Flight: " << flight_dom << endl;
		cout << "Name: " << name << endl;
		cout << "Boarding date: " << date_dom << endl;
		cout << "Departure Time: " << dom_dep << endl;
		cout << "Arrival Time: " << dom_arr << endl;
		cout << "Meal choice: " << meal1 << endl;
	}
	//Displaying details of international booking
	void disp_int()
	{
		cout << "PNR: " << i_pnr << endl;
		cout << "Flight: " << flight_int << endl;
		cout << "Name: " << name << endl;
		cout << "Boarding date: " << date_int << endl;
		cout << "Departure Time: " << int_dep << endl;
		cout << "Arrival Time: " << int_arr << endl;
		cout << "Meal choice: " << meal2 << endl;
	}
};
//Payment
class payment
{
	protected:
	int choice3,bank,bank1,card,date,cvv;
	char user_id[20];
	char password[30];
	public:
	//Getting and displaying payment details
	int payment_details()
	{
		cout << "\n\n-------------------------------------" << endl;
		cout << "Mode of payment \n";
		cout << "-------------------------------------" << endl;
		cout << "1. Debit Card(1) \n";
		cout << "2. Credit Card(2) \n";
		cout << "3. Net Banking/UPI(3) \n\n";
		cout << "Enter your choice: ";
		cin >> choice3;
		switch(choice3)
		{
			case 1:
			cout << "Enter card number: ";
			cin >> card;
			cout << "Enter expiry date (MMYY): ";
			cin >> date;
			cout << "Enter CVV number: ";
			cin >> cvv;
			cout << "-------------------------------------" << endl;
			cout << "Hurray! Transaction Successful. \n";
			cout << "-------------------------------------";
			break;
			case 2:
			cout << "Enter card number: ";
			cin >> card;
			cout << "Enter expiry date: ";
			cin >> date;
			cout << "-------------------------------------" << endl;
			cout << "Hurray! Transaction Successful. \n";
			cout << "-------------------------------------";
			break;
			case 3:
			cout << endl << "Banks Available: ";
			cout << "\n-------------------------------------" << endl;
			cout << "1. State bank of India(1) \n";
			cout << "2. ICICI Bank(2) \n";
			cout << "3. Axis Bank(3) \n";
			cout << "4. HDFC(4) \n";
			cout << "Select your bank: ";
			cin >> bank;

			cout << endl << "You have selected bank no.: " << bank << endl;
			cout << "Enter user id: ";
			cin >> user_id;
			cout << "Enter password: ";
			cin >> password;
			cout << "-------------------------------------" << endl;
			cout << "Hurray! Transaction Successful. \n";
			cout << "-------------------------------------";
			break;
			default:
			cout << endl << "Wrong input entered. Please try again:) \n";
			return payment_details();
		}
		return 0;
	}
};

int main()
{
	//Creating objects for classes
	class dom_booking d;
	class int_booking i;
	class passenger p;
	class payment pay;
	//Declaring variables
	int choice,choice1,choice2,choice3,input;
	char input1;
	//Do-While loop
	do
	{
		cout << "     >-->>-        >-->>-    " << endl;
		cout << "MOVD AIRLINE RESERVATION SYSTEM" << endl;
		cout << "      -<<--<        -<<--<    " << endl;
		cout << "-------------------------------------" << endl;
		cout << "\t  Welcome:)" << endl;
		cout << "-------------------------------------" << endl;
		cout << "1. Book a flight(1) \n";
		cout << "2. Cancel a flight(2) \n";
		cout << "3. Check your flight ticket(3) \n";
		cout << "4. Exit(4)" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Please enter your choice:" << endl;
		cin >> choice;

		//Switch-Case statements
		switch(choice)
		{
			case 1:
			cout << "-------------------------------------" << endl;
			cout << "Please enter your choice" << endl;
			cout << "1. Domestic Flights(1) \n";
			cout << "2. International Flights(2)" << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter your option: " << endl;
			cin >> choice1;
			cout << "-------------------------------------" << endl;

			switch(choice1)
			{
				//Booking domestic flight
				case 1:
				p.generate_dom_pnr();
				p.passenger_details(1);
				pay.payment_details();
				p.display_details();
				p.disp_dom();
				break;
				//Booking international ticket
				case 2:
				p.generate_int_pnr();
				p.passenger_details(2);
				pay.payment_details();
				p.display_details();
				p.disp_int();
				break;
				default:
				cout << endl << "Uh-uh, wrong input! \n";
				cout << "Please enter 1 for domestic flight booking or 2 for international flight booking. \n\n" << endl;
				return main();
			}
			break;
			//Canceling flight ticket
			case 2:
			cout << "-------------------------------------" << endl;
			cout << "Please enter your choice" << endl;
			cout << "1. Domestic Flights(1) \n";
			cout << "2. International Flights(2)" << endl;
			cout << "-------------------------------------" << endl;

			cout << "Please enter your option: " << endl;
			cin >> choice2;
			cout << "-------------------------------------" << endl;
			if(choice2==1)
			{
				cout << "Please enter your PNR number: " << endl;
				cin >> input;
				if(input==101)
				{
					cout << "Your domestic flight ticket, with the PNR no. " << input << ", is cancelled. Thank you.:)" << endl;
				}
				else
				{
					cout << "Wrong PNR! Please try again." << endl;
				}
			}
			else if(choice2==2)
			{
				cout << "Please enter your PNR number: " << endl;
				cin >> input;
				if(input==201)
				{
					cout << "Your international flight ticket, with the PNR no. " << input << ", is cancelled. Thank you.:)" << endl;
				}
				else
				{
					cout << "Wrong PNR! Please try again." << endl;
				}
			}
			else
			{
				cout << endl << "Uh-uh, wrong input! \n";
				cout << "Please try again. \n\n" << endl;
				return main();
			}
			break;
			//Displaying booked ticket details
			case 3:
			cout << "-------------------------------------" << endl;
			cout << "Your flight type" << endl;
			cout << "1.Domestic Flights(1) \n";
			cout << "2.International Flights(2)" << endl;
			cout << "-------------------------------------" << endl;

			cout << "Please enter your option: " << endl;
			cin >> choice3;
			cout << "-------------------------------------" << endl;
			if(choice3==1)
			{
				cout << "Please enter your PNR number: " << endl;
				cin>>input;
				if(input==101)
				{
					p.display_details();
					p.disp_dom();
				}
				else
				{
					cout << "Wrong PNR no. entered. Please try again." << endl;
				}
			}
			else if(choice3==2)
			{
				cout << "Please enter your PNR number :" << endl;
				cin>>input;
				if(input==201)
				{
					p.display_details();
					p.disp_int();
				}
				else
				{
					cout << "Wrong PNR no. entered. Please try again." << endl;
				}
			}
			else
			{
				cout << "\n\nUh-oh, wrong input! \n";
				cout << "Please try again. \n\n" << endl;
				return main();
			}
			break;
			case 4:
			return 0;
			//for wrong input
			default:
			cout << "-------------------------------------" << endl;
			cout << "\n\nUh-oh, wrong input! \n";
			cout << "Please enter the correct input. \n\n\n" << endl;
			cout << "-------------------------------------" << endl;
			return main();
		}
		cout<<"\n\n\nDo you wish to continue? (Y/N)" << endl;
		cin >> input1;
		cout << "\n\n\n";
	}
	while(input1=='Y' || input1=='y');
	return 0;
}

