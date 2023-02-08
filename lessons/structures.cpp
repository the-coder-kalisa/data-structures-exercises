#include <bits/stdc++.h>
#include <fstream>

using namespace std;

struct Student
{
    string name;
    int roll_number;
    int marks;
    int age;
};

bool validateRollNumber(int roll_number)
{
    // check if the roll number exists in the file
    // if it exists, ask the user to enter a new roll number
    // else, return

    string fileName = "students.txt";
    ifstream infile;
    infile.open(fileName, ios::in);
    if (infile.is_open())
    {
        bool exists = false;
        while (!infile.eof())
        {
            Student s;
            infile >> s.name >> s.roll_number >> s.marks >> s.age;
            if (s.roll_number == roll_number)
            {
                cout << "Roll number already exists, enter a new roll number:\n";
                exists = true;
                break;
            }
            else
            {
                exists = false;
            }
        }
        infile.close();
        return exists;
    }
    else
    {
        return true;
    }
}

void mergeSort(vector<Student> &students, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(students, start, mid);
        mergeSort(students, mid + 1, end);

        int i = start;
        int j = mid + 1;
        int k = start;
        vector<Student> temp(students.size());
        while (i <= mid && j <= end)
        {
            if (students[i].marks < students[j].marks)
            {
                temp[k++] = students[i++];
            }
            else
            {
                temp[k++] = students[j++];
            }
        }
        while (i <= mid)
        {
            temp[k++] = students[i++];
        }
        while (j <= end)
        {
            temp[k++] = students[j++];
        }
        for (int i = start; i <= end; i++)
        {
            students[i] = temp[i];
        }
    }
}

int main()
{
    vector<Student> students;
    string fileName = "students.txt";
    ifstream infile;
    infile.open(fileName, ios::in);
    if (infile.is_open())
    {
        while (!infile.eof())
        {
            Student s;
            infile >> s.name >> s.roll_number >> s.marks >> s.age;
            students.push_back(s);
        }
        infile.close();
    }

    Student s;

    cout << "Enter student name:\n";
    getline(cin, s.name);
    cout << "Enter student roll number:\n";
    cin >> s.roll_number;
    while (validateRollNumber(s.roll_number))
    {
        cin >> s.roll_number;
    };
    cout << "Enter student marks:\n";
    cin >> s.marks;
    while (true)
    {
        if (s.marks >= 0 && s.marks <= 50)
        {
            break;
        }

        else
        {
            cout << "Invalid marks, (0 <= marks <= 50) Enter student age:\n";
            cin >> s.age;
        }
    }
    cout << "Enter student age:\n";
    cin >> s.age;
    while (true)
    {
        if (s.age >= 10 && s.age <= 30)
        {
            break;
        }
        else
        {
            cout << "Invalid age, (10 <= age <= 30) Enter student age:\n";
            cin >> s.age;
        }
    }

    students.push_back(s);

    ofstream outfile;
    outfile.open(fileName, ios::out | ios::app);
    if (outfile.is_open())
    {
        outfile << s.name << " " << s.roll_number << " " << s.marks << " " << s.age << endl;
        outfile.close();
    }

    int n = students.size();

    mergeSort(students, 0, n - 1);
    cout << "Sorted students based on marks:\n";
    cout << "Name\tRoll Number\tMarks\tAge\n";
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << "\t" << students[i].roll_number << "\t\t" << students[i].marks << "\t" << students[i].age << endl;
    }
    return 0;
}
