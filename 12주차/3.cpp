#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person me = {"Yejun", 12};
    Person fr;
    cin >> fr.name >> fr.age;
    cout << "Your name: " << me.name << ", age: " << me.age << "\n";
    cout << "Friend's name: " << fr.name << ", age: " << fr.age << "\n";
    return 0;
}
