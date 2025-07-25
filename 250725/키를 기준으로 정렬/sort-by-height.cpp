#include <iostream>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Person {
    public:
        string name;
        int height, weight;

        Person(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Person() {}
};

bool cmp(Person a, Person b) {
    return a.height < b.height;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
    }

    // Please write your code here.
    Person persons[11];
    for (int j = 0; j < n; j++) {
        persons[j] = Person(name[j], height[j], weight[j]);
    }
    sort(persons, persons+n, cmp);

    for (int j = 0; j < n; j++) {
        cout << persons[j].name << " " << persons[j].height << " " << persons[j].weight << endl;
    }
    return 0;
}