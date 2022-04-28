// https://replit.com/@andy8787main/TOI202110noob-2
#include <iostream>
using namespace std;

int main() {
    int times;
    cin >> times;
    int l[times+1];
    // cin
    l[0] = 1;
    for (int i = 1; i <= times; i++) {
        cin >> l[i];
    }

    int total = 0;
    for (int i = 0; i < times; i++) {
        if (l[i] > l[i+1]) {//下樓
            total += 2*(l[i]-l[i+1]);
        } else {
            total += 3*(l[i+1]-l[i]);
        }
    }
    /*
    // last
    if (l[times-2] > l[times-1]) {//下樓
        total += 2*(l[times-2]-l[times-1]);
    } else {
        total += 3*(l[times-1]-l[times-2]);
    }
    */
    cout << total;
}
