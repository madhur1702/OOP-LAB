#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name; 
    Person(string name) {
        this->name = name;
    }

  
    string getName(string name) {
        return this->name;
    }
};


class Student : public Person {
public:
    int averageMarks;

    Student(string name, int averageMarks) : Person(name) {
        this->averageMarks = averageMarks;
    }


    int getGrade() {
        return averageMarks;
    }
};


class Professor : public Person {
public:
    int salary; 
    

    Professor(string name, int salary) : Person(name) {
        this->salary = salary;
    }


    int getSalary() {
        return salary;
    }
};

int main() {
    Student student("Jay", 85);
    Professor professor("Mr.John", 100000);

    cout << "Student Name: " << student.getName(student.name) << endl;
    cout << "Student Grade: " << student.getGrade() << endl;

    cout << "Professor Name: " << professor.getName(professor.name) << endl;
    cout << "Professor Salary: " << professor.getSalary() << endl;

    return 0;
}
