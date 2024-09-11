/*
Q1. Write a menu driven program for Date in a CPP language using class.
Date is having data members day, month, year. Implement the following functions.
void initDate(); // to initialize the Date object with default values for data members (1,1,1900)
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();

*/


#include <iostream>
using namespace std;

// Class definition for Date
class Date {
    //public:
    int day;
    int month;
    int year;

public:
    void initDate() {
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear() {
        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
            return true;
        }
        return false;
    }
};

void displayMenu() {
    cout << "\n1. Initialize Date\n";
    cout << "2. Print Date\n";
    cout << "3. Accept Date from Console\n";
    cout << "4. Check if Leap Year\n";
    cout << "5. Exit\n";
}

int main() {
    Date date;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                date.initDate();
                cout << "Date initialized to default (1/1/1900).\n";
                break;
            case 2:
                date.printDateOnConsole();
                break;
            case 3:
                date.acceptDateFromConsole();
                break;
            case 4:
                if (date.isLeapYear()) {
                    cout << "The year " << " is a leap year.\n";
                } else {
                    cout << "The year " << " is not a leap year.\n";
                }
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
