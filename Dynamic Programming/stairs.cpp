#include <iostream>
using namespace std;

int n;

int rec(int level) {
    if (level > n) return 0;
    if (level == n) return 1;

    int ans = 0;
    for (int step = 1; step <= 3; step++) {
        ans += rec(level + step);
    }
    return ans;
}

void solve() {
    cin >> n;
    cout << rec(0) << endl;
}

int main() {
    solve();
    return 0;
}
