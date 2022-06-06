#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    ll local[n];
    m--;

    for (int i = 0; i < n; i++) {
        cin >> local[i];
    }

    bool flag;
    ll ans = 0, temp;

    // left
    if (m != 0) {
        temp = local[m];
        flag = true;
        for (int i = m; i > 0; i--) {
            if ((temp < local[i-1]) && (local[i] < local[i-1])) {
                //cout << local[i] << ' ' << local[i-1] << endl;
                ans++;
                temp = local[i-1];
            }
        }
    }

    // right
    if (m != n-1) {
        temp = local[m];
        flag = true;
        for (int i = m; i < n-1; i++) {
            if ((temp < local[i+1]) && (local[i] < local[i+1])) {
                //cout << local[i] << ' ' << local[i+1] << endl;
                ans++;
                temp = local[i+1];
            }
        }
    }
    
    cout << ans;
}