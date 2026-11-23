#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    Student s[5];
    int max_idx = 0;
    for (int i = 0; i < 5; i++) {
        cin >> s[i].name >> s[i].score;
        if (s[i].score > s[max_idx].score) {
            max_idx = i;
        }
    }
    cout << s[max_idx].name << " " << s[max_idx].score << "\n";
    return 0;
}
