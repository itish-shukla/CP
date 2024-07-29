#include <iostream>
#include <iomanip>
using namespace std;

#define endl "\n"
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve() {
    int n;
    long double d;
    cin >> n >> d;
    cout << "0x" << hex << n << endl;
    cout << fixed << setprecision(6) << d << endl;
}

int32_t main() {
    fastio;
    int T = 1;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}