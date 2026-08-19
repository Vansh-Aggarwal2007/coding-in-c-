#include<iostream>
using namespace std;

class studentList {
    public:
    string name;
    int rollNo;
    int age;
    int Class;
    char section;
    void studentList(string name, int roll, int age, int Class, char sec) {
        name = name;
        rollNo = roll;
        age = age;
        Class = Class;
        section = sec;
    }
    void studentDetalis () {
        cout << "name is: "<< name << endl << "Roll No." << rollNo << endl << "Age of student is: "<< age << endl << "class and section are: " << Class << " " << section << endl << endl;
    }
}

int main () {

    studentList obj1("vedant", 45, 20, 14, 34);
    studentList obj2("vansh", 47, 19, 14, 34);
    studentList obj3("uttam", 50, 20, 14, 34);
    studentList obj4("shreya", 13, 19, 14, 32);
    studentList obj5("vriti", 23, 19, 13, 29);

    obj1.studentDetalis();
    obj2.studentDetalis();
    obj3.studentDetalis();
    obj4.studentDetalis();
    obj5.studentDetalis();
}