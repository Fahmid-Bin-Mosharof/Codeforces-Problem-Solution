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
        ll n, k, p;
        cin>>n>>k>>p;
        
        if(k >= -n*p && k <= n*p){
            cout<<(abs(k)+p-1)/p<<endl;
        } 
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}