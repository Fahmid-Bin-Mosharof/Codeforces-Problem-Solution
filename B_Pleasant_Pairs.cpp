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

        vector<ll>a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        ll ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=a[i]-i; j<=n; j+=a[i]){
                if(j>=0 && j>i){ 
                    if(a[i]*a[j] == i+j){ 
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}