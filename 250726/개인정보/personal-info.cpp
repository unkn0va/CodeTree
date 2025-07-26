#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string name[5];
int height[5];
double weight[5];

class Student {
    public:
        int height;
        double weight;
        string name;

        Student(int height, double weight, string name) {
            this->height = height;
            this->weight = weight;
            this->name = name;
        }

        Student() {}
};

bool cmp1(Student a, Student b) {
    return a.height > b.height;
}

bool cmp2(Student a, Student b) {
    return a.name < b.name;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
    }

    // Please write your code here.
    cout << fixed;
    cout.precision(1);

    Student students[5];
    for (int j = 0; j< 5; j++) {
        students[j] = Student(height[j], weight[j], name[j]);
    }

    sort(students, students+5, cmp2);
    cout << "name" << endl;
    for (int j = 0; j < 5; j++) {
        cout << students[j].name << " " << students[j].height << " " << students[j].weight << endl;
    }
    cout << endl;
    sort(students, students+5, cmp1);
    cout << "height" << endl;
    for (int j = 0; j < 5; j++) {
        cout << students[j].name << " " << students[j].height << " " << students[j].weight << endl;
    }

    return 0;
}