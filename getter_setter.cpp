#include<iostream>

using namespace std;

class hero{
    private:
    int health;
    
    public: 
    char level;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    int setHealth(int x){
        health=x;
    }

    char setLevel(char y){
        level=y;
    }
    
};

int main(){

    hero h;

    h.setHealth(100);
    h.setLevel('O');

    cout<<h.getHealth()<<endl;
    cout<<h.getLevel()<<endl;


}