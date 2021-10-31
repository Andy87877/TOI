// https://replit.com/@andy8787main/TOI202110noob-1#main.cpp
#include <iostream>
using namespace std;

int main() {
    int a, s, ans;
    cin >> a >> s;
    ans = (s/a)+(s%a!=0);
    cout << ans;
}
