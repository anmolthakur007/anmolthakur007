#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int prn;

    Student(string s,int r,int p)
    {
        name=s;
        roll=r;
        prn=p;
    }
};

void print(Student s){
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.prn<<endl;

}

int main()
{
    Student s1("Anmol",45,10322);
    
    print(s1);
    
    return 0;

}