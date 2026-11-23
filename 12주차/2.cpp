#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string school;
    int grade;
};

int main() {
    Student s;
    cin >> s.name >> s.school >> s.grade;
    cout << "Name : " << s.name << "\n";
    cout << "School : " << s.school << "\n";
    cout << "Grade : " << s.grade << "\n";
    return 0;
}
