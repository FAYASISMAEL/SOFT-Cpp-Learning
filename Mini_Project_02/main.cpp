
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:

    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = -1;

        setMarks(m);
    }

    int getRollNo()
    {
        return rollNo;
    }

    string getName()
    {
        return name;
    }

    float getMarks()
    {
        return marks;
    }

    void setMarks(float m)
    {
        if (m >= 0 && m <= 100)
        {
            marks = m;
            cout << "Marks updated successfully!\n";
        }
        else
        {
            cout << "Invalid marks! Enter marks between 0 and 100.\n";
        }
    }

    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

void printResult(Student s)
{
    cout << "\n----- STUDENT RESULT -----\n";

    cout << "Roll Number: " << s.getRollNo() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    if (s.getMarks() == -1)
    {
        cout << "Result: Marks not evaluated\n";
    }
    else if (s.getMarks() >= 40)
    {
        cout << "Result: PASS\n";
    }
    else
    {
        cout << "Result: FAIL\n";
    }
}

int main()
{
    Student batch[3] = {
        Student(101, "Fayas", 85),
        Student(102, "Arun", 35),
        Student(103, "Rahul", 75)
    };

    cout << "\n===== INITIAL STUDENT DETAILS =====\n";

    for (int i = 0; i < 3; i++)
    {
        batch[i].display();
    }

    int choice;
    float newMarks;

    cout << "\nDo you want to re-evaluate marks?";
    cout << "\n1. Yes";
    cout << "\n2. No";
    cout << "\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int roll;

        cout << "\nEnter student roll number: ";
        cin >> roll;

        bool found = false;

        for (int i = 0; i < 3; i++)
        {
            if (batch[i].getRollNo() == roll)
            {
                found = true;

                cout << "Enter new marks: ";
                cin >> newMarks;

                batch[i].setMarks(newMarks);

                break;
            }
        }

        if (!found)
        {
            cout << "Student not found!\n";
        }
    }

    cout << "\n===== FINAL STUDENT RESULTS =====\n";

    for (int i = 0; i < 3; i++)
    {
        printResult(batch[i]);
    }

    return 0;
}
