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
        ll n, x, k;
        cin>>n>>x>>k;

        string s;
        cin >> s;

        for(int i=0; i<n; ++i){
            x += (s[i] == 'L') ? -1 : 1;
            k--;
            if(x == 0){
                break;
            }

        }

        ll ans = 0;
        if(x == 0){
            ans = 1;
            for(int i=0; i<n; i++){
                x += (s[i] == 'L') ? -1 : 1;
                if(x == 0){
                    ans += (k / (i+1));
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}