#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string line;
    getline(cin, line);

    cout << (((line[0] - '0') + (line[4] - '0') == (line[8] - '0')) ? "YES" : "NO");

    return 0;
}