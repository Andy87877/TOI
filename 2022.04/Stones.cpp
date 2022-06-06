#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll times;
    cin >> times;
    ll x[times];
    for (int i = 0; i < times; i++) {
        cin >> x[i];
    }

    ll max = 0, min = 0, avg = 0;
    for (int i = 0; i < times; i++) {
        avg += x[i];
        if (x[max] < x[i]) {
            max = i;
        } else if (x[min] > x[i]) {
            min = i;
        }
    }
    avg /= times;
    x[min] = x[min] + (x[max]-avg);
    x[max] = avg;

    for (int i = 0; i < times; i++) {
        cout << x[i] << " ";
    }
}