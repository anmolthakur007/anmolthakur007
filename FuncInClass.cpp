#include<iostream>
#include<string>

using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }

    void print(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
};

int main(){
    Cricketer c1("Virat",25000,53.33);
    Cricketer c2("Rohit",14000,34.33);

    c1.print();
    c2.print();

    return 0;
}