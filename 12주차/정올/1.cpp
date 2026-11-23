#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p;
    cin >> p.name >> p.age;
    cout << "Your name is " << p.name << " and you are " << p.age << " years old.\n";
    return 0;
}
