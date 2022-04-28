// https://replit.com/@andy8787main/TOI202110noob-3#main.cpp
#include <iostream>
using namespace std;

int main() {
    int N, M, D;
    cin >> N >> M >> D;
    for (int i = 0; i <= D; i += N) { // N可以整除
        if (((D-i) % M) == 0) { // M可以整除
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

/* 舊版(很容易TLE 雖然送出沒有)
int main() {
    int N, M, D;
    cin >> N >> M >> D;

    int temp = 0; // M幾次

    while (true) {
        int total = 0; // 總和
        for (int i = 0; i < temp; i++) {
            total += M;
            if (total == D) {
                cout << "YES";
                return 0;
            } else if (total > D) {
                cout << "NO";
                return 0;
            }
        }

        if (total == D) {
            break;
        }

        while (true) {
            total += N;
            if (total == D) {
                cout << "YES";
                return 0;
            } else if (total > D) {
                break;
            }
        }
        temp += 1;
    }
}   
*/
