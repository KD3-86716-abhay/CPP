/* Q3. Write a class Address with data members (string building, string street, string city ,int pin)
Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions */


#include<iostream>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    // Default constructor
    Address() : building(""), street(""), city(""), pin(0) {}

    // Parameterized constructor
    Address(string b, string s, string c, int p) : building(b), street(s), city(c), pin(p) {}

    // Setters (mutators)
    void setBuilding(string b) { building = b; }
    void setStreet(string s) { street = s; }
    void setCity(string c) { city = c; }
    void setPin(int p) { pin = p; }

    // Getters (accessors)
    string getBuilding() { return building; }
    string getStreet() { return street; }
    string getCity() { return city; }
    int getPin() { return pin; }

    // Method to accept address details
    void accept()
    {
        cout << "Enter building name/number: ";
        getline(cin >> ws, building);  // ws is used to handle leading whitespaces
        cout << "Enter street: ";
        getline(cin, street);
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter PIN code: ";
        cin >> pin;
    }

    // Method to display address details
    void display()
    {
        cout << "Address: " << building << ", " << street << ", " << city << " - " << pin << endl;
    }
};

int main()
{
    // Using default constructor and accept method
    Address addr1;
    cout << "Enter address details for addr1: " << endl;
    addr1.accept();
    addr1.display();

    // Using parameterized constructor
    Address addr2("123A", "Main Street", "New York", 10001);
    cout << "\nDisplaying address for addr2: " << endl;
    addr2.display();

    // Using setters to modify the address for addr2
    addr2.setBuilding("456B");
    addr2.setStreet("Broadway");
    addr2.setCity("Los Angeles");
    addr2.setPin(90001);
    cout << "\nUpdated address for addr2: " << endl;
    addr2.display();

    // Using getters to access individual components of the address
    cout << "\nCity of addr2: " << addr2.getCity() << endl;

    return 0;
}
