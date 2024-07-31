#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,q;
    
   
    cin>>n>>q;
     vector <vector<int>> v(n);

    for(int i=0;i<n;++  i){
        int lenv1;
        cin>>lenv1;
        v[i].resize(lenv1);
        for (int j=0;j<lenv1;++j){
            
            cin>>v[i][j];
        }
    }
    for (int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        cout<<v[x][y]<<endl;
    }



}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}