#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,num,sum=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
      sum=sum*num;
    }
    if ((sum%10==2)||(sum%10==5)||(sum%10==3)){
        cout("YES");
    }
    else{
        cout("NO");
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