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

    long answer = 0;
    vector<int> num_array(num, 0);

    for (int i = 0; i < num; i++) {
        cin >> num_array[i];
    }

    for (int i = 1; i < num; i++) {
        if (num_array[i] < num_array[i - 1]) {
            answer += (num_array[i - 1] - num_array[i]);
            num_array[i] = num_array[i - 1];
        }
    }
    cout << answer;
    
    return 0;
}