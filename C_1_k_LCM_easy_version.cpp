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
        int n, k;
        cin>>n>>k;
        
        if(n%2 == 1){
            cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        } 
        else{
            if(n%4 == 0){
                cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
            } 
            else{
                cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
            }
        }
    }
    return 0;
}