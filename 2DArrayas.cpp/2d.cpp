#include<iostream>
using namespace std;
int main()
{
    int row,colum;
    cout<<"Enter the Rows and Colum for The array: "<<endl;
    cin>>row>>colum;

    int arr[row][colum];
    // Taking input for array.........
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    // Output of the array..........
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}