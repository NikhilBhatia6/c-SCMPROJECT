#include<iostream>
using namespace std;
class student{
    // if we dont declare any modified accessifier than the defaut it is PRIVATE
    
        int roll;
        int marks;
        char name[20];
    public :
            int  getRoll(int a){
                roll = a;
                return roll;
            };
       int getMarks(int b){
                 marks = b;
                return marks;
        };
        // Only functions in public modifiers can access the data from main....
        void getname(){
            cout<<"Enter name :";
            cin>>name;
        }


        // To display the given value to the class 
        void display()
        {
            cout<<"Name "<< name <<endl<< "RollNo. "<< roll <<endl<<"Marks "<<marks<<endl;
        };

};
   // HOW TO ACCESS PRIVATE CLASSESS PROPERTIES
int main()
{
    student s1;
    s1.getRoll(211);
    s1.getMarks(12);
    s1.getname();

    s1.display();

  
    
}

