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
        ll x;
        cin>>x;

        ll ans = -1;
        for(int i=0; i<30; i++){
            for(int j=0; j< 30; j++){
                ll y = (1<<i) | (1<<j);

                if(y<x && x+y> (x^y) && y+(x^y)>x){
                    ans = y;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}