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
        string w;
        cin>>w;

        int n = w.size();
        w.erase(n-2);
        w += "i";

        cout<<w<<endl;
    }
    return 0;
}