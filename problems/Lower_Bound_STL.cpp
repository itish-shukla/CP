#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int h;
    cin>>h;
    for(int i=0;i<h;i++){
        int x;
        cin>>x;
        if (binary_search(v.begin(),v.end(),x)){
            int l=lower_bound(v.begin(),v.end(),x)-v.begin();
            cout<<"Yes "<<++l<<endl;
        }
        else{
            cout<<"No "<<++upper_bound(v.begin(),v.end(),x)-v.begin()<<endl;
        }


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