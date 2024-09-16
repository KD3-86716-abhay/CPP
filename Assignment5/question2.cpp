/* Q2. Write a menu driven program for Student management.
Create a class student with data members name, gender, rollNumber(Auto generated) and array to 
keep marks of three subjects. 
Accept every thing from user and Print name, rollNumber, gender and percentage.
In main(), create Student* arr[5] and provide facility for accept, print, search.
Search function returns index of found Student, otherwise returns -1
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
    static int rollNumberCounter;  // Static counter for roll number generation
    string name;
    string gender;
    int rollNumber;
    int marks[3];  // Array for 3 subject marks

public:
    // Default Constructor
    Student() {
        this->name = "";
        this->gender = "";
        this->rollNumber = ++rollNumberCounter;  // Auto-increment roll number
        for (int i = 0; i < 3; i++) {
            marks[i] = 0;
        }
    }

    // Accept Student details
    void acceptStudent() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's gender: ";
        cin >> gender;
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    // Calculate and return the percentage
    float calculatePercentage() const {
        int totalMarks = 0;
        for (int i = 0; i < 3; i++) {
            totalMarks += marks[i];
        }
        return (totalMarks / 3.0f);  // Return percentage
    }

    // Display Student details
    void displayStudent() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Gender: " << gender << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }

    // Getter for roll number
    int getRollNumber() const {
        return rollNumber;
    }
};

// Initialize static member
int Student::rollNumberCounter = 0;

// Search for a student by roll number
int searchStudent(Student* arr[], int rollNo, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != nullptr && arr[i]->getRollNumber() == rollNo) {
            return i;  // Return the index of the student if found
        }
    }
    return -1;  // Return -1 if student is not found
}

// Main function
int main() {
    Student* arr[5] = { nullptr };  // Array to store up to 5 students
    int choice, rollNo, index, studentCount = 0;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Accept Student Details" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by Roll Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (studentCount < 5) {
                    arr[studentCount] = new Student();  // Create new student
                    arr[studentCount]->acceptStudent();
                    studentCount++;
                } else {
                    cout << "Cannot accept more than 5 students." << endl;
                }
                break;

            case 2:
                for (int i = 0; i < studentCount; i++) {
                    cout << "\nStudent " << i + 1 << " details: " << endl;
                    arr[i]->displayStudent();
                }
                break;

            case 3:
                cout << "Enter the roll number to search: ";
                cin >> rollNo;
                index = searchStudent(arr, rollNo, studentCount);
                if (index != -1) {
                    cout << "Student found at index " << index << ": " << endl;
                    arr[index]->displayStudent();
                } else {
                    cout << "Student not found!" << endl;
                }
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }

    } while (choice != 4);

    // Free allocated memory
    for (int i = 0; i < studentCount; i++) {
        delete arr[i];
    }

    return 0;
}
