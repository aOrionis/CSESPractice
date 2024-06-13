#include <iostream>
#include <string>
#include <vector>
using namespace std;
 

int32_t main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string word;
    cin >> word;

    int left = 0;
    unsigned int right = 0;
    unsigned int answer = 0;

    while (right < word.size()) {
        if (word[left] == word[right]) {
            answer = max(answer, right - left + 1); 
            right += 1;
        } else {
            left = right;
        }
    }

    cout << answer;

    return 0;

}