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

        vector<int>b(n-2);
        for(int i=0; i<n-2; i++){
            cin>>b[i];
        }

        if(n == 3){
            cout<<"YES"<<endl;
        } 
        else{
            int ans = 1;
            for(int i=0; i<b.size()-2; i++){
                if(i+2 < b.size() && b[i] == 1 && b[i+1] == 0 && b[i+2] == 1){
                    ans = 0;
                    break;
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