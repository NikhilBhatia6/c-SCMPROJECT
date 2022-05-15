#include<iostream>
using namespace std;
int binarySearch(int arr[],int a, int key)
{
    int start = 0;
    int end = a;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        } 
    }
    return -1;
}
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
    int key;
    cin>>key;
    cout<<binarySearch(arr,a,key)<<endl;
    return 0;
}
// [12,23,34,45]
//   0, 1, 2, 3