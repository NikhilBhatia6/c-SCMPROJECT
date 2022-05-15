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
    for (int i=0;i<a-1;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for (int k = 0; k < a; k++)
    {
        cout<<arr[a]<<endl;
    }
    

}