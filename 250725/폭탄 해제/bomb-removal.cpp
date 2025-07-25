#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Bomb {
    public:
        string unlock;
        char wire;
        int second;

        Bomb(string unlock, char wire, int second) {
            this->unlock = unlock;
            this->wire = wire;
            this->second = second;
        }
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    // Please write your code here.
    Bomb bomb = Bomb(unlock_code, wire_color, seconds);
    cout << "code : " << bomb.unlock << endl;
    cout << "color : " << bomb.wire << endl;
    cout << "second : " << bomb.second;
    return 0;
}