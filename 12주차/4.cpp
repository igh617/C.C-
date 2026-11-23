#include <iostream>
#include <string>
using namespace std;

struct SchoolInfo {
    string school;
    int grade;
};

int main() {
    SchoolInfo s1 = {"Jejuelementary", 6};
    SchoolInfo s2;
    cin >> s2.school >> s2.grade;
    cout << s1.grade << " grade in " << s1.school << " School\n";
    cout << s2.grade << " grade in " << s2.school << " School\n";
    return 0;
}
