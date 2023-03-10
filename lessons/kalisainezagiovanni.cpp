#include <iostream>
#include <fstream>
using namespace std;

struct student
{
    int rollnumber;
    string name;
    int age;
    float marks;
    student *next;
};

void insert(student **head, int rollnumber, string name, int age, float marks)
{
    student *new_student = new student;
    new_student->rollnumber = rollnumber;
    new_student->name = name;
    new_student->age = age;
    new_student->marks = marks;
    new_student->next = *head;
    *head = new_student;
}

void printList(student *head)
{
    float total_marks = 0;
    int count = 0;
    cout << "Roll No.\tName\t\tAge\tMarks\n";
    while (head != NULL)
    {
        cout << head->rollnumber << "\t\t" << head->name << "\t\t" << head->age << "\t" << head->marks << "\n";
        total_marks += head->marks;
        count++;
        head = head->next;
    }
    cout << "Average Marks: " << total_marks / count << "\n";
}

bool validateMarks(float marks)
{
    if (marks >= 0 && marks <= 50)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool validateAge(int age)
{
    if (age >= 10 && age <= 30)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool validateRollNo(int rollnumber)
{
    if (rollnumber > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    student *head = NULL;
    int rollnumber, age;
    string name;
    float marks;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Student " << i + 1 << " Details:\n";
        cout << "Roll No.: ";
        cin >> rollnumber;
        while (!validateRollNo(rollnumber))
        {
            cout << "Invalid Roll Number. Please Enter Again: ";
            cin >> rollnumber;
        }
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        while (!validateAge(age))
        {
            cout << "Invalid Age. Please Enter Again: ";
            cin >> age;
        }
        cout << "Marks: ";
        cin >> marks;
        while (!validateMarks(marks))
        {
            cout << "Invalid Marks. Please Enter Again: ";
            cin >> marks;
        }
        insert(&head, rollnumber, name, age, marks);
    }
    // Storing linked list elements in a file
    ofstream outfile;
    outfile.open("students.txt");
    student *temp = head;
    while (temp != NULL)
    {
        outfile << temp->rollnumber << "," << temp->name << "," << temp->age << "," << temp->marks << "\n";
        temp = temp->next;
    }
    outfile.close();
    // Reading data from file and displaying
    ifstream infile;
    infile.open("students.txt");
    while (infile.good())
    {
        string data;
        getline(infile, data);
        if (data.length() == 0)
        {
            continue;
        }
        int pos = data.find(",");
        rollnumber = stoi(data.substr(0, pos));
        data.erase(0, pos + 1);
        pos = data.find(",");
        name = data.substr(0, pos);
        data.erase(0, pos + 1);
        pos = data.find(",");
        age = stoi(data.substr(0, pos));
        data.erase(0, pos + 1);
        marks = stof(data);
        insert(&head, rollnumber, name, age, marks);
    }
    infile.close();
    // Printing linked list elements
    printList(head);
    return 0;
}