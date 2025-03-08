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
        ll a1, K;
        cin>>a1>>K;
        
        for(ll i=1; i<K; i++){
            ll minimum = 9;
            ll maximum = 0;
            ll n = a1;
            
            while(n > 0){
                ll x = n % 10;
                if(x < minimum){
                    minimum = x;
                }
                if(x > maximum){
                    maximum = x;
                }
                n /= 10;
            }
            
            if(minimum == 0){
                break;
            }
            a1 += minimum * maximum;
        }
        cout<<a1<<endl;
    }
    return 0;
}