// https://replit.com/@andy8787main/TOI201903noob-3#main.cpp
#include <iostream>
using namespace std;

int main() {
    int money, M, K;
    cin >> money >> M >> K;

    int time = 0;
    bool flag = true; //can’t eat and drink.
    while (true) {
        if (K == 0) {//蘋果派
            K = 1;
            money -= 32;
            if (money == 0) {
                cout << time << ": Wayne eats an Apple pie, and now he doesn’t have money.";
                flag = false;
            } else if (money == 1) {
                cout << time << ": Wayne eats an Apple pie, and now he has " << money << " dollar.\n";
                flag = false;
            } else if (money > 1){
                cout << time << ": Wayne eats an Apple pie, and now he has " << money << " dollars.\n";
                flag = false;
            }
            
        } else {
            K = 0;
            money -= 55;
            if (money == 0) {
                cout << time << ": Wayne drinks a Corn soup, and now he doesn’t have money.";
                flag = false;
            } else if (money == 1) {
                cout << time << ": Wayne drinks a Corn soup, and now he has " << money << " dollar.\n";
                flag = false;
            } else if (money > 1){
                cout << time << ": Wayne drinks a Corn soup, and now he has " << money << " dollars.\n";
                flag = false;
            }
        }
        time += M;
        if (flag) {
           cout << "Wayne can’t eat and drink.";
           return 0; 
        }
        if (money <= 1) {// the end
            return 0;
        }
    }
} 
