/* Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options -> 
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.
*/


#include<iostream>
using namespace std;


class Volume{
int length;
int width;
int height;

public:
Volume()
{
    length=1;
    width=1;
    height=1;

    cout<<"inside parameterless constructor"<<endl;


}

Volume(int length)
{
cout<<"single parametrized constructor";
this->length=length;
this->width=length;
this->height=length;
cout<<"area inside single value to all="<<length*width*height<<endl;

}

Volume(int length,int width,int height)
{
this->length=length;
this->width=width;
this->height=height;
cout<<"area L*b*h ="<<length*width*height<<endl;

}

int calculate_volume()
{
    return length*width*height;
}


};


void displaymenu()
{
    cout<<"1.calculate Volume with default values"<<endl;
    cout<<"2.calculate Volume with l=b=h with same value"<<endl;
    cout<<"3.calculate l,b,h with different values"<<endl;

}

int main()
{
    
    
    Volume V3;
    void displaymenu();
    int choice;
    int length,width,height;
    
    do {
        displaymenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Scope the object creation
                Volume V1;
                cout << "Volume: " << V1.calculate_volume() << endl;
                break;
            }
            case 2: {
                // Scope the object creation
                cout << "Enter the side value: ";
                cin >> length;
                Volume V2(length);
                cout << "Volume: " << V2.calculate_volume() << endl;
                break;
            }
            case 3: {
                // Scope the object creation
                cout << "Enter length, width, and height: ";
                cin >> length >> width >> height;
                Volume V3(length, width, height);
                cout << "Volume: " << V3.calculate_volume() << endl;
                break;
            }
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice !=4);


return 0;

}
