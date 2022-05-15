#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i <a; i++)
    {
        cout<<"Enter the no."<<endl;
        cin>>arr[i];

    }
    int sum=0;
    for (int i = 0; i<a;i++)
    {
        sum= sum+arr[i];
    } 
    cout<<"Sum is "<<sum;
    return 0;
    
    
}