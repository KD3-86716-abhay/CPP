/* Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should 
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)
*/
#include <iostream>
#include <string>
using namespace std;

// Date class for representing date
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

    // Accept date from user
    void acceptDate() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }

    // Display the date
    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

// Person class containing personal details (base class)
class Person {
protected:
    string name;
    string address;
    Date birthdate;  // Association (Person has-a Date)

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

// Employee class derived from Person
class Employee : public Person {
    int id;
    float salary;
    string department;
    Date joiningDate;  // Association (Employee has-a Date)

public:
    // Default Constructor
    Employee() : Person() {
        this->id = 0;
        this->salary = 0.0f;
        this->department = "";
    }

    // Parameterized Constructor
    Employee(string name, string address, int birthDay, int birthMonth, int birthYear,
             int id, float salary, string department, int joinDay, int joinMonth, int joinYear)
        : Person(name, address, birthDay, birthMonth, birthYear), joiningDate(joinDay, joinMonth, joinYear) {
        this->id = id;
        this->salary = salary;
        this->department = department;
    }

    // Accept Employee's details
    void acceptEmployee() {
        acceptPerson();  // Accept inherited Person details
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter department: ";
        cin >> department;
        cout << "Enter joining date: " << endl;
        joiningDate.acceptDate();
    }

    // Display Employee's details
    void displayEmployee() const {
        displayPerson();  // Display inherited Person details
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
        cout << "Joining Date: ";
        joiningDate.displayDate();
    }
};

// Main function
int main() {
    // Create Employee object using default constructor
    Employee emp1;

    // Accept Employee details from user
    cout << "Enter Employee 1 details:" << endl;
    emp1.acceptEmployee();

    // Create Employee object using parameterized constructor
    Employee emp2("John Doe", "123 Main St", 15, 8, 1990, 101, 50000.0f, "IT", 1, 1, 2020);

    // Display Employee details
    cout << "\nEmployee 1 details:" << endl;
    emp1.displayEmployee();

    cout << "\nEmployee 2 details:" << endl;
    emp2.displayEmployee();

    return 0;
}
