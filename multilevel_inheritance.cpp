#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Marks : public Student {
protected:
    int mark1, mark2, mark3;

public:
    void getMarks() {
        cout << "Enter marks for 3 subjects:" << endl;
        cout << "Subject 1: ";
        cin >> mark1;
        cout << "Subject 2: ";
        cin >> mark2;
        cout << "Subject 3: ";
        cin >> mark3;
    }
};

class Result : public Marks {
public:
    void displayResult() {
        int total = mark1 + mark2 + mark3;
        float percentage = total / 3.0;
        cout << "Name :" << name << endl;
        cout << "Roll No :" << rollNo << endl;
        cout << "Marks :" << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Total :" << total << endl;
        cout << "Percentage :" << percentage << "%" << endl;
    }
};

int main() 
{
    Result student1;
    cin.ignore();
    student1.getStudentDetails();
    student1.getMarks();
    student1.displayResult();
    return 0;
}