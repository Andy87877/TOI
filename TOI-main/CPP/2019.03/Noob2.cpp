// https://replit.com/@andy8787main/TOI201903noob-2#main.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; //班上總共有幾位同學 
    cin >> n;
    int here[3];
    cin >> here[0] >> here[1] >> here[2];

    for (int i = n; i > 0; i--) {
        bool flag = true;
        for (int j = 0; j < 3; j++) {
            if (i == here[j]) {
                flag = false;
            }
        }
        if (flag) {
            cout << "No. " << i << endl;
        }
    }
    
} 
