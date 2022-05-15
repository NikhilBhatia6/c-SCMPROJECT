#include<iostream>
using namespace std;
class student{
    
    int marks;
    int roll;

    // CONSTRUCTOR
    public :
        student()
        {
            marks = 129;
        }

        student(int roll)
        {
            this -> roll = roll;
            
        }

        void display()
        {
            cout<<" "<<this ->marks;
        }
    
};
int main()
{
    student s1;
    student s2(s1);

    s1.display();
    s2.display();
    
}