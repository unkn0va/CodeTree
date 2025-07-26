#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class User {
    public :
        string name;
        int height, weight;

        User(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        User() {}
};

bool cmp(User a, User b) {
    if (a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
    }

    // Please write your code here.
    User users[11];
    for (int j = 0; j < n; j++) {
        users[j] = User(name[j], height[j], weight[j]);
    }
    sort(users, users+n, cmp);
    for (int j = 0; j < n; j++) {
        cout << users[j].name << " " << users[j].height << " " << users[j].weight << endl;
    }
    return 0;
}