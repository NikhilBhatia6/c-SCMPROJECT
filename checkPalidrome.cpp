#include<iostream>
#include<cstring>
using namespace std;
void palindromeString()
{
    char string1[100];
    int i,length;
    int flag =0;

    cout<<"Enter a Strig: ";
    cin>>string1;

    length = strlen(string1);
    for (int  i = 0; i < length; i++)
    {
        if (string1[i] != string1[length -i -1])
        {
           flag = 1;
           break;
        }    
    }
    if (flag)
        {
            cout << string1 <<" is not Palidrome";
        }
        else
        {   
             cout << string1 <<" is Palidrome";
        }
    

}
int main()
{
    palindromeString();
}