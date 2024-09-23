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
};

void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
}

int main(){
    Cricketer c1("Virat",25000,53.33);
    Cricketer c2("Rohit",14000,34.33);

    print(c1);
    print(c2);

    return 0;
}