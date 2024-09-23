#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollno;
    string division;
    string dateofbirth;
    int aadharno;
    string bloodgroup;
    int contactaddress;
    int telephonenumber;
    static int count;

    // Default Constructor
    Student() {
        name = "Anmol";
        rollno = 9;
        division = "J";
        dateofbirth = "1/1/1";
        aadharno = 123456789;
        bloodgroup = "o+";
        contactaddress = 123;
        telephonenumber = 674326;
    }

    // Parameterized Constructor
    Student(string n, int r, string d, string dob, int a, string bg, int ca, int teln) {
        name = n;
        rollno = r;
        division = d;
        dateofbirth = dob;
        aadharno = a;
        bloodgroup = bg;
        contactaddress = ca;
        telephonenumber = teln;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        rollno = s.rollno;
        division = s.division;
        dateofbirth = s.dateofbirth;
        aadharno = s.aadharno;
        bloodgroup = s.bloodgroup;
        contactaddress = s.contactaddress;
        telephonenumber = s.telephonenumber;
    }

    void putdata() {
        cout << "name: " << name << endl;
        cout << "rollno: " << rollno << endl;
        cout << "division: " << division << endl;
        cout << "dateofbirth: " << dateofbirth << endl;
        cout << "aadharno: " << aadharno << endl;
        cout << "bloodgroup: " << bloodgroup << endl;
        cout << "contactaddress: " << contactaddress << endl;
        cout << "telephonenumber: " << telephonenumber << endl;
    }
};

int main() {
    // Create a student object using default constructor
    Student s1;
    cout << "Default constructor called" << endl;
    s1.putdata();

    // Parameterized constructor
    cout << "Parameterized constructor called" << endl;
    Student s2("abc", 1, "A", "01/01/01", 123456, "B+", 123, 9876543210);
    s2.putdata();

    // Copy constructor
    cout << "Copy constructor called" << endl;
    Student s3(s2);
    s3.putdata();

    return 0;
}