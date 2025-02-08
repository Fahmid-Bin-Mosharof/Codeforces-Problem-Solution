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
        int n, x, y;
        cin>>n>>x>>y;
        x--; y--;
        
        vector<int>a(n,1);
        int temp;
        temp = -1;
        for(int i=x+1; i<n; i++){
            a[i] = temp;
            temp *= -1;
        }

        temp = -1;
        for(int i=y-1; i>=0; i--){
            a[i] = temp;
            temp *= -1;
        }

        for(int i=0; i<n; i++){
            if(i){
                cout<<" ";
            }
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}