#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
class Student {
public:
    std::string name;
    int marks;
    int rollNo;

    Student(std::string n, int m, int r) : name(n), marks(m), rollNo(r) {}

    bool operator<(const Student& other) const {
        if (marks != other.marks) {
            return marks < other.marks;
        }
        if (name != other.name) {
            return name < other.name;
        }
        return rollNo < other.rollNo;
    }
};

int main() {
    int n;
    std::cin >> n;
    
    std::vector<Student> students;

    for (int i = 0; i < n; ++i) {
        std::string name;
        int marks, rollNo;
        std::cin >> name >> marks >> rollNo;
        students.emplace_back(name, marks, rollNo);
    }

    std::sort(students.begin(), students.end());

    for (const Student& student : students) {
        std::cout << student.name << " " << student.marks << " " << student.rollNo << std::endl;
    }

    return 0;
}
