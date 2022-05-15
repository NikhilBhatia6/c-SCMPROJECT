#include<iostream>
using namespace std;

int main() {
   int a;
   cin>>a;
   int m = 2;
   bool divided = false;
   while(m<a){
       if(a % m == 0){

           cout<<"Not Prime";
           divided = true;
       }
         m=m+1;
   }if(!divided){
       cout<<"Prime";
   }
}
	

