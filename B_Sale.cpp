#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n>>m;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());

    int sum = 0;
    for(int i=0; i<m && arr[i]<0; i++){
        sum -= arr[i];
    }
    cout<<sum<<endl;
    return 0;
}