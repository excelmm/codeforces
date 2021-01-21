#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cin >> num;

    vector<int> force;
    for (int i = 0; i < 3; ++i) {
        int next;
        cin >> next;
        force.push_back(next);
    }
    for (int i = 0; i < num - 1; ++i) {
        for (int j = 0; j < 3; ++j) {
            int next;
            cin >> next;
            force[j] += next;
        }
    }
    bool ans = true;
    for (int i = 0; i < 3; ++i) {
        if (force[i] != 0) ans = false;
    }
    cout << (ans ? "YES" : "NO") << endl;
}