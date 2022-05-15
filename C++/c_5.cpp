#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        int j;
        for(j=i;j<=(2*i)-1;j++){
            cout<<j;
        }
        for(int k=j-2;k>=i;k--){
            cout<<k;
        }
        cout<<endl;
    }
    
}
