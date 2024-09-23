#include<iostream>

using namespace std;

class employee
{
    int id;
    static int count;
    public:

        void set(void){
            cout<<"enter the id: ";
            cin>>id;
            count++;
        }

        void get(void){
            cout<<"The id of the employee is : "<<id<<" and the employee number is: "<<count<<endl;
        }

        static void Count(void){
            cout<<"The value of count is "<<count<<endl;
        }

};

int employee::count=0;

int main(){
    employee r,s,t;
    r.set();
    r.get();
    employee::Count();

    s.set();
    s.get();
    employee::Count();

    t.set();
    t.get();
    employee::Count();

    return 0;
}