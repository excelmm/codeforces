#include <iostream>

using namespace std;

int main() {
    int watermelons;
    cin >> watermelons;
    cout << (watermelons % 2 == 0 && watermelons > 2 ? "YES" : "NO");
    return 0;
}