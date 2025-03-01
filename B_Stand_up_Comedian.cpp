#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        int a1, a2, a3, a4;
        cin>>a1>>a2>>a3>>a4;

        if(a1 == 0){
            cout<<1<<endl;
        } 
        else{
            cout<<a1 + min(a2, a3)*2 + min(a1+1, abs(a2-a3)+a4)<<endl;
        }
    }
    return 0;
}