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

    int num;
    cin >> num;

    if (num == 1) {
        cout << 1;
        return 0;
    }

    if (num <= 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
        
    // writing even numbers
    for (int i = 2; i <= num; i += 2) {
        cout << i << " ";
    }

    // writing odd numbers
    for (int i = 1; i <= num; i += 2) {
        cout << i << " ";
    }


    return 0;
}