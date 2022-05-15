#include<iostream>
using namespace std;
class student
{
    int marks;
    int roll;
    public :

    student(int m,int r)
    {
        marks = m;
        roll = r;

    };
    void display()
    {
        cout<<"Marks "<<marks<<" RollNo "<<roll<<endl;
    }
};
int main()
{
    student s1(15,87);
    // Copy the particular class for us...........
    student s2(341,123);
    s1.display();
    s2.display();
    // Copy operator..........
    s2=s1;
    cout<<"Object coppied"<<endl;
     s2.display();
     return 0;

}