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
        int x, y;
        cin>>x>>y;
        
        if((x+1-y) % 9 == 0 && x+1 >= y){
            cout<<"Yes"<<endl;
        } 
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}