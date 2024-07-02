#include <iostream>
#include <cstring>
using namespace std;

int n;
int t[1001];
int s[1001];
int x, k;

int taken[1001];

bool check(int level) {
    int timetaken = 0;
    int itemtaken = 0;
    for (int i = 0; i < n; i++) {
        if (taken[i]) {
            timetaken += t[i];
            itemtaken += 1;
        }
    }
    timetaken += t[level];
    itemtaken++;
    if (itemtaken <= x && timetaken <= k) {
        return true;
    } else {
        return false;
    }
}

int rec(int level) {
    if (level == n) {
        return 0;
    }
    int ans = rec(level + 1);
    if (check(level)) {
        taken[level] = 1;
        ans = max(ans, s[level] + rec(level + 1));
        taken[level] = 0;
    }
    return ans; // Adding the return statement here
}

void solve() {
    cin >> n >> x >> k; // Adding input for x and k
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> s[i];
    }
    memset(taken, 0, sizeof(taken));
    cout << rec(0) << endl;
}

int main() {
    solve();
    return 0;
}
