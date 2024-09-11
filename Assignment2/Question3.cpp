
/* Q3. Create a namespace NStudent. Create the Student class(created as per Q2) inside namespace. 
Create the object of student and perform accept and display student.
*/

#include <iostream> 
using namespace std ; 

namespace NStudent
{ 

class Student
{
int roll_no;
string name;
int marks;


public:

void initStudent()
{
roll_no=1001;
name="";
marks=0;

cout<<"roll_no=="<<roll_no<<endl<<"name=="<<name<<endl<<"marks=="<<marks<<endl;
}



void acceptStudentFromConsole()
{

cout<<"roll_no="<<endl;
cin>>roll_no; 
cout<<"name=" <<endl;
cin>>name;
cout<<"marks="<<endl; 
cin>>marks;


}
void printStudentOnConsole()
{
cout << "Student_Details "<<endl <<"roll_no=="<<roll_no<<endl<<"name=="<<name<<endl<<"marks=="<<marks<<endl;

}

};
};
void displayMenu() {
    cout << "1. InitStudent \n";
    cout << "2. Accept Date from Console\n";
    cout << "3. Print Student Details\n";
    cout << "4. Exit\n";
}

int main () { 

    using namespace NStudent ; 
    Student s1 ; 
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s1.initStudent();
                break;
            case 2:
                s1.acceptStudentFromConsole();
                break;
            case 3:
                s1.printStudentOnConsole();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice !=4);

}