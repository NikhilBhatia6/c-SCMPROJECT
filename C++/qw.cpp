#include<iostream>
using namespace std;
// int main()
class student
{
    int rollNo;
    char name[20];
    public:
    void input();
    void output()
    {
        cout<<rollNo<<name;
    }
};
void student::input()
{
    cin>>rollNo>>name;
}
int main()
{
    student s1;
    s1.input();
    s1.output();
    return 0;

}