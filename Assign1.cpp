#include<iostream>
#include<string>

using namespace std;

class student{
    public:
        int marks1,marks2;
        string name;
        int roll;
        char Class;
        int div;
        string dob;
        long aadhar;
        string blood;
        string address;
        long tele;
        static int count;

        student(){
            count++;
        }  

        static int showcount(){
            return count;
        }

        friend void calmarks(student);

        void getinfo(){
            cout<<"Enter your name: "<<endl;
            getline(cin>>ws,name);
            cout<<"Enter your roll no: "<<endl;
            cin>>roll;
            cout<<"Enter Class: "<<endl;
            cin>>Class;
            cout<<"Enter your division: "<<endl;
            cin>>div;
            cout<<"Enter your maths marks: "<<endl;
            cin>>marks1;
            cout<<"Enter your physics: "<<endl;
            cin>>marks2;
            cout<<"Enter your DOB: "<<endl;
            getline(cin>>ws,dob);
            cout<<"Enter your Aadhar: "<<endl;
            cin>>aadhar;
            cout<<"Enter your blood grp: "<<endl;
            getline(cin>>ws,blood);
            cout<<"Enter your Address: "<<endl;
            getline(cin>>ws,address);
            cout<<"Enter your Telephone: "<<endl;
            cin>>tele;
        }

        void print(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Class: "<<Class<<endl;
            cout<<"Div: "<<div<<endl;
            cout<<"Marks in maths: "<<marks1<<endl;
            cout<<"Marks in physics: "<<marks2<<endl;
            cout<<"DOB: "<<dob<<endl;
            cout<<"Aadhar: "<<aadhar<<endl;
            cout<<"Blood grp: "<<blood<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Telephone: "<<tele<<endl;
        }

};

int student::count=0;

void calmarks(student y){
    int marks=(y.marks1+y.marks2)/2;
    cout<<"Percentage"<<y.name<<":"<<marks<<endl;
}

int main(){
    student s1;
    student s2;
    s1.getinfo();
    s2.getinfo();
    s1.print();
    s2.print();

    cout<<endl<<"Total number of students:"<<student::showcount()<<endl;

    calmarks(s1);
    calmarks(s2);

    return 0;
}