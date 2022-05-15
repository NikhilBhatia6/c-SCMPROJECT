#include<iostream>
using namespace std;
class Student{
    public :
        int rollNumber;
        char name[20];
        int groupNo;
        char sub[20];

};
int main()
{
    Student s1;
    // s1.name = "Pratham" ;
    s1.groupNo = 16;
    s1.rollNumber = 123;

    cout<<"The value of s1 group no is "<<s1.groupNo<<endl;
    cout<<"The value of s1 rollnum is "<<s1.rollNumber<<endl;
    cout<<" "<<"Enter the  cin value and num value to print in all ascii value";



}