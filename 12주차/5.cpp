#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p[3];
    for (int i = 0; i < 3; i++) {
        cin >> p[i].name >> p[i].age;
    }
    for (int i = 0; i < 3; i++) {
        cout << "Name : " << p[i].name << "\n";
        cout << "Age : " << p[i].age << "\n";
    }
    return 0;
}
