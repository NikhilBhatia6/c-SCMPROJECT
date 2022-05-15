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
    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    for (int k = 0; k < a; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    
}