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

        vector<int>h(n);
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        sort(h.begin(), h.end());
        
        int x = 0;
        int y = INT_MAX;

        for(int i=0; i<n-1; i++){
            if(h[i+1] - h[i] < y){
                y = h[i+1] - h[i];
                x = i;
            }
        }
        cout<<h[x]<<" ";

        for(int i=x+2; i<n; i++){
            cout<<h[i]<<" ";
        }

        for(int i=0; i<x; i++){
            cout<<h[i]<<" ";
        }
        cout<<h[x+1]<<endl;
    }
    return 0;
}