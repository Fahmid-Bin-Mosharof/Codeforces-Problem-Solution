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
        ll n;
        cin>>n;

        ll ans = 3 * (n/15);
        n %= 15;

        for(int i=0; i<=n; i++){
            if(i%3 == i%5){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}