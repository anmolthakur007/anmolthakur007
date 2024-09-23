/*
Name:- Anmol Thakur
PRN:- 1032233612
Roll No.:- 45
*/


#include<iostream>
#include<string>

using namespace std;

class Hotel{
	
	string customer_name,city,room_type;
	int customer_id,income,age;

public:
	Hotel(){
		customer_name="";
		city="";
		room_type="";
		customer_id=0;
		income=0;
		age=0;
	}
	
	void accept(){
		cout<<"Enter Customer Name: ";
		cin>>customer_name;
	}
	
	void display(){
		cout<<"The name of the customer: "<<customer_name<<endl;
	}
	
	int getage(){
		cout<<"Enter Age: ";
		cin>>age;
		return age;
	}
	
	int getincome(){
		cout<<"Enter income: ";
		cin>>income;
		return income;
	}
	
	string getcity(){
		cout<<"Enter City: ";
		cin>>city;
		return city;
	}
	
	string getroom_type(){
		cout<<"Enter Room Type: ";
		cin>>room_type;
		return room_type;
	}
};

int main(){
	for(int i=1;i<=5;i++){
	Hotel hi;
	hi.accept();
	hi.display();
	
	try{
		int age=hi.getage();
		if(age<18 || age>55){
			throw (age);
		}
		else{
			cout<<"Age "<<age<<" is within the acceptable range."<<endl;
			}
		}
		catch(int age){
			cout << "Invalid age: " << age << ". Age must be between 18 and 55." << endl;
			break;
		}
		
		try{
		int income=hi.getincome();
		if(income < 50000 || income > 100000){
			throw (income);
		}
		else{
			cout << "Income " << income << " is within the acceptable range." << endl;
			}
		}
		catch(int income){
			cout << "Invalid income: " << income << ". Income must be between 50,000 and 100,000." << endl;
			break;
		}
		
		try {
        	string city = hi.getcity();
        	if (city == "pune" || city == "mumbai") {
            	cout << "City " << city << " is within the acceptable range." << endl;
            	} 
        	else {
            throw (city);
            }
		}
          catch (string city) {
        		cout << "Invalid city: " << city << ". City must be either Pune or Mumbai." << endl;
    			break;
    		}
    		try {
        		string room_type = hi.getroom_type();
        	if (room_type == "delux" || room_type == "non-delux") {
            	cout << "Room type " << room_type << " is within the acceptable range." << endl;
        		} 
        	else {
            throw (room_type);
        		}
        	}
    		catch (string room_type) {
        		cout << "Invalid room type: " << room_type << ". Room type must be either delux or non-delux." << endl;
   	 		break;
   	 	}
   	 }
	return 0;
} 
