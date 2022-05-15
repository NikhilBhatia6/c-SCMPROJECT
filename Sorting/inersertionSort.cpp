
#include <iostream>

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
    for(int i=1; i<a; i++)
    {
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1]=current;
    }
     for (int k = 0; k < a; k++)
    {
        cout<<arr[k]<<" ";
    }
}