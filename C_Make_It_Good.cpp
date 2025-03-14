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
        
        int ans = n-1;
        while(ans > 0){
            if(a[ans-1] >= a[ans]){
                ans--;
            } 
            else{
                break;
            }
        }

        while(ans > 0){
            if(a[ans-1] <= a[ans]){
                ans--;
            } 
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}