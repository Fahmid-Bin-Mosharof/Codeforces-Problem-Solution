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
        ll n, h;
        cin>>n>>h;

        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll left = 1;
        ll right = h;

        while(left < right){
            ll mid = (left+right) / 2;
            ll x = 0;

            for(int i=0; i<n-1; i++){
                x += min(mid, a[i+1] - a[i]);
            } 
            x += mid;  

            if(x >= h){
                right = mid; 
            }
            else{
                left = mid + 1; 
            }
        }
        cout<<left<<endl;
    }
    return 0;
}