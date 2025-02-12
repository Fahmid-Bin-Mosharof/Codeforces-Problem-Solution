#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n;
    cin>>n;

    vector<int>a(n);
    int ans = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i] == 1){
            ans++;
        }
    }
    
    int maximum = -1;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int count0 = 0;
            int count1 = 0;

            for(int k=i; k<=j; k++){
                if(a[k] == 1){
                    count1++;
                }
                else{
                    count0++;
                }
            }
            
            int x = count0 - count1;
            if(x>maximum){
                maximum = x;
            }
        }
    }

    if(ans == n){
        cout<<n-1<<endl;
    }
    else{
        cout<<ans+maximum<<endl;
    }
    return 0;
}