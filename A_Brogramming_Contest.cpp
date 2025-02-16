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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int ans = 0;
        if(s[0] == '1'){
            ans = 1;
        }
        
        for(int i=1; i<n; i++){
            ans += (s[i] != s[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}