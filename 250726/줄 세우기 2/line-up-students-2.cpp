#include <iostream>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

class Student {
    public :
        int height, weight, num;

        Student(int height, int weight, int num) {
            this->height = height;
            this->weight = weight;
            this->num = num;
        }

        Student() {}
};

bool cmp(Student a, Student b) {
    if (a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
    }

    // Please write your code here.
    Student students[1001];
    for (int j = 0; j < N; j++) {
        students[j] = Student(h[j], w[j], j+1);
    }
    sort(students, students+N, cmp);
    for (int j = 0; j < N; j++) {
        cout << students[j].height << " " << students[j].weight << " " << students[j].num << endl;
    }

    return 0;
}