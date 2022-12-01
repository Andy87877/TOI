// 40
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

vector<ll> food;
map<ll, vector<ll>> human;

ll max(ll a, ll b) {
    if (a < b) return b;
    return a;
}
int main() {
    Andy8787_want_AC
    ll n, a, b, ans = 0, remove = 0;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> a >> b;
        food.push_back(a);
        human[b].push_back(i);
        while (!human[food.front()].empty()) {
            ans += max((human[food.front()].front()-remove),0);
            remove++;
            human[food.front()].erase(human[food.front()].begin(),human[food.front()].begin()+1);
            food.erase(food.begin(),food.begin()+1);
        }
    }

    cout << ans << "\n";
}