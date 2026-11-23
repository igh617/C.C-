#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int height;
};

int main() {
    Person p[5];
    int min_idx = 0;
    for (int i = 0; i < 5; i++) {
        cin >> p[i].name >> p[i].height;
        if (p[i].height < p[min_idx].height) {
            min_idx = i;
        }
    }
    cout << p[min_idx].name << " " << p[min_idx].height << "\n";
    return 0;
}
