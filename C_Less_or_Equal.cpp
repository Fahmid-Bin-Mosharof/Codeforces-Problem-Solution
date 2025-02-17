#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, k;
    cin>>n>>k;
    
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    
    if(k == 0){
        if(a[0] > 1){
            cout<<a[0]-1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    } 
    else if(k==n || a[k-1] != a[k]){
        cout<<a[k-1]<<endl;
    } 
    else{
        cout<<-1<<endl;
    }
    return 0;
}