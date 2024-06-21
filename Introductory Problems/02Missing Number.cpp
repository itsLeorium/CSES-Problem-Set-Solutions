#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int N;
    cin >> N;
    long long sum = N*(N+1)/2;
    long long x;

    while (cin >> x) {
        sum = sum - x;
    }
    cout << sum << '\n';

    return 0;
}
