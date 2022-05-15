#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Please enter the no. to get prime/not prime  ";
    cin>>a;
    int b = 2;
    bool q = false;
    while(b<a){
        if(a % b == 0){
            cout<<"Not Prime"<<endl;
            q = true;
        }
        q=q+1;

    }
    if (!q)
    {
        cout<<"Prime"<<endl;
    }
    
}