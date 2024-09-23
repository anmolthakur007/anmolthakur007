#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
    int age;
    string name;

    Person(){
        cout<<"Parent constructor\n";
    }

    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
   
};

class Student: public Person{
    public:
    int roll;

    Student(){
        cout<<"Child constructor\n";
    }

    void getinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
    }
};

int main(){
    Student s1;
    s1.name="rahul";
    s1.age=18;
    s1.roll=213;
    s1.getinfo();

    return 0;
}