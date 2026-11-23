#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

int main() {
    Point p1, p2, mid;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << "Center point = (" << mid.x << ", " << mid.y << ")\n";
    return 0;
}
