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
        int n, m;
        cin>>n>>m;

        vector<vector<int>>a(n, vector<int>(m));
        unordered_set<int>us;
        unordered_map<int, int>um;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                us.insert(a[i][j]);
                um[a[i][j]] = 1;
            }
        }
      
        int x[] = {0, 1, 0, -1};
        int y[] = {1, 0, -1, 0};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int z = a[i][j];
                for(int k=0; k<4; k++){
                    int temp1 = i + x[k];
                    int temp2 = j + y[k];
                    if(temp1>=0 && temp1<n && temp2>=0 && temp2<m && a[temp1][temp2] == z){
                        um[z] = 2;
                        break; 
                    }
                }
            }
        }

        int ans = 0;
        int maximum = 0;
        for(auto& z : us){
            ans += um[z];
            maximum = max(maximum, um[z]);
        }
        cout<<ans - maximum<<endl;
    }
    return 0;
}