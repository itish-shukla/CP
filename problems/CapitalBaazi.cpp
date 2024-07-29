#include <iostream>
#include<bits/stdc++.h>
#include <ctype.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string str,as,result;
    getline(cin,str);
    for (char c : str ){
        as=toupper(c);
        result=toupper(c);
        if (as==" "){
            cout<<"\n";
        }
        else{
            cout<<result;
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