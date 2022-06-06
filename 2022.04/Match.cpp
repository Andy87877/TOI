#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll times;
    cin >> times;
    ll t[times], s[times];

    for (int i = 0; i < times; i++) {
        cin >> t[i];
    }
    for (int i = 0; i < times; i++) {
        cin >> s[i];
    }
    
    bool flag;
    vector<int> dis;
    for (int i = 0; i < times; i++) {
        flag = true;
        for (int j = 0; j < times; j++) {
            if (t[i] == s[j]) {
                flag = false;
                dis.push_back(pow(pow(i-j,2),0.5));
            }
        }
        if (flag) {
            cout << -1 << " ";
        } else {
            ll min = times;
            for (auto i: dis) {
                if (min > i) {
                    min = i;
                }
            }
            cout << min << " ";
            dis.clear();
        }
    }
}