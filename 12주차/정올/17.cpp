#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int s1, s2, s3;
    int sum;
};

void input(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].s1 >> arr[i].s2 >> arr[i].s3;
        arr[i].sum = arr[i].s1 + arr[i].s2 + arr[i].s3;
    }
}

bool cmp(const Student& a, const Student& b) {
    return a.sum > b.sum;
}

void sortStudents(Student arr[], int n) {
    sort(arr, arr + n, cmp);
}

void output(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].s1 << " " << arr[i].s2 << " " << arr[i].s3 << " " << arr[i].sum << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    Student arr[10];
    input(arr, n);
    sortStudents(arr, n);
    output(arr, n);
    return 0;
}
