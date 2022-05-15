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
    int counter = 1;
    while (counter < a)
    {
        for (int i = 0; i < a-counter; i++)
        {
           if (arr[i]>arr[i+1])
           {
              int temp = arr[i];
              arr[i] =arr[i+1];
              arr[i+1]=temp;
           }
           
        }
        counter++;
        
    }
     cout<<"The sorted array is ";
    for (int k = 0; k < a; k++)
    {
        cout<<arr[k]<<" ";
    }
    
}
