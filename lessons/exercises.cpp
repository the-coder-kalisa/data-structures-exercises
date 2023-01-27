#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int rollNumber;
    float marks;
};

int main()
{
    Student student;
    cout << "Enter name: ";
    cin >> student.name;
    cout << "Enter age: ";
    cin >> student.age;
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;

    ofstream file;
    file.open("student.txt");
    file << "Name: " << student.name << ", Age: " << student.age
         << ", Roll Number: " << student.rollNumber << ", Marks: " << student.marks << endl;
    file.close();

    ifstream file2;
    file2.open("student.txt");
    string line;
    while (getline(file2, line))
    {
        cout << line << endl;
    }
    file2.close();

    return 0;
}