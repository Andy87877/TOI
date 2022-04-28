#include <iostream>
#define int long long
using namespace std;

signed main() {
    int x,y;
    cin >> x >> y;
    int times;
    cin >> times;

    int x2,y2, minx, miny, mindic = 999999999, dic;

    for (int i = 0; i < times; i++) {
        cin >> x2 >> y2;
        dic = (x2 - x)*(x2 - x)+(y2 - y)*(y2 - y);

        if (dic < mindic) {
            mindic = dic;
            minx = x2;
            miny = y2;
        }
    }
    cout << minx << " " << miny << endl;
}