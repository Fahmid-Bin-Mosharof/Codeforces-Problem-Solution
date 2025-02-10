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
        ll n, x, y;
        cin>>n>>x>>y;

        ll temp1 = x;
        ll temp2 = y;

        while(temp2){
            temp1 %= temp2;
            swap(temp1, temp2);
        }

        ll a = (x/temp1) * y;
        ll b = n/x - n/a;
        ll c = n/y - n/a;

        ll ans1 = (n-b+1+n) * b/2;
        ll ans2 = (1+c) * c/2;
        
        cout<<ans1-ans2<<endl;
    }
    return 0;
}