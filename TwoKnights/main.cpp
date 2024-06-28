#include <iostream>
#include <vector>
using namespace std;
 

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long num;
    cin >> num;

    for (long long i = 1; i <= num; i++) {
        long long all_pos = (i * i) * (i * i - 1) / 2;
        long long invalid_pos = 4 * (i - 1) * (i - 2);

        cout << all_pos - invalid_pos << "\n";
    }
    return 0;
}