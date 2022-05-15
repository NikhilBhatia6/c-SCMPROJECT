#include<iostream>
using namespace std;

int main()
{
    int len;
    cin>>len;
    char input[len];
    cout<<"Enter the String :";
    cin>>input;

    char replace;
    cout<<"Enter the word to replace :";
    cin>>replace;

    char newChar;
    cout<<"Enter the Word to get after replace :";
    cin>>newChar;

    for (int i = 0; i <len ; i++)
    {
        if (input[i] == replace)
        {
            input[i] = newChar;
        }
        
    }
    for (int k = 0; k < len; k++)
    {
        cout<<input[k]<< " ";
    }
    
    
}