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
            string s1;
    cin>>p>>s1;
    
    if (p==1){
        cin>>q;
        if (s.find(s1)!=s.end()){
            s[s1]+=q;
        }
        else{
            s[s1]=q;}
        

    }
    if(p==2){
        s.erase(s1);
    }
    if(p==3){
        if(s.find(s1)!=s.end()){
            cout<<s[s1]<<endl;
        }
        else{
            cout(0);
        }
}
    }
    return 0;
}