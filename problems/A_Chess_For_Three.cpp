#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int p,q,r;
    cin>>p>>q>>r;
    if ((p==q)&&(p==r)){
        if (p%2==0){
            cout(p);
        }
        else{
            cout("-1");
        }
    
    }
    else if ((p==q)&&(q!=r)){
        int rq=r-q;
        if((rq%2==0)||r%2==0){
            if((p+q)>r){
                cout<<p+(q-r)<<"\n";

            }
            else{
                cout<<2*p<<"\n";
            }

        }

    }
    else {
        if ((p+q)>r){
            cout<<q+(r-p)<<"\n";

        }
        else{
            cout<<(p+q)<<"\n";
        }
    }
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}