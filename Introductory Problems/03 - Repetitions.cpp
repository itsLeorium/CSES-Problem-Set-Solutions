#include <bits/stdc++.h>

using namespace std;

int main () {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string x;
    char temp = ' ';
    long long len = 0;
    long long result = 1;
    cin >> x;

    for (char elem : x) {
        if (elem == temp) {
            len += 1;
            if (len > result) {
                result = len;
            }
        } else {
            len = 1;
        }
        temp = elem;
    }

    cout << result << '\n';

    return 0;
}
