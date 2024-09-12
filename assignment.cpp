#include <iostream>
#include <string>
using namespace std;
class Address
{
public:
    string street;
    string pinCode;
    string state;

    Address(string street, string pinCode, string state)
    {
        this->street = street;
        this->pinCode = pinCode;
        this->state = state;
    }

    void displayAddress()
    {
        cout << "Street: " << street << ", Pin Code: " << pinCode << ", State: " << state << endl;
    }
};
class Person
{
public:
    string name;
    string aadharNo;
    Address *address;

    Person(string name, string aadharNo, Address *address)
    {
        this->name = name;
        this->aadharNo = aadharNo;
        this->address = address;
    }

    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Aadhar No: " << aadharNo << endl;
        if (address != nullptr)
        {
            address->displayAddress();
        }
    }
};
class Student : public Person
{
public:
    string studentID;
    string rollNo;
    string branch;
    string phoneNo;

    Student(string name, string aadharNo, Address *address, string studentID, string rollNo, string branch, string phoneNo)
        : Person(name, aadharNo, address), studentID(studentID), rollNo(rollNo), branch(branch), phoneNo(phoneNo) {}

    void display() override
    {
        Person::display();
        cout << "Student ID: " << studentID << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
        cout << "Phone No: " << phoneNo << endl;
    }
};
class Faculty : public Person
{
public:
    string facultyID;
    string phoneNo;

    Faculty(string name, string aadharNo, Address *address, string facultyID, string phoneNo)
        : Person(name, aadharNo, address), facultyID(facultyID), phoneNo(phoneNo) {}

    void display() override
    {
        Person::display();
        cout << "Faculty ID: " << facultyID << endl;
        cout << "Phone No: " << phoneNo << endl;
    }
};
int main()
{
    Address address1("MG Road", "400001", "Maharashtra");
    Student student("Raghav", "123456789012", &address1, "S001", "101", "Computer Science", "9876543210");

    Address address2("Linking Road", "400002", "Maharashtra");
    Faculty faculty("Mr.Varun", "987654321012", &address2, "F001", "9876543211");

    cout << "Student Details:" << endl;
    student.display();
    cout << endl;

    cout << "Faculty Details:" << endl;
    faculty.display();

    return 0;
}
