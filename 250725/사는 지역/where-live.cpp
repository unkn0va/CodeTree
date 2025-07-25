#include <iostream>
#include <string>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class Person {
    public:
        string id, address, live;

        Person(string id = "", string address = "", string live = "") {
            this->id = id;
            this->address = address;
            this->live = live;
        }
};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];
    }

    // Please write your code here.
    int min_val = 0;
    Person persons[11];
    for (int j = 0; j < n; j++) {
        persons[j] = Person(name[j], street_address[j], region[j]);
        if (persons[min_val].id < persons[j].id) min_val = j;
    }
    
    cout << "name " << persons[min_val].id << endl;
    cout << "addr " << persons[min_val].address << endl;
    cout << "city " << persons[min_val].live;
    return 0;
}