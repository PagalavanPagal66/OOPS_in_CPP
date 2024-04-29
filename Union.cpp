#include <bits/stdc++.h>
using namespace std;

union Student {
    // Defining data members
    int age;
    char grade;
    float GPA;
};

int main()
{
    union Student student1;
    student1.age = 25;
    cout << "Age : " << student1.age << endl;

    student1.grade = 'B';
    cout << "Grade : " << student1.grade << endl;

    student1.GPA = 4.5;
    cout << "GPA : " << student1.GPA << endl;

    cout << "Age : " << student1.age << endl;
}
