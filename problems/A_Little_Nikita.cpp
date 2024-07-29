#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int m,n;
    cin>>m>>n;
    int n3=3*n;
    int n2=n*2;
    if ((m%2==n%2)&&(n<=m)){
        cout("Yes");
    }
    else{cout("No");}
 
}
int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}