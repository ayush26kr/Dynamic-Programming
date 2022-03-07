//Using Tabulation
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value to be find (n) :";
    cin>>n;
    int prev2=0;
    int prev1=1;
    int curr;
    for(int i=2;i<=n;i++){
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1;
    
}
