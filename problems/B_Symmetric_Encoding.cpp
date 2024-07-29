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
    string s1,s2;
    int index;
    cin>>s1;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(s1[i]==s1[j]){
                break;
            }
        if (j==i){
            s2[index++]=s1[i];
        }
        
        for(int i=0;i<s2.length();i++)
        {
            for(j=s2.length();j>0;j--){
                
            }
        }
        
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