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

        vector<int>a(n);
        int ans = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            ans += a[i];
        }

        cout<<ans-n+1<<endl;
    }
    return 0;
}