#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i =a;i>=1;i--){
        int j;
        // char b = 'A' +j -1;
        for ( j = i; j <=a; j++)
        {
            cout<<char('A' +j -1);
           // b=b+1;
        }
        cout<<endl;
          
    }
}