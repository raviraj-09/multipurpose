#include<iostream>
#include<cmath>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;
 int oin, iin;               // oin= outer input,   iin=inner input
int main()
{
   
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
    cout<<"------------------------------------------------------------------------------------\n\n\n";
    cout<<" Enter 1 For Calculator And 2 for Game";
    cin>>oin;
    if(oin==1)
    {
    cout<<"You Can Perform Any Of These Task \n[ 1--> S.I.      2--> C.I.     3--> Temperature Conversion      4--> Print Table ]\nEnter Your Choice...   ";
    cin>>iin;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    switch(iin)
    {
        case 1:
        {
                float p,r,t,si;        // p=principle amount, r=rate, t=time, si=simple intrest
				system("CLS"); 
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";    
                cout<<"To find Simple Intrest Provide the following Data:"<<endl;
                cout<<"Enter Principle Amount:  Rs.";
                cin>>p;
                cout<<"Enter Rate: ";
                cin>>r;
                cout<<"Enter Time (in years): ";
                cin>>t;
                si = (p*r*t)/100;
                cout<<endl<<"Simple Interest of following data is  Rs."<<si<<endl;
                cout<<"Total Amount after "<<t<<" years is  Rs."<<si+p<<endl<<endl;        // add si and principle amount for total amount
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"Enter 1 for Main Menu OR Press Any key to Exit."<<endl;
                cin>>iin;
                system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";
                switch(iin)
                {
                    case 1:
                    {
                        cout<<"       Redirecting to Main Menu..."<<endl;
                        system("CLS");
                        return main();
                    }
                    default:
                    {
                        cout<<"           Thank You...";
                        return 0;
                    }
                }
        }
        case 2:
        {
                float p,r,t,amount;              // p=principle amount, r=rate, t=time,
				system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";   
                cout<<"To find Compound Intrest anuually Provide the following Data:"<<endl;
                cout<<"Enter Principle Amount:  Rs.";
                cin>>p;
                cout<<"Enter Rate: ";
                cin>>r;
                cout<<"Enter Time (in years): ";
                cin>>t;
                amount = p*pow((1+r/100), t);
                cout<<endl<<"Compound Interest of following data is  Rs."<<amount - p<<endl;
                cout<<"Total Amount after "<<t<<" years is  Rs."<<amount<<endl;        // add ci and principle amount for total amount
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"Enter 1 for Main Menu OR Press Any key to Exit."<<endl;
                cin>>iin;
                system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";
                switch(iin)
                {
                    case 1:
                    {
                        cout<<"         Redirecting to Main Menu..."<<endl;
                        system("CLS");
                        return main();
                    }
                    default:
                    {
                        cout<<"           Thank You...";
                        system("CLS");
                        return 0;
                    }
                }
        }
        case 3:
        {
                float cel, fah;
                int temp;
                system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";
                cout<<endl<<"To Ccnvert temperarture from  celcius to fahrenheit enter 0 OR from fahrenheit to celcius enter 1 "<<endl;
                cin>>temp;
                switch(temp)
                {
                    case 0:
                    {
                        cout<<"Enter temperature in celcius: ";
                        cin>>cel;
                        fah=(cel*9/5)+32;
                        cout<<endl<<"Temperatue in Fahrenheit: "<<fah<<endl;
                        break;
                    }
                    case 1:
                        {
                        cout<<"Enter temperature in Fahrenheit: ";
                        cin>>fah;
                        cel=(fah-32)*5/9;
                        cout<<endl<<"Temperature in Celcius: "<<cel<<endl;
                        break;
                    }
                    default :
                    {
                        cout<<"Error!!\nTry Again!!"<<endl;
                    }
                }
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"Enter 1 for Main Menu OR Press Any key to Exit."<<endl;
                cin>>iin;
                system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";
                switch(iin)
                {
                    case 1:
                    {
                        cout<<"           Redirecting to Main Menu..."<<endl;
                        system("CLS");
                        return main();
                    }
                    default:
                    {
                        cout<<"           Thank You...";
                        system("CLS");
                        return 0;
                    }
                }
        }
        case 4:
        {
                int i;
                system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";
                cout<<"Which Table you want to print"<<endl;
                cin>>oin;
                i=1;
                cout<<endl<<"Table of "<<oin<<" is given below.."<<endl;
                while(i<=10)
                {
                    cout<<oin<<"x"<<i<<"="<<oin*i<<endl;
                    i++;
                }
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"Enter 1 for Main Menu OR Press Any key to Exit."<<endl;
                cin>>iin;
                system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";
                switch(iin)
                {
                    case 1:
                    {
                        cout<<"         Redirecting to Main Menu..."<<endl;
                        system("CLS");
                        return main();
                    }
                    default:
                    {
                        cout<<"           Thank You...";
                        system("CLS");
                        return 0;
                    }
                }
        }
        default:
        {
        		system("CLS");
                cout<<"-----------------------------------------------------------------------------------"<<endl;
                cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
                cout<<"------------------------------------------------------------------------------------\n\n\n";
                cout<<"Wrong Input.. \n";
                cout<<"For Try Again Enter 0 OR Press Any key to Exit."<<endl;
                cin>>iin;
                switch(iin)
                {
                    case 0:
                    {
                        cout<<"         Redirecting to Main Menu..."<<endl;
                        system("CLS");
                        return main();
                    }
                    default:
                    {
                        cout<<"           Thank You...";
                        system("CLS");
                        return 0;
                    }
                }
        }
    } return 0;
    }
    if(oin==2)
    {
    cout<<" For Casino game Enter 1 \n\n\n";
    cin>>iin;
    switch(iin)
    {
    case 1:
    {
        char playerName;
    int balance; // stores player's balance
    int bettingAmount;
    int guess;
    int dice; // stores the random number
    char choice;
    srand(time(0)); // "Seed" the random generator
    cout << "\n\t\t========WELCOME TO CASINO WORLD=======\n\n";
    cout << "\n\nWhat's your Name(only enter one char) : ";
    cin>>playerName;   
    cout << "\n\nEnter the starting balance to play game : Rs";
    cin >> balance;
    do
    {
        system("cls");
        cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
        cout << "\t1. Choose a number between 1 to 10\n";
        cout << "\t2. Winner gets 10 times of the money bet\n";
        cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
        cout << "\n\nYour current balance is Rs " << balance << "\n";
// Get player's betting balance
        do
        {
            cout << "Hey, " << playerName<<", enter amount to bet : Rs";
            cin >> bettingAmount;
            if(bettingAmount > balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(bettingAmount > balance);
// Get player's numbers
        do
        {
            cout << "Guess any betting number between 1 to 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost Rs "<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of Rs " << balance << "\n";
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (yes/no)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is Rs " << balance << "\n\n";
    }
   
    }
    }
    else
    {       system("CLS");
            cout<<"-----------------------------------------------------------------------------------"<<endl;
            cout<<"                          WELCOME TO THIS PROGRAM...\n                         PROGRAM FOR MULTIPURPOSE USE \n";
            cout<<"------------------------------------------------------------------------------------\n\n\n";
            cout<<"Wrong Input.. \n";
            cout<<"For Try Again Enter 0 OR Press Any key to Exit."<<endl;
            cin>>iin;
            switch(iin)
            {
                case 0:
                {
                cout<<"         Redirecting to Main Menu..."<<endl;
                system("CLS");
                return main();
                }
                default:
                {
                    cout<<"           Thank You...";
                    system("CLS");
                    return 0;
                }
            }
        }

return 0;
}

