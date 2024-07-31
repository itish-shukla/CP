#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"

#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    deque<int> dq;

    for(int i=0;i<n;i++){
        cin >> v[i];
        if (i<k){
            dq.push_back(v[i]);
        }
    }

    for(int i=0;i<n+1-k;i++){
        cout<<*max_element(dq.begin(),dq.end())<<" ";
        dq.pop_front();
        dq.emplace_back(v[i+k]);

    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}