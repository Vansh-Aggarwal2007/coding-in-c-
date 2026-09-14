//implement a program using smart pointer (shared pointer, unique pointer) to manage dynamic memory safety and avoid memory leakage
#include <iostream>
#include <memory>
using namespace std;
class Student
{
public:
    int marks;
    Student(int m)
    {
        marks = m;
    }
    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    unique_ptr<Student> s1 = make_unique<Student>(85);
    cout << "Using Unique Pointer:" << endl;
    s1->display();
    shared_ptr<Student> s2 = make_shared<Student>(90);
    shared_ptr<Student> s3 = s2;
    cout << "\nUsing Shared Pointer:" << endl;
    s2->display();
    cout << "Number of owners: "<< s2.use_count() << endl;
    return 0;
}