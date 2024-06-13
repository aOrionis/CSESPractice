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

    int max_for_now = num_array[0];

    for (int i = 1; i < num; i++) {
        if (num_array[i] < max_for_now) {
            answer += max_for_now - num_array[i];
        }
        max_for_now = max(max_for_now, num_array[i]);
    }
    cout << answer;
    
    return 0;
}