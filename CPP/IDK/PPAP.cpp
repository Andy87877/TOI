// https://toi-reg.csie.ntnu.edu.tw/wp-content/uploads/question/201910/B2-PPAP.pdf

#include <iostream>
#define int long long
using namespace std;

signed main() {
    int now = 0, num, times = 1, start = 1, end = 4;
    string PPAP[4] = {"Pen","Pineapple","Apple","Pineapple pen"};
    cin >> num;

    for (int i = 1; i < num; i++) {
        start = now+1;
        now += 4*i;
        if (num <= now) {
            end = now;
            times = i;
            break;
        }
    }
    //cout << start << " " << num << " " << end << " " << times << endl;

    int mid = (start+end)/2;
    if (num-start < end-num) {//前面
        if (num-start < mid-num) {//最前
            cout << PPAP[0];
        } else {//前中
            cout << PPAP[1];
        }
    } else { //後面
        if (end-num > num-mid) { //後中
            cout << PPAP[2];
        } else {
            cout << PPAP[3];
        }
    }
}
