// 0
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

map<ll, vector<ll>> ma; // 關係圖
ll n,m;

int check[100002]; //0 沒check 1有迴圈 2沒迴圈
bool flag; //是否有重複
map<ll, ll> path; //當下走的東東
queue<ll> que; //將會走的點

int main() {
    Andy8787_want_AC
    memset(check, 0, sizeof(check));
    
    cin >> n >> m;
    
    for (ll i = 0; i < m; i++) {
        ll a,b;
        cin >> a >> b;
        ma[a].push_back(b);
    }

    for (ll i = 0; i < n; i++) {
        flag = false;
        path.clear();
        while (!que.empty()) { // clear
            que.pop();
        }

        if (check[i] == 0) {
            que.push(i);
            path[i]++;
        }
        while (!que.empty()) {
            bool breakflag = false;
            for (auto j: ma[que.front()]) {
                que.push(j);
                path[j]++;
                if (path[j] == 2 || check[j] == 1) {
                    flag = true;
                    breakflag = true;
                    break;
                } else if (check[j] == 2) {
                    breakflag = true;
                    break;
                }
            }
            if (breakflag) break; 
            que.pop();
        }

        if (flag) {
            for (auto i: path) {
                check[i.first] = 1;
            }
        } else {
            for (auto i: path) {
                check[i.first] = 2;
            }
        }
    }

    for (ll i = 0; i < n; i++) {
        if (check[i] == 1) {
            cout << i << " ";
        }
    }
}