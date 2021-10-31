// https://replit.com/@andy8787main/TOI201904noob-1#main.cpp
#include <iostream>
using namespace std;

int main() {
    int times; // 幾次
    cin >> times;
    int r[times];// 留言

    // cin
    for (int i = 0; i < times; i++) {
        cin >> r[i];
    }

    int B; // 底數
    B = r[times-1];

    int total = 0; // 加總
    for (int i = 1; i <= times; i++) {
        if ((i % B) == 1) {//基數 B 後餘數為 1 的索引值
            total += r[i-1];
        }
    }

    int M; //中獎留言
    M = total % times;

    
    if (M == 0) { // 求索引值
        cout << times << " ";
        M = times-1;
    } else {
        cout << M << " ";
        M -= 1; 
    }

    cout << r[M] << endl;
} 
