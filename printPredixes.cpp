#include<iostream>
// #include<cstring>
using namespace std;
void printPrefixers(char input[])
{
    for (int i = 0;input[i] != '\0'; i++)
    {
       for (int k = 0; k <= i; k++)
       {
           cout<<input[k];
       }
       cout<<endl;
    }
    
}
int main()
{
    char input[30] = "Pratham";
    printPrefixers(input);
}