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
        cin>>n;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        ll ans = 0;
        for(int i=0; i<n; i++){
            ll x = a[i];
            for(int j=i; j<n && (a[j]>0) == (a[i]>0); j++){
                x = max(x, a[j]);
                i = j;
            }
            ans += x;
        }
        cout<<ans<<endl;
    }
    return 0;
}