#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
//#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    int i,j;
    int arr[n],dup[n];
    for (i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            if(i==j){
                continue;
            }
            if(arr[i]%arr[j]==0)
            {
            for(int k=0;k<n;k++)
            {
            if (dup[k]==arr[i])
            {
            arr.push_back(arr[i]);
            }
                
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