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
        int n;
        string s;
        cin>>n>>s;
        
        ll cnt = count(s.begin(), s.end(),'-');
        ll x = n - cnt;
        ll ans = (cnt/2) * (cnt-cnt/2) * x;
        
        cout<<ans<<endl;
    }
    return 0;
}