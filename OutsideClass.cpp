// Ayush Yadav
// 24070123028

#include<iostream>
using namespace std;

class Student
{
    public:
    void myMethod();
};

void Student::myMethod()
{
    cout<<"I am Ayush";
}

int main()
{
    Student s1;
    s1.myMethod();
}

// OUTPUT
// I am Ayush 
