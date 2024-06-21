#include <bits/stdc++.h>

using namespace std;

int main () {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    long long x1;
    long long x2;
    long long num;
    long long move = 0;

    cin >> N;
    cin >> x1;

    for (int i = 1; i < N; i++) {
        cin >> x2;
        num = max(x1, x2);
        move += num - x2;
        x1 = num;
    }

    cout << move << '\n';
    return 0;
}
