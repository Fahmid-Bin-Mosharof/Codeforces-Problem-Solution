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

        vector<ll>a(n);
        unordered_map<ll, ll>um;
        for(int i=0; i<n; i++){
            cin>>a[i];
            um[a[i]]++;
        }

        ll len = 0;
        ll l = -1;
        ll r = -1;
        for(int i=0; i<n;){
            if(um[a[i]] == 1){
                ll x = i;
                while(i < n && um[a[i]] == 1){
                    i++;
                }
                if(i-x > len){
                    len = i - x;
                    l = x;
                    r = i - 1;
                }
            }
            else{
                i++;
            }
        }

        if(len == 0){
            cout<<0<<endl;
        } 
        else{
            cout<<l+1<<" "<<r+1<<endl;
        }
    }
    return 0;
}
