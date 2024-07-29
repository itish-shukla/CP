#include <iostream>
// #include<bits/stdc++.h> // This is not needed for simple programs
using namespace std;

#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void solve(){
    int n;
    cin>>n;
    for(int i = n; i > 0; i--) {
        // Print spaces
        for(int j = i; j >0; j--) {
            cout << " ";
            if 
        }
        // Print characters
        for (char ch = 'A', k = i; k <= n && ch <= 'Z'; k++, ch++) {
            cout << ch;
        }
        cout << endl;
    }
}


int32_t main(){
    fastio;
    // cin >> T;
    while (T--){
        solve();
    }
    return 0;
}
