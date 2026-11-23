#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Person {
    string name;
    int height;
    double weight;
};

bool cmp(const Person& a, const Person& b) {
    return a.name < b.name;
}

int main() {
    Person p[5];
    for (int i = 0; i < 5; i++) {
        cin >> p[i].name >> p[i].height >> p[i].weight;
    }
    sort(p, p + 5, cmp);
    cout.setf(ios::fixed);
    cout.precision(1);
    for (int i = 0; i < 5; i++) {
        cout << p[i].name << " " << p[i].height << " " << p[i].weight << "\n";
    }
    return 0;
}
