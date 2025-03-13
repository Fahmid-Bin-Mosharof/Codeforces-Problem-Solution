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

        string s;
        cin>>s;
        
        int zero = 0;
        int one = 0;

        while(zero<n && s[zero] == '0'){
            zero++;
        }
        while(one<n-zero && s[n-1-one] == '1'){
            one++;
        }
        
        if(zero+one == n){
            cout<<s<<endl;
        } 
        else{
            cout<<string(zero,'0')+"0" + string(one,'1')<<endl;
        }
    }
    return 0;
}