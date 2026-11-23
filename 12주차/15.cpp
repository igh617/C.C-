#include <iostream>
#include <algorithm>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
};

int main() {
    Rect r1, r2, res;
    cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
    cin >> r2.x1 >> r2.y1 >> r2.x2 >> r2.y2;

    res.x1 = min(r1.x1, r2.x1);
    res.y1 = min(r1.y1, r2.y1);
    res.x2 = max(r1.x2, r2.x2);
    res.y2 = max(r1.y2, r2.y2);

    cout << res.x1 << " " << res.y1 << " " << res.x2 << " " << res.y2 << "\n";
    return 0;
}
