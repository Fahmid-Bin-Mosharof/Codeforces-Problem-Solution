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
        int n, k;
        cin>>n>>k;

        ll MOD = 1e9 + 7;
        ll ans = 1;

        for(int i=0; i<k; i++){
            ans = (ans*n) % MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}