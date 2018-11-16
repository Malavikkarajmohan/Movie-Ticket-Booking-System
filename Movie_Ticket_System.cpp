//Header Files
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include<limits> 
#include <time.h>
using namespace std;

//Class definition for ticket
class ticket{
	public:
	char name[10];
	char cno[10];
} t; //object definition for ticket

// Class definition for card
class card :  public ticket{  //inheritence for public ticket
public:
	char address[1000];
	char emailid[20];
} v; //object definition for card

//Prototype Call for the functions definitions.
void pay(int);
void random();
void card();
void menu()
{
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t\t BOX OFFICE";
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t\t Welcome Customer!";	 																					//Menu for the user
		cout<<"\n\n\t\t\t\t <1> Movie Timings";
	
		cout<<"\n\t\t\t\t <2> Contact Us";
		cout<<"\n\t\t\t\t <3> DTCard Registration";
		cout<<"\n\t\t\t\t <4> Exit \n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t";
	
	
}


//Main function
int main(){
	system("CLS");
	//Integer Declaration
	int choice, movie, b, N, x, cardid;
	char ans;
	

	//An exit controlled loop (Do...While)
	do{
		menu();	
		while (!(cin >> choice) && (choice < 1 || choice > 4)) 
		{
    	cout << "Invalid selection - Please input 1 to 4 only.\n";
    
    	cin.clear();
    
    	cin.ignore(numeric_limits<streamsize>::max(), '\n');

    
		}
	switch(choice)
		{
			case 1: 
			system("CLS");
			cout<<"\n\n\t\t\t\t Movies :";
			cout<<"\n\t\t\t\t 1. Hunter Killer";
			cout<<"\n\t\t\t\t\t  English";
			cout<<"\n\t\t\t\t\t  Action,Thriller U/A";
			cout<<"\n\t\t\t\t 2. A Star Is Born";
			cout<<"\n\t\t\t\t\t  English";
			cout<<"\n\t\t\t\t\t  Drama,Musical,Romance A";
			cout<<"\n\t\t\t\t 3. Helicopter Eela";
			cout<<"\n\t\t\t\t\t  Hindi";
			cout<<"\n\t\t\t\t\t  Drama,Comedy,Family U";
			cout<<"\n\t\t\t\t 4. Sui Dhaaga";
			cout<<"\n\t\t\t\t\t  Hindi";
			cout<<"\n\t\t\t\t\t  Drama, Family, Music, Romance U";
			cout<<"\n\t\t\t\t 5. The Nutcracker and the Four Realms";
			cout<<"\n\t\t\t\t\t  English";
			cout<<"\n\t\t\t\t\t  Drama,Fantasy U/A\n";
			cout<<"\n\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>movie;
			cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
			switch(movie)
			{
				case 1:
					system("CLS");
				 	cout<<"\n\n\t\t\t\t Select the the timings: ";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100 \n";					//Timings of the show
					cout<<"\n\n\t\t\t\t Please select the timings: ";
					cin>>b;
					
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<<"\n\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					if (strlen(t.cno)!=10)
    				{
        				cout<<"\t\t\t\tPlease enter a valid mobile number ";
						cin>>t.cno;
		
    				}
					cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					int x;
					cin>>x;
					pay(x);
					cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
						{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
                            default: cout<<"invalid input";
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 0900";
					cout<<"\n\t\t\t\t 2. 1100";
					cout<<"\n\t\t\t\t 3. 1250";
					cout<<"\n\t\t\t\t 4. 1500";
					cout<<"\n\t\t\t\t 5. 2000";
					cout<<"\n\t\t\t\t 6. 2200";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<<"\n\t\t\t\t Enter your contact number: ";
					if (strlen(t.cno)!=10)
    				{
        				cout<<"\t\t\t\tPlease enter a valid mobile number ";
						cin>>t.cno;
		
    				}
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here:";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100";
					cout<<"\n\t\t\t\t Please select the timings";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					if (strlen(t.cno)!=10)
    				{
        				cout<<"\t\t\t\tPlease enter a valid mobile number ";
						cin>>t.cno;
		
    				}
					cout<<"\n\t\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0900";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<<"\n\t\t\t\t Enter your contact number: ";
					if (strlen(t.cno)!=10)
    				{
        				cout<<"\t\t\t\tPlease enter a valid mobile number ";
						cin>>t.cno;
		
    				}
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
                            default: cout<<"invalid input";
					}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 5: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					if (strlen(t.cno)!=10)
    				{
        				cout<<"\t\t\t\tPlease enter a valid mobile number ";
						cin>>t.cno;
		
    				}
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n \n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
                default: cout<<"invalid input";
			}break;

		case 2: system("CLS");
				cout<<" For further information about movies you can download our Application(from the  Google Play Store or from the iOS App Store) or contact us at 01234567896523";			//Finding out more about our cinemas
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				system("CLS");
				break;
		case 3: system("CLS");
				cout<<"\t\t\t\tWelcome to start a new journey with our cinemas \n";																												//card membership
				card();
				cout<<"Thank you. \n It will take us a week for completing your registration for the card. \n Please see the benefits of the card on the next page. -->";
				char f;
				cout<<"\n For selecting the page to go to benefits say (y/n)\n";
				cin>>f;
				if(f=='y')
				{
					cout<<"Thank you for registeration once again \n The priveleges provided with this card are as follows:";
					cout<<"\n 1. For every purchase of a movie ticket you get 25 points(1point = 1Rs.) so after 16 movies you get a free movie ticket.";
					cout<<"\n 2. You are provided with regular updates regarding the movie and the showtimings.";
					cout<<"\n 3. Anytime prebook tickets for the upcoming movie and preffered seats will be provided.";
				}
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
				break;
		case 4: 
		{system("CLS");
		cout<<"\n\t\t\t\tTHANK YOU AND VISIT AGAIN!\n\n\t\t\t\t";
		system("PAUSE");
		exit(0);
				break;}
	}
	}while(ans=='y');
	}

//Function Declaration for Card
void card()
{
	int cardid;
	cout<<"\t\t\t\tWelcome to register for card facility in our cinemas";
	cout<<" \n\t\t\t\t Enter your name: ";
	cin>>v.name;
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
	cout<<"\t\t\t\tEnter your mobile number: ";
	cin>>v.cno;
    if (strlen(v.cno)!=10)
    {
        cout<<"\t\t\t\tPlease enter a valid mobile number ";
		cin>>v.cno;
		
    }
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
	cout<<"\t\t\t\tEnter the mail id: ";
	gets(v.emailid);
	system("CLS");
	int ID;
	srand (time(NULL));
	ID = rand() % 400000 + 4000000;
	if (ID<0)
	ID=(ID*-1);
	cout<<"\t\t\t\tYour new card number is - :" <<"\t"<<ID;
	

	cout<<"\n Name :"<<v.name<<"\n"<<"\n Mobile No. :"<<v.cno<<"\n"<<"\n Mail ID :"<<v.emailid<<"\n"<<"\nCard Number:"<<ID<<"\n";

	cout<<"\nThank you for the registeration for the card. \n";
}

//Payment system for the interface
void pay(int a)
{
	int normal, gold, amt[2],id;
	
	time_t t = time(NULL);							//time setup
	tm* timePtr = localtime(&t);
	cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\t\tYou selected for a Normal show \n\n\t\t\t\t";
		system("PAUSE");
		system("CLS");
		amt[1] = a *200 ;
		char final;
		cout<<"\n\n\t\t\t\t Do you have DTcard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			amt[1]=amt[1] - (0.1*amt[1]);
			
		}
		cout<<"\n\t\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[1]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			cin>>n;
			cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			gets(Card);
			cout<<"\t\t\t\tExpiry(MM/YYYY): ";
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\t\t\t\t/";
			cin>>expiryyy;
			while((expirymm<=0)||(expirymm>12)||(expiryyy<(timePtr->tm_year + 1900))){
				if((expirymm<=0)||(expirymm>12))
				{
					cout<<"\t\t\t\tEnter the month again: ";
					cin>>expirymm;
				}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			cout<<"\t\t\t\tEnter the CVV/CVV2 ";
			char password[3];
			int i=0;
            while(i<3)
            {
            password[i]=getch();
            cout<<"*";
            ++i;
            }
            password[i]='\0';
			}
		
	}
	else
	{
		cout<<"\n\n\t\t\t\tYou selected for the Gold Class \n\t\t\t\t";
		system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		char final;
		cout<<"\n\t\t\t\tDo you have DTcard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			amt[1]=amt[1] - (0.1*amt[1]);
	
		}
		cout<<"\n\t\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[2]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			cin>>n;
			cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			gets(Card);
			cout<<"\n\t\t\t\tExpiry(MM/YY): ";
			int expirymm, expiryyy;
			cin>>expirymm;
			cout<<"\t\t\t\t/";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\n\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\n\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			cout<<"Enter the CVV/CVV2 ";
			char password[3];
			int i=0;
            while(i<3)
            {
            password[i]=getch();
            cout<<"*";
            ++i;
            }
            password[i]='\0';
			}
			system("PAUSE");
	};
}
