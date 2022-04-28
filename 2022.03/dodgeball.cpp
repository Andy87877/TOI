#include <iostream>
using namespace std;

int main() {
    int X, R, V;
    cin >> X >> R >> V;
    int times;
    cin >> times;

    int P, S; // ball speed
    for (int i = 0; i < times; i++) {
        cin >> P >> S;
        if (((X-R) > P) || ((X+R) < P)) {
            NULL; // Nothing
        } else {
            if (S > V) {
                if (X > P) {
                    X += 15;
                } else {
                    X -= 15;
                }
            } else {
                X = P;
            }
        }
    }
    cout << X;
}