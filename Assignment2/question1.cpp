/*
Q1. Write a menu driven program for Date in a CPP language using structure 
Date is having data members day, month, year. Implement the following functions.
void initDate(); // to initialize the Date object with default values for data members (1,1,1900)
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();

*/

#include<iostream>
using namespace std;


struct Date 
{

    int day;
    int month;
    int year;

    void initDate()
    {
        day=1;
        month=1;
        year=1900;
        cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void printDateOnConsole()
    {
        cout<<"Date: "<<day<<"/"<<month<<"/"<<year;

    }

    void acceptDateFromConsole()
    {
        cout<<("enter day ::");
        cin>>day;
        cout<<("enter month ::");
        cin>>month;
        cout<<("enter year ::");
        cin>>year;
        
        cout<<day<<"/"<<month<<"/"<<year<<endl;

    }

    bool isLeapYear()
    {
        if(year%400==0||(year%100!=0 && year %4==0)){
            return true;
        }
        return false;
    }
};
    // void menu(int choice, struct Date* date);
    // void initDate(struct Date* ptrDate);
    // void printDateOnConsole(struct Date* ptrDate);
    // void acceptDateFromConsole(struct Date* ptrDate);
    void menu()
    {       cout<<" Menu:"<<endl;
            cout<<"1. Initialize Date"<<endl;
            cout<<"2. Input Date\n"<<endl;
            cout<<"3. Display Date\n"<<endl;
            cout<<"4. check if leap year\n"<<endl;
            cout<<"5. EXIT";
    }

    int main()
    {
            Date date;
            int choice;

        do
        {
            void menu();
            cout<<"enter your choice"<<endl;
            cin>>choice;

            switch (choice) 
            {
                case 1:
                    date.initDate();
                    cout<<"Date initialized to 10/12/2002."<<endl;
                    break;
                case 2:
                    date.acceptDateFromConsole();
                    cout<<"Date accepted from console."<<endl;
                    break;
                case 3:
                    date.printDateOnConsole();
                    cout<<endl;
                    break;
                case 4:
                    if(date.isLeapYear()){
                        cout<<"the year"<<date.year<<"is a leap year"<<endl;
                    }else {
                        cout<<"the year"<<date.year<<"is a leap year"<<endl;
                    }
                    break;
                case 5:
                    cout<<"exiting program"<<endl;
                    break;
                    
                default:
                    cout<<"Invalid choice! Please try again."<<endl;
                    break;
            
            }     
        }while(choice!=4);
    return 0;
    }







