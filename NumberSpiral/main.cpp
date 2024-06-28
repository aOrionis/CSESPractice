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

    int test_cases;
    cin >> test_cases;

    long long int row, col;
    long long int answer;

    while (test_cases-- > 0) {
        cin >> row >> col;
       long long int diagonal;

        // diagonal element
        if (row == col) {
            diagonal = (row * row) - (row - 1);
            cout << diagonal << "\n";
        }     
        else 
        if (row > col) {
            diagonal = (row * row) - (row - 1);
            if (row % 2 == 0) {
                cout << diagonal + (row - col) << "\n";
            }
            else {
                cout << diagonal - (row - col) << "\n";
            }
        } else {
            diagonal = (col * col) - (col - 1);
            if (col % 2 == 0) {
                cout << diagonal - (col - row) << "\n";
            } else {
                cout << diagonal + (col - row) << "\n";
            }
        }
    }
    return 0;
}