#include<bits/stdc++.h>
using namespace std;
struct Student {
    int id;
    string name;
    int score;
};
bool compareStudents(const Student &a, const Student &b) {
    if (a.score == b.score) {
        return a.id < b.id; 
    }
    return a.score > b.score; 
}
int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cin >> students[i].id >> students[i].name >> students[i].score;
    }
    sort(students.begin(), students.end(), compareStudents);
    for (const auto &student : students) {
        cout << student.id << " " << student.name << " " << student.score << endl;
    }
    return 0;
}
