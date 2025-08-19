// Ayush Yadav
// 24070123028

#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){
    Student S1;
    S1.name="Ayush Yadav";
    S1.branch="E&TC";
    S1.subject="C++";
    S1.year="Second";
    S1.result=7.4;

    Student S2;
    S2.name="Antriksh Tripathi";
    S2.branch="E&TC";
    S2.subject="C++";
    S2.year="Second";
    S2.result=8.00;

    Student S3;
    S3.name="Navya Thakkar";
    S3.branch="MBBS";
    S3.subject="Biology";
    S3.year="Second";
    S3.result=8.00;

    cout<<S1.name<<endl;

    return 0;
}

// OUTPUT
// Ayush Yadav
