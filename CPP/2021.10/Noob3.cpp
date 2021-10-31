// https://replit.com/@andy8787main/TOI202110noob-3#main.cpp
#include <iostream>
using namespace std;

int main() {
    int N, M, D;
    cin >> N >> M >> D;

    int temp = 0; // M幾次
    bool flag = false;// 是否有

    while (true) {
        int total = 0; // 總和
        for (int i = 0; i < temp; i++) {
            total += M;
            if (total == D) {
                flag = true;
                cout << "YES";
                return 0;
            } else if (total > D) {
                flag = false;
                cout << "NO";
                return 0;
            }
        }

        if (total == D) {
            flag = true;
            break;
        }

        while (true) {
            total += N;
            if (total == D) {
                flag = true;
                cout << "YES";
                return 0;
            } else if (total > D) {
                break;
            }
        }
        temp += 1;
    }
    /*
    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    */
}   
