#include <iostream> 
using namespace std;

int main()
{
 int i, j, k, m,n;
 cin>>n;
 for(i=5; i>=n; i--)
 {
  for(j=1; j<=i; j++)
   cout << j;
  for(k=i; k<5; k++)
   cout << "**";
  for(m=i; m>=1; m--)
   cout << m;
  cout << "\n";
 }
 return 0;
}