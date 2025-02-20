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
        string x;
        cin>>n>>x;
        
        string s1(n, '0');
        string s2(n, '0');
        int ans = 0;

        for(int i=0; i<n; i++){
            if(x[i] == '0'){
                s1[i] = s2[i] = '0';
            } 
            else if(x[i] == '2'){
                if(!ans){
                    s1[i] = '1';
                    s2[i] = '1';
                } 
                else{
                    s1[i] = '0';
                    s2[i] = '2';
                }
            } 
            else{
                if(!ans){
                    s1[i] = '1';
                    s2[i] = '0';
                    ans = 1;
                } 
                else{
                    s1[i] = '0';
                    s2[i] = '1';
                }
            }
        }
        cout<<s1<<endl<<s2<<endl;
    }
    return 0;
}