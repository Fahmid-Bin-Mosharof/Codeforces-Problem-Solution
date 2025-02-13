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
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        if(a[0] != a[1]){
            cout<<"YES"<<endl;
        }
        else{
            int ans = 0;
            for(int i=1; i<n; i++){
                if(a[i] % a[0] != 0){
                    ans = 1;
                }
            }

            if(ans){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}