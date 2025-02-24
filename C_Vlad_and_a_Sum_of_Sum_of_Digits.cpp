#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

ll ans(int n){
    ll x = 0;
    while(n){
        x += (n%10);
        n /= 10;
    }
    return x;
}

int main()
{
    fast_io;
    int t;  
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll sum = 0;
        for(int i=1; i<=n; i++){
            sum += ans(i);
        }
        cout<<sum<<endl;
    }
    return 0;
}