#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class game {
    public:
        string id;
        int level;

        game(string id, int level) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    cin >> user2_id >> user2_level;

    // Please write your code here.
    game gameing = game("codetree", 10);
    cout << "user " << gameing.id << " lv " << gameing.level << endl;
    gameing.id = user2_id;
    gameing.level = user2_level;
    cout << "user " << gameing.id << " lv " << gameing.level;
    return 0;
}