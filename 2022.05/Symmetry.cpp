#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <set>
#define ll long long
using namespace std;

ll t, total;

int main() {
    cin >> t;
    ll x[t], y[t];
    for (int i = 0; i < t; i++) {
        cin >> x[i] >> y[i]; 
    }

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (y[i] < y[j]) {
                swap(x[j], x[i]);
                swap(y[j], y[i]);
            }
        }
    }

    // for (int i = 0; i < t; i++) {
    //     cout << x[i] << " " << y[i] << endl;
    // }

    if (t == 3) {
        if (y[0] > 0) {
            cout << "failure\n";
        } else if (y[2] < 0) {
            cout << "failure\n";
        } else if (y[1] == 0) {
            if ((y[0] == 0) || (y[2] == 0)) {
                if ((y[0] == 0) && (y[2] == 0)) {
                    cout << "success\n";
                } else {
                    cout << "failure\n";
                }
                
            } else {
                if (x[0] == x[2]) {
                    cout << "success\n";
                } else {
                    cout << "failure\n";
                }
            }
        } else {
            cout << "failure\n";
        }

        return 0;
    }


    for (int i = 0; i < t; i++) {
        if (y[i] != 0) {
            cout << "failure\n";
            return 0;
        }
    }
    
    cout << "success\n";
}