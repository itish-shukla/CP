#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
int T = 1;


void solve(){
 string s;
        cin >> s;
        int n = s.size();

        int zeroes = 0;
        for (char c : s) {
            if (c == '0') zeroes++;
        }

        int cnt[2] = {0, 0};
        long long ans = 0;
        for (char c : s) {
            int bit = c - '0';
            cnt[bit]++;
            if (bit == 0) {
                if (cnt[1] > 0) ans += 1;
            } else {
                ans += (zeroes - cnt[0]);
            }
        }

        cout << ans << endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}