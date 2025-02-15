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
        int n, x;
        cin>>n>>x;

        vector<int>a(n);
        int odd = 0;
        int even = 0;
        
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2 == 1){
                odd++;
            }
            else{
                even++;
            }
        }
        
        int ans = 0;
        for(int i=1; i<=odd; i+=2){
            if(x-i <= even && x-i >= 0){
                ans = 1;
                break;
            }
        }
        
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}