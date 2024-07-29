#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;



int32_t main(){
    fastio;
    cin>>T;
    map<string,int > s;
    while(T--){
            int p,q;
            string s;
    cin>>p>>s>>q;
    
    if (p==1){
        s.emplace({s,q});
    }
    if(p==2){
        s.erase(q);
    }
    if(p==3){
        if(s.find(q)!=s.end()){
            cout("Yes");
        }
        else{
            cout("No");
        }
}
    }
    return 0;
}