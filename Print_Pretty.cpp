#include <iostream>
#include <iomanip>
using namespace std;

#define endl "\n"
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve() {
    int n;
    long double d1, d2;
    cin >> n >> d1 >> d2;
    
    // Output first number in hexadecimal format with a "0x" prefix
    cout << "0x" << hex << n << endl<<d1<<d2;
    
    // Output second number with fixed-point notation, 2 decimal places
    cout << fixed << setprecision(2) << setw(15) << setfill('_') << d1 << endl;
    
    // Output third number in scientific notation with 9 decimal places
    cout << scientific << setprecision(9) << d2 << endl;
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
