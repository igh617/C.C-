#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int height;
};

int main() {
    Person p[3];
    for (int i = 0; i < 3; i++) {
        cin >> p[i].name >> p[i].height;
    }
    for (int i = 0; i < 3; i++) {
        cout << p[i].name << " : " << p[i].height << "cm\n";
    }
    return 0;
}
