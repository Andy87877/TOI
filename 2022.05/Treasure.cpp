#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

ll n, i, j, k, l, judge, tempk, temp, test;
bool flag = true, flagmid; // NO

int main() {
    cin >> n;
    ll p[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> p[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp = -1;
            for (k = 0; k < n; k++) {
                if (temp < p[i][k]) {
                    temp = p[i][k];
                }
            }
            if (temp == p[i][j]) {
                temp = 1001;
                for (k = 0; k < n; k++) {
                    if (temp > p[k][j]) {
                        temp = p[k][j];
                    }
                }
                if (temp == p[i][j]) {
                    cout << i << " " << j << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
}