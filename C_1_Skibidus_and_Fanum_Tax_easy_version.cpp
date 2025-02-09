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
        int n, m;
        cin>>n>>m;

        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        ll b;
        cin>>b;

        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }

        ll ans1 = 1;
        ll ans2 = 1;
        ll x = a[0];
        ll y = b-a[0];

        for(int i=1; i<n; i++){
            ll c = a[i];
            ll d = b - a[i];
            ll temp1 = (ans1 && x <= c) || (ans2 && y <= c);
            ll temp2 = (ans1 && x <= d) || (ans2 && y <= d);
        
            ans1 = temp1;
            ans2 = temp2;
            x = c;
            y = d;
        }
        
        if(ans1 || ans2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}