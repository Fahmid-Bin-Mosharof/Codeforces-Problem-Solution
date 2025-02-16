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
        
        vector<ll>b(n+1, 0);
        for(int i=1; i<=n; i++){
            b[i] = b[i-1] + max(0LL, a[i-1]);
        }
        
        vector<ll>c(n+1, 0);
        for(int i=n-1; i>=0; i--){
            c[i] = c[i+1] + max(0LL, -a[i]);
        }
    
        ll ans = 0;
        for(int i=0; i<=n; i++){
            ans = max(ans, b[i]+c[i]);
        }  
        cout<<ans<<endl;
    }
    return 0;
}