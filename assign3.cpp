#include<iostream>
#include<string.h>
using namespace std;

class Employee{
public:
string Ename;
int Empid;

Employee(){
Ename="default";
Empid=0;
}

Employee(string n,int m){
inp();
Ename=n;
Empid=m;
dis();
}

virtual void earnings(){

}

void inp(){
cout<<"Enter the name of the employee: "<<endl;
cin>>Ename;
cout<<"Enter the id of the employee: "<<endl;
cin>>Empid;
}

void dis(){
cout<<"Employee's name is:"<<Ename<<endl;
cout<<"Employee's id is:"<<Empid<<endl;
}

};



class sal_emp: public Employee {
public:
double week_sal;

sal_emp(){
week_sal=0;
dis();
}

sal_emp(double n){
week_sal=n;
dis();
}

void earnings(){
cout<<"The weekly salary is: "<<week_sal<<endl;
}

};



class hr_emp: public Employee {
public:
double wage;
int hrs;
int hr_sal;

hr_emp(){
wage=0;
hrs=0;
dis();
}

hr_emp(double n,int m){
wage=n;
hrs=m;
dis();
}

void earnings(){
if(hrs<40) hr_sal=hrs*wage;
else hr_sal=40*wage+(((hrs-40)*wage)*1.5);
cout<<"Salary is:"<<hr_sal<<endl;
}
};




class com_emp: public Employee {
public:
double G_sales;
double C_rate;
double C_sal;

com_emp(){
C_sal=0;
dis();
}

com_emp(double m,double p){
G_sales=m;
C_rate=p;
dis();
}

void earnings(){
C_sal=G_sales*C_rate;
cout<<"Salary is:"<<C_sal<<endl;
}
};

int main(){
Employee e1,e2("ABC",1);
sal_emp s1,s2(566);
hr_emp h1,h2(590,4567);
com_emp c1,c2(23456,345678);
}
