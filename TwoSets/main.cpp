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

    long long sum = 0; 

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    if (sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    if (num % 2 == 0) {
        cout << num / 2 << "\n";
        for (int i = 2; i <= num / 2; i += 2) {
            cout << i << " " << num - i + 1 << " ";
        }
        cout << "\n";
        cout << num / 2 << "\n";
        for (int i = 1; i <= num / 2; i += 2) {
            cout << i << " " << num - i + 1 << " ";
        }
        cout << "\n";
    } else {
        cout << num / 2 + 1 << "\n";
        for (int i = 1; i <= num / 2; i += 2) {
            cout << i << " " << num - i << " ";
        }
        cout << "\n";
        cout << num - (num / 2 + 1) << "\n";
        for (int i = 2; i <= num / 2; i += 2) {
            cout << i << " " << num - i << " ";
        }
        cout << num << "\n";
    }
    return 0;
}