/* Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to 
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments 
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called 
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/

#include<iostream>
using namespace std;
class Tollbooth

{
    unsigned int total_cars;
    unsigned int paying_cars;
    unsigned int non_paying_cars;

    double total_money;

public:

Tollbooth()
{
total_cars=0;
paying_cars=0;
non_paying_cars=0;
total_money=0;
    
} 

void payingCar()
{
total_cars++;
paying_cars++;
total_money+=0.50;

}

void nonpaying_cars()
{

total_cars++;
non_paying_cars++;

}


void printOnConsole()
{
cout<<"Total_cars"<<total_cars<<endl;
cout<<"Paying_cars"<<paying_cars<<endl;
cout<<"non_Paying_cars"<<non_paying_cars<<endl;
cout<<"total_money collected"<<total_money<<endl;
}



};

void menu()
{
    cout<<"1. paying_cars"<<endl;
    cout<<"2. non_paying_cars"<<endl;
    cout<<"3. Total_cars"<<endl;
    cout<<"4. total_money collected"<<endl;

}

int main()
{
    Tollbooth t1;
    int choice;

    do
    {
    menu();
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch (choice)
    
    {
    case 1:
        t1.payingCar();

        break;
    case 2:
        t1.nonpaying_cars();
        break;
    // case 3:
    //     t1.total_cars();
    //     break;
    case 3:
        t1.printOnConsole();
        break;
    default:
        cout<<"invalid choice"<<endl;
        
    
    }
    }while (choice!=3);


    return 0;


}