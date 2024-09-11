/* Q2. Write a menu driven program for Student in CPP language. Create a class student with data 
members roll no, name and marks. Implement the following functions
void initStudent(); // to initialize the student object with default values for data members (0,” ”,0);
void printStudentOnConsole();
void acceptStudentFromConsole();*/


#include<iostream>
using namespace std;
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
void displayMenu() {
    cout << "1. InitStudent \n";
    cout << "2. Accept Date from Console\n";
    cout << "3. Print Student Details\n";
    cout << "4. Exit\n";
}


int main()
{

    Student s1;
    int choice;
    //int choice;
    // s1.initStudent();
    // s1.printStudentOnConsole();
    // s1.acceptStudentFromConsole();


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

    return 0;
}




