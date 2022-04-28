#include <iostream>
using namespace std;

int main() {
    int K, W, S, E, money = 0;
    cin >> K >> W >> S >> E;

    money += 20 + (K>2)*(K-2)*5;
    money += (W/2)*5;

    int m[5] = {185,195,205,215,225};
    if (E >= 19) {
        S -= 18;
        E -= 18;
        if (S < 0) {
            S = 0;
        }
        
        for (int i = S; i < E; i++) {
            money += m[i];
        }
    }
    cout << money << endl;
}