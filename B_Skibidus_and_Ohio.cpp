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
        string s;
        cin>>s;

        int n = s.length();
        int ans = 0;

        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                ans = 1;
                break;
            }
        }

        if(ans){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}