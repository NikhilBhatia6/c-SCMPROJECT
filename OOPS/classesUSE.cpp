#include<iostream>
using namespace std;
// #include "class.cpp"
class Student{
    public :
    int age;
    int rollNumber;
};
int main()
{
    // STATIC allocation 
    Student s1;
    s1.age = 21;
    s1.rollNumber = 101;
    cout<<s1.age<<endl;
    cout<<s1.rollNumber<<endl;
    
    // Dynamic allocation 
    Student *s2 = new Student;

    (*s2).age=56;

    s2 -> rollNumber = 3456;

    //  cout<<*s2<<endl;
    // cout<<s2.rollNumber<<endl;

}