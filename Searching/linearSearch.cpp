#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout<<"PLease enter the number "<<endl;
        cin>>arr[i];
    }
    int x;
    cin>>x;
    for(int k = 0; k < a; k++)
    {
        if (arr[k] == x)
        cout<<"Found at index "<<k;

         
    }

}