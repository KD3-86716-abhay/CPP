/* Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
type Date.
Implement above classes. Test all functionalities in main().*/


#include <iostream>
#include <string>
using namespace std;

class Date {
    int day;
    int month;
    int year;

public:
    // Default Constructor
    Date() {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    // Parameterized Constructor
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    // Setter functions
    void setDay(int day) { this->day = day; }
    void setMonth(int month) { this->month = month; }
    void setYear(int year) { this->year = year; }

    // Accept date from the user
    void acceptDate() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }

    // Display the date
    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person {
    string name;
    string address;
    Date birthdate; // Person has-a Date (Association)

public:
    // Default Constructor
    Person() {
        this->name = "";
        this->address = "";
    }

    // Parameterized Constructor
    Person(string name, string address, int day, int month, int year)
        : birthdate(day, month, year) {
        this->name = name;
        this->address = address;
    }

    // Accept Person's details
    void acceptPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter birthdate: " << endl;
        birthdate.acceptDate();
    }

    // Display Person's details
    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birthdate: ";
        birthdate.displayDate();
    }
};

// Main function
int main() {
    Person person;
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Enter Person Details" << endl;
        cout << "2. Display Person Details" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                person.acceptPerson();
                break;

            case 2:
                person.displayPerson();
                break;

            case 3:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }

    } while (choice != 3);

    return 0;
}

