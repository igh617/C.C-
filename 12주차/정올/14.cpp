#include <iostream>
#include <string>
using namespace std;

struct Info {
    string name;
    string tel;
    string addr;
};

int main() {
    Info p[3];
    int first_idx = 0;
    for (int i = 0; i < 3; i++) {
        cin >> p[i].name >> p[i].tel >> p[i].addr;
        if (p[i].name < p[first_idx].name) {
            first_idx = i;
        }
    }
    cout << "name : " << p[first_idx].name << "\n";
    cout << "tel : " << p[first_idx].tel << "\n";
    cout << "addr : " << p[first_idx].addr << "\n";
    return 0;
}
