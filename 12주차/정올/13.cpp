#include <iostream>
#include <string>
using namespace std;

struct Info {
    string name;
    string tel;
    string addr;
};

int main() {
    Info p;
    cin >> p.name >> p.tel >> p.addr;
    cout << "name : " << p.name << "\n";
    cout << "tel : " << p.tel << "\n";
    cout << "addr : " << p.addr << "\n";
    return 0;
}
