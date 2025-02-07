#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n;

    vector<int>a(n);
    cin>>a[0];

    vector<int>sum(n);
    sum[0] = a[0];
    for(int i=1; i<n; i++){
    	cin>>a[i];
        sum[i] = sum[i-1] + a[i];
    }
    
    cin>>m;
    for(int i=0; i<m; i++){
        int q;
        cin>>q;
        
        int left = 0;
        int right = n-1;
        int ans = 0;

        while(left <= right) {
            int mid = left + (right-left) / 2;
            if(sum[mid] >= q){
                ans = mid+1;
                right = mid-1;
            } 
            else{
                left = mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}