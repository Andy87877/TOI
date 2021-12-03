#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;

    int array[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    cout << "=======================================\n";
    for (int i = 0; i < m; i++) {
        bool temp = false; //是否為要改顏色
        bool odd = false; //是不是第奇數個
        for (int j = 0; j < n; j++) {
            if (temp) { //改
                bool tempback = false; //後面是否還有黑色
                for (int k = j; k < n; k++) {
                    if (array[i][k] == 1) {
                        tempback = true;
                        break;
                    }
                }
                if (tempback) {
                    array[i][j] = 1;
                    if (array[i][j] == 1) {
                        temp = false;
                    }
                }
            } else { //不改
                if (array[i][j] == 1) {
                    temp = true;
                    if (odd) {
                        odd = false;
                    } else {
                        odd = true;
                    }
                } 
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
