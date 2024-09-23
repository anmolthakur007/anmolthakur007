#include<iostream>
#include<string>

using namespace std;

class teacher
{
    private: 
    double salary;

    public:

    string name;
    string dept;
    string subject;

    teacher(){
        cout<<"HI\n";
    }

    teacher(string n, string d, string s, double sal ) //parameterised constructor
    {
        name = n;
        dept=d;
        subject=s;
        salary=sal;
    }

    

    void changeDept(string newDept)
    {
        dept=newDept;
    }

    void setSalary(double s)
    {
        salary=s;
    }

    double getSalary(){
        return salary;
    }

    void getinfo(){
        cout<<name<<endl;
    }
};

int main()
{
    teacher t1;
    teacher t2("anmol", "computer","c++",20000);
    t1.name="Anmol";
    t1.dept="Computer";
    t1.subject="oops";
    t1.setSalary(25000);
    cout<<t1.getSalary()<<endl;
    t2.getinfo();
    teacher t3(t2);
    t3.getinfo();

    return 0;
}