#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int prn;
};

void print(Student s){
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.prn<<endl;

}

int main()
{
    Student s1,s2,s3;
    s1.name="QWERTY";
    s1.roll=123456;
    s1.prn=873;

    s2.name="poiyr";
    s2.roll=19342;
    s2.prn=125326;

    s3.name="ASDFGH";
    s3.roll=23746;
    s3.prn=15426;
    
    print(s1);
    print(s2);
    print(s3);


}