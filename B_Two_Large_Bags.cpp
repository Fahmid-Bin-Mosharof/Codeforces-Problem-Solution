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

        vector<int>a(n+1, 0);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a[x]++;
        }

        int ans = 1;
        for(int i=1; i<=n; i++){
            if(a[i] == 1){
                ans = 0;
                break; 
            }

            if(a[i] > 2){
                a[i+1] += a[i] - 2;
                a[i] = 2;
            }
        }
       
        for(int i=1; i<=n; i++){
            if(a[i]%2 != 0){
                ans = 0;
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