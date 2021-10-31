// https://replit.com/@andy8787main/TOI201903noob-1#main.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int G, A, H, W;
        float BMR; //BMR
        cin >> G >> A >> H >> W;

        if (G == 1) {//男生
            BMR = (13.7*W)+(5.0*H)-(6.8*A)+66;
        } else {// 女生
            BMR = (9.6*W)+(1.8*H)-(4.7*A)+655;
        }
        printf("%.2f", BMR);
        cout << endl;
    }
} 
