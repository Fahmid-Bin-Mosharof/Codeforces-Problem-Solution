#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    
    if(x1 == x2){
        int x = abs(y2 - y1);
        cout<<x1+x<<" "<<y1<<" "<<x2+x<<" "<<y2<<endl;
    } 
    else if(y1 == y2){
        int y = abs(x2 - x1);
        cout<<x1<<" "<<y1+y<<" "<<x2<<" "<<y2+y<<endl;
    } 
    else if(abs(x2-x1) == abs(y2-y1)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    } 
    else{ 
        cout<<-1<<endl;
    }
    return 0;
}